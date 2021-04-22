//Дана функция y=f(x). Найти значение функции по x
#include <iostream>
#include <fstream>
#include <cmath>

float x, y;

void ReadFromFile();
void SolvingFunction();

int main()
{
    ReadFromFile();
    SolvingFunction();

    return 0;
}

void ReadFromFile(){
    std::ifstream fin;

    fin.open("x.txt");
    fin >> x;
    fin.close();
}
void SolvingFunction(){
    if (x > 0){
        y = 1.5*x + 5;
        std::cout << "y=" << y << "  when x=" << x << std::endl;
    } else
        std::cout << "No solucion" << std::endl;

    if (x == 0){
        y = -2;
        std::cout << "y=" << y << "  when x=" << x << std::endl;
    } else
        std::cout << "No solucion" << std::endl;

    if (x < 0){
        y = 2*fabs(x+4) - 6;
        std::cout << "y=" << y << "  when x=" << x << std::endl;
    } else
        std::cout << "No solucion" << std::endl;
}
