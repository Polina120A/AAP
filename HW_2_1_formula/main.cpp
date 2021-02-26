/* Вычислите значение выражения */


#include <iostream>
#include <cmath>


int main()
{
    float x;
    float A;
    x = -2.34;
    A = (fabs(x-5)-sin(x))/3+sqrt(x*x+2014)*cos(2*x)-3;
    std::cout << "Answer = " << A << std::endl;



    return 0;
}
