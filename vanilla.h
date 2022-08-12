#ifndef VANILLA_H
#define VANILLA_H

#include "payoff.h"

class vanilla_option
{
public:
    vanilla_option(const payoff &the_payoff_, double expiry_);
    double get_expiry() const;
    double option_payoff(double spot) const;
    vanilla_option &operator=(const vanilla_option &original);
    ~vanilla_option();

private:
    double expiry;
    payoff *the_payoff_ptr;
};

#endif
