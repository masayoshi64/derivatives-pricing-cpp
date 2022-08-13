#include "payoff_bridge.h"

payoff_bridge::payoff_bridge(const payoff_bridge &original)
{
    payoff_ptr = original.payoff_ptr->clone();
}

payoff_bridge::payoff_bridge(const payoff &inner_payoff)
{
    payoff_ptr = inner_payoff.clone();
}

payoff_bridge::~payoff_bridge()
{
    delete payoff_ptr;
}

payoff_bridge &payoff_bridge::operator=(const payoff_bridge &original)
{
    if (this != &original)
    {
        delete payoff_ptr;
        payoff_ptr = original.payoff_ptr->clone();
    }
    return *this;
}