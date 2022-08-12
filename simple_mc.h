#ifndef SIMPLEMC_H
#define SIMPLEMC_H
#include "vanilla.h"

double simple_monte_carlo(const vanilla_option &option, double spot, double vol, double r, unsigned long number_of_paths);
#endif