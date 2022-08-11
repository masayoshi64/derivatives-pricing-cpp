#include "payoff.h"
#include <algorithm>
using namespace std;

payoff_call::payoff_call(double strike_) : strike(strike_) {}
double payoff_call::operator()(double spot) const
{
    return max(spot - strike, 0.0);
}