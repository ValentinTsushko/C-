#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>

#pragma once

using namespace std;

// m it's number to reduce the generation area, if m = 10 then area from 0 to 1,
// else if m = 1000 then from 0 to 0.01.
#define m 10

// it's multiplicative method, var_1 because it's my first variant.
// this method works fast on the big numbers, but on the little numbers it works not correct
class Var
{
public:
        int first_number();
        int t();
};
