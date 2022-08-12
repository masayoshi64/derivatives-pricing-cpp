#include "vanilla.h"

vanilla_option::vanilla_option(const payoff &the_payoff_, double expiry_) : expiry(expiry_)
{
    the_payoff_ptr = the_payoff_.clone();
}
double vanilla_option::get_expiry() const { return expiry; }
double vanilla_option::option_payoff(double spot) const { return (*the_payoff_ptr)(spot); }
vanilla_option &vanilla_option::operator=(const vanilla_option &original)
{
    if (this != &original)
    {
        expiry = original.expiry;
        delete the_payoff_ptr;
        the_payoff_ptr = original.the_payoff_ptr->clone();
    }
    return *this;
}
vanilla_option::~vanilla_option()
{
    delete the_payoff_ptr;
}