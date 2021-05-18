//Робот-автомобиль описывается как структура с полями: скорость, длительность движения и номер. Напишите функцию для расчёта пройденного расстояния.
#include <iostream>
#include <fstream>

struct Robot{
    float S, t;
};

int main()
{
    Robot a,b;
    std::ifstream fin;

    fin.open("data.txt");
    fin >> a.S >> b.t;
    fin.close();

    float d = a.S/b.t;

    std::cout << d;

    return 0;
}
