#include <iostream>
#include <fstream>


int main()
{
    float x, y;

    std::ifstream fin;

    fin.open("x,y.txt");
    fin >> x >> y;
    fin.close();

    if ((x*x+y*y) > 4 && x <= 2 && y < x)
        std::cout << "Falling into the area" << std::endl;
    else
        std::cout << "Not falling into the area" << std::endl;

    return 0;
}
