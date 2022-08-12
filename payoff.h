#ifndef PAYOFF_H
#define PAYOFF_H

class payoff
{
public:
    payoff(){};
    virtual double operator()(double spot) const = 0;
    virtual ~payoff(){};
    virtual payoff *clone() const = 0;

private:
};

class payoff_call : public payoff
{
public:
    payoff_call(double strike_);
    virtual double operator()(double spot) const;
    virtual ~payoff_call() {}
    virtual payoff *clone() const;

private:
    double strike;
};
#endif