//Протабулировать функцию (шаг и диапазон задаёт пользователь)
#include <iostream>
#include <iomanip>
#include <math.h>
#include <fstream>

float step, leftEnd, rightEnd;
float y;

void ReadFromFile();
void FindingFunction();

int main()
{
    ReadFromFile();
    FindingFunction();

    return 0;
}
void ReadFromFile(){
    std::ifstream fin;

    fin.open("range.txt");
    fin >> leftEnd >> rightEnd;
    fin.close();

    fin.open("step.txt");
    fin >> step;
    fin.close();
}
void FindingFunction(){
    for (float x = leftEnd; x <= rightEnd; x = x + step){
        y=sqrt(2+3*x)+72*x+tan(4*x+31);
        std::cout << "x = " << x << " y = " << y << std::endl;
    }
}
