#include "simple_mc.h"
#include "random.h"
#include <cmath>
#include <iostream>

#if !defined(_MSC_VER)
using namespace std;
#endif

double simple_monte_carlo(const payoff &the_payoff, double expiry, double spot, double vol, double r, unsigned long number_of_paths)
{
    double variance = vol * vol * expiry;
    double root_variance = sqrt(variance);
    double ito_correction = -0.5 * variance;

    double moved_spot = spot * exp(r * expiry + ito_correction);
    double this_spot;
    double running_sum = 0;

    for (unsigned int i = 0; i < number_of_paths; i++)
    {
        double this_gaussian = get_one_gaussian_by_box_muller();
        this_spot = moved_spot * exp(root_variance * this_gaussian);
        double this_payoff = the_payoff(this_spot);
        running_sum += this_payoff;
    }

    double mean = running_sum / number_of_paths;
    mean *= exp(-r * expiry);
    return mean;
}