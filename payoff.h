#ifndef PAYOFF_H
#define PAYOFF_H

class payoff
{
public:
    payoff(){};
    virtual double operator()(double spot) const = 0;
    virtual ~payoff(){};

private:
};

class payoff_call : public payoff
{
public:
    payoff_call(double strike_);
    virtual double operator()(double spot) const;
    virtual ~payoff_call() {}

private:
    double strike;
};
#endif