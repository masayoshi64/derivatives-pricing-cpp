#ifndef VANILLA_H
#define VANILLA_H

#include "payoff_bridge.h"

class vanilla_option
{
public:
    vanilla_option(const payoff_bridge &the_payoff_, double expiry_);
    double get_expiry() const;
    double option_payoff(double spot) const;

private:
    double expiry;
    payoff_bridge the_payoff;
};

#endif
