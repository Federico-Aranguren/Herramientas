#include<iostream>
#include<cmath>

typedef double  REAL;

int main ()
{
    std::cout.precision(8); std::cout.setf(std::ios::scientific);
    REAL a=1;
    REAL b=1;
    REAL c=1;
    for (int n = 0; n < 30; n += 1){
        REAL xa1 = (-b - std::sqrt( b*b - 4*a*c))/(2*a);
        REAL xa2 = (-b + std::sqrt( b*b - 4*a*c))/(2*a);
        REAL xb1 = (-2*c)/(b - std::sqrt(b*b - 4*a*c));
        REAL xb2 = (-2*c)/(b + std::sqrt(b*b - 4*a*c));
        c = c/10;

        std::cout << n
                  << "\t" << xa1 << "\t" << xa2
                  << "\t" << xb1 << "\t" << xb2
                  << "\n";
    }
    return 0;
}
