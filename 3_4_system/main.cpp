//Дана функция y=f(x). Найти значение функции по x
#include <iostream>
#include <fstream>
#include <cmath>

int main()
{

    float x, y;

    std::ifstream fin;

    fin.open("x.txt");
    fin >> x;
    fin.close();



    if (x > 5){
        y = 3*x - 5;
    std::cout << "y=" << y << "  when x=" << x << std::endl;
    } else
        std::cout << "No solucion" << std::endl;

    if (x == 5){
        y = 10;
    std::cout << "y=" << y << "  when x=" << x << std::endl;
    } else
        std::cout << "No solucion" << std::endl;

    if (x < 5){
        y = 2*fabs(x-2)+5;
    std::cout << "y=" << y << "  when x=" << x << std::endl;
    } else
        std::cout << "No solucion" << std::endl;



    return 0;
}
