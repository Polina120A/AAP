//Напишите программу, которая принимает от пользователя координаты точки и
//определяет, попала ли точка в заштрихованную область.
#include <iostream>
#include <fstream>


int main()
{
    float x, y;

    std::ifstream fin;

    fin.open("x,y.txt");
    fin >> x >> y;
    fin.close();

    if (((x*x+y*y) <=1 && (x*x+y*y) >=0.09) || ((x*x+y*y) <= 0.09 && x<= 0 && y >= 0))
        std::cout << "Falling into the area" << std::endl;
    else
        std::cout << "Not falling into the area" << std::endl;




    return 0;
}
