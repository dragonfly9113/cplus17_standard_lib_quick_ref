/* 
C++17 Standard Library Quick Reference by Peter Van Weert and Marc Gregoire 2019

Chap 1. Numerics and Math
Common Mathematical Functions <cmath>
The <cmath> header defines an extensive collection of common math functions in the std namesace. Unless otherwise specified, all functions are overloaded to accept all standard numerical types.
*/
#include <iostream>
#include <cmath>

/*
abs(x), fabs(x), fabsf(x), fabsl(x)
Returns the absolute value of x. abs() and fabs() accept all numeric types.

abs(x), labs(x), llabs(x)
Defined by <cstdlib>. Return absolute value for an integral x.
*/
int main_abs()
{
    std::cout << "abs ((float)-10.6) = " << std::abs ((float)-10.6) << std::endl;
    std::cout << "abs ((double)-10.6) = " << std::abs ((double)-10.6) << std::endl;
    std::cout << "abs ((long double)-10.6) = " << std::abs ((long double)-10.6) << std::endl;

    std::cout << "abs ((int)-12) = " << std::abs ((int)-12) << std::endl;
    std::cout << "abs ((long)-12) = " << std::abs ((long)-12) << std::endl;
    std::cout << "abs ((long long)-12) = " << std::abs ((long long)-12) << std::endl;

    return 0;
}


/*
fmin(x, y)
fmax(x, y)

Return the minimum or maximum of x and y.
std::min() and std::max() defined in <algorithm> are often more convenient, as they do not convert integers into double. These are explained later in this chapter.
*/
int main_fmin ()
{
    std::cout << "fmin ((float)-100.0, (float)1.0) = " << std::fmin ((float)-100.0, (float)1.0) << std::endl;
    std::cout << "fmin ((double)-100.0, (double)1.0) = " << std::fmin ((double)-100.0, (double)1.0) << std::endl;
    std::cout << "fmin ((long double)-100.0, (long double)1.0) = " << std::fmin ((long double)-100.0, (long double)1.0) << std::endl;

    std::cout << "fmin ((int)-10, (int)1) = " << std::fmin ((int)-10, (int)1) << std::endl;
    std::cout << "fmin ((long)-10, (long)1) = " << std::fmin ((long)-10, (long)1) << std::endl;
    std::cout << "fmin ((long long)-10, (long long)1) = " << std::fmin ((long long)-10, (long long)1) << std::endl;

    return 0;
}










