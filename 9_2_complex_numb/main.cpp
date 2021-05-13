//. Напишите функцию, которая будет складывать комплексные числа.
#include <iostream>
#include <complex>
#include <fstream>

struct Number {
    float x,y;
};

int main()
{
    Number pA, pB;

    std::ifstream fin;

    fin.open("numb.txt");
    fin >> pA.x >> pB.x >> pA.y >> pB.y; //pA.x И pA.y - реальные части комплексных чисел, а pB.x И pB.y - мнимые
    fin.close();

    float sumX = pA.x + pB.x;
    float sumY = pA.y + pB.y;
    if (sumY > 0) {
    std::cout << sumX << "+" << sumY<<"i";
    } else {
       std::cout << sumX << sumY <<"i";
    }

    return 0;
}


