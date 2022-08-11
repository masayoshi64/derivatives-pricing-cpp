#include "simple_mc.h"
#include <iostream>
using namespace std;

int main()
{
    double expiry = 1.0 / 6;
    double strike = 14000;
    double spot = 14500;
    double vol = 0.38;
    double r = 0.06;
    unsigned long number_of_paths = 1e6;

    payoff_call call_payoff(strike);
    double result_call = simple_monte_carlo(call_payoff, expiry, spot, vol, r, number_of_paths);

    cout << result_call << endl; // 1233
}