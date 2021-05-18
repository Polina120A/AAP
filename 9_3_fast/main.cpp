//Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести данные о самом быстром роботе.
#include <iostream>
#include <fstream>

struct Robot{
    float speed, weight;
};

bool speedGreat (Robot a, Robot b);

int main()
{
    Robot a,b;
    std::ifstream fin;

    fin.open("speed.txt");
    fin >> a.speed >> b.speed;
    fin.close();

    float d = speedGreat(a,b);

    std::cout << d;


    return 0;
}

bool speedGreat (Robot a, Robot b){
    if (a.speed > b.speed){
        std::cout << a.speed << std::endl;
    } else
        std::cout << b.speed << std::endl;
}
