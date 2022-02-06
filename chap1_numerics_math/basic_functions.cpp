/* 
C++17 Standard Library Quick Reference by Peter Van Weert and Marc Gregoire 2019

Chap 1. Numerics and Math
Common Mathematical Functions <cmath>
The <cmath> header defines an extensive collection of common math functions in the std namesace. Unless otherwise specified, all functions are overloaded to accept all standard numerical types.
*/
#include <iostream>
#include <cmath>

/*
Basic Functions

abs(x), fabs(x), fabsf(x), fabsl(x)
Returns the absolute value of x. abs() and fabs() accept all numeric types.

abs(x), labs(x), llabs(x)
Defined by <cstdlib>. Return absolute value for an integral x.
*/

int main()
{
    std::cout << "abs ((float)-10.6) = " << std::abs ((float)-10.6) << std::endl;
    std::cout << "abs ((double)-10.6) = " << std::abs ((double)-10.6) << std::endl;
    std::cout << "abs ((long double)-10.6) = " << std::abs ((long double)-10.6) << std::endl;

    std::cout << "abs ((int)-12) = " << std::abs ((int)-12) << std::endl;
    std::cout << "abs ((long)-12) = " << std::abs ((long)-12) << std::endl;
    std::cout << "abs ((long long)-12) = " << std::abs ((long long)-12) << std::endl;

    return 0;
}


