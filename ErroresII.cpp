#include <iostream>
#include <cmath>

int main (void)
{
    float Under = 1.0;
    float Over = 1.0;
    int N = 200;
    int n = 1;

    std::cout.precision(7);
    std::cout.setf(std::ios::scientific);

    while (n <= N){
        Under = Under/2.0;
        Over = Over*2.0;

        std::cout << n << "\t" << Under << "\t" << Over <<  "\n";
        ++n;
    }

    return 0;
}
