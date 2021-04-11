//Пользователь задаёт число Ч и Х. Посчитать y
#include <iostream>
#include <iomanip>
#include<cmath>
#include <fstream>

int main()
{
    int A;
    float x;


    std::ifstream fin;

    fin.open("x.txt");
    fin >> x;

    std::cout << "Enter A more then 2 " << std::endl;
    std::cin >> A;

    float y = 0;
    float a = x;

    if (A>=2) {
        for (int i = 2; i <= A; i++) {
            y = (pow(x, i)) / (i + 1);

            a += y;

        }

        std::cout << "Answer is " << a << std::endl;

    }
    else {
        std::cout << "Answer is " << a << std::endl;
    }
}

