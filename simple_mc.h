#ifndef SIMPLEMC_H
#define SIMPLEMC_H
#include "payoff.h"

double simple_monte_carlo(const payoff &the_payoff, double expiry, double spot, double vol, double r, unsigned long number_of_paths);
#endif