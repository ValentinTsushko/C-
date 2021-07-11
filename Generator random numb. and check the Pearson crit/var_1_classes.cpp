include "var_1.h"
#include "pirson.cpp"

int Var::first_number()
{
        int a = rand() % 10000;
        if(a < 0){ a *= -1; }

        return ((a % 2 != 0) ? a : a + 1);
}
int Var::t()
{
        return(rand() % 10);
}
