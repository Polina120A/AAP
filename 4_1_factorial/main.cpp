#include <iostream>
#include <fstream>


int main()
{

    float num;
    float factorial = 1;
    int i;

    std::ifstream fin;

    fin.open("num.txt");
    fin >> num;

    for (i=1; i<=num; i++)
       {
       factorial=factorial*i;
       }
       std::cout << "factorial = " << factorial << std::endl;


    return 0;
}
