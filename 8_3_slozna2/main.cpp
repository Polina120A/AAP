#include <iostream>
#include <fstream>

int main()
{
    int A;
    float x;

    std::ifstream fin;

    fin.open("x.txt");
    fin >> x;

    std::cout << "Enter A more then 7 " << std::endl;
    std::cin >> A;

    float y = 0;
    float a = 0;

    if (x == 0) {
        std::cout << "Divide on zero" << std::endl;
    }
    else {
        for (int i = 7; i <= A; i+=2) {
            y = ((i-1)/2)/(i*x);

            a += y;

        }

        std::cout << "Answer is " << a << std::endl;
    }

}
