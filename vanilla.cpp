#include "vanilla.h"

vanilla_option::vanilla_option(const payoff_bridge &the_payoff_, double expiry_) : the_payoff(the_payoff_), expiry(expiry_)
{
}
double vanilla_option::get_expiry() const { return expiry; }
double vanilla_option::option_payoff(double spot) const { return the_payoff(spot); }