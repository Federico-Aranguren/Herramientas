#include <iostream>
#include <cmath>
#include<bits/stdc++.h>
#include<stdio.h>

int fact(int t) //Declaro la ufncion factorial owo
{
    if (t <= 1) return 1;
    else return t*fact(t-1);
}

int main ()
{
    std::cout.precision (15);
    std::cout.setf(std::ios::scientific); //indicador de precision

    std::cout << "N" << "\t" << "%1" << "\t" << "%2" << "\n"; //Para ordenar las columnas

    double x = M_PI/3; //Definir el argumento de la funcion y variables de la suma
    double an = x;
    double sum1 = 0;
    double sum2 = 0;
    int N = 1;

    for (int ii = 0; ii <= N; ii += 1){ //Algoritmo que desarolla las sumas

        sum1 += an; //Suma optimizada
        an =  an*(-pow(x,2)/((2*ii+3)*(2*ii+2))); //Optimización

        sum2 += (pow(-1,ii)*pow(x,2*ii+1))/fact(2*ii+1); //Suma gei

    }

    std::cout << N+1 << "\t" << abs((sum1-sin(x))*100/sin(x)) << "\t" << abs((sum2-sin(x))*100/sin(x)); //resultados owo

    return 0; //La wea del final que no se si es necesaria

}
