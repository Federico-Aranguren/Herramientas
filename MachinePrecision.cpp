#include <iostream>

int main (void)
{
    std::cout.precision(7);
    std::cout.setf(std::ios::scientific);


    float e = 1.0;
    float x = 1.0;
    int n = 1;

    while (n <= 30){
        e = e/2.0;
        x = x + e;


        std::cout << n << "\t" << x << "\t" << e << "\n";
        ++n;
        x = 1.0;

        }

    return 0;

}
