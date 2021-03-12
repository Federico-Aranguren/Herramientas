#include <iostream>

int main (void)
{
    float x=0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1;
    std::cout.precision(7);
    std::cout.setf(std::ios::scientific);
    std::cout << "x=" << x << "/n";

    float y=0.0;
    for (int ii = 1; ii <= 10; +ii){
        y += 0.1;
    }

    std::cout << "y=" << y;


    return 0;

}
