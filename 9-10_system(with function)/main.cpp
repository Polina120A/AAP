//Дана функция y=f(x). Найти значение функции по x
#include <iostream>
#include <fstream>
#include <cmath>

float x, y;

void ReadFromFile();
void SolvingSystem();

int main()
{
    ReadFromFile();
    SolvingSystem();

    return 0;
}
void ReadFromFile(){
    std::ifstream fin;

    fin.open("x.txt");
    fin >> x;
    fin.close();
}
void SolvingSystem(){
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
}
