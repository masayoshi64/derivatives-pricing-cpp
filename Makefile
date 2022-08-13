.PHONY: debug
debug: simple_mc_main.cpp simple_mc.cpp payoff.cpp random.cpp
	g++ -c random.cpp -o out/random.o --debug
	g++ -c payoff.cpp -o out/payoff.o --debug
	g++ -c payoff_bridge.cpp -o out/payoff_bridge.o --debug
	g++ -c vanilla.cpp -o out/vanilla.o --debug
	g++ -c simple_mc.cpp -o out/simple_mc.o --debug
	g++ -c simple_mc_main.cpp -o out/simple_mc_main.o --debug
	g++ -o main out/random.o out/payoff.o out/payoff_bridge.o out/vanilla.o out/simple_mc.o out/simple_mc_main.o --debug