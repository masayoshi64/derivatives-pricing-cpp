#ifndef PAYOFFBRIDGE_H
#define PAYOFFBRIDGE_H

#include "payoff.h"

class payoff_bridge
{
public:
    payoff_bridge(const payoff_bridge &original);
    payoff_bridge(const payoff &inner_payoff);

    inline double operator()(double spot) const;
    ~payoff_bridge();
    payoff_bridge &operator=(const payoff_bridge &original);

private:
    payoff *payoff_ptr;
};

inline double payoff_bridge::operator()(double spot) const
{
    return payoff_ptr->operator()(spot);
}
#endif