//Пользователь вводит день месяца. Вывести на экран день недели. Считаем, что 1-е
//число месяца это вторник.
#include <iostream>
#include <fstream>


int main()
{
    float day;

    std::ifstream fin;

    fin.open("day.txt");
    fin >> day;
    fin.close();

    if ( day == 1 || day == 8 || day == 15 || day == 22 || day == 29)
        std::cout << "Vtornik" << std::endl;
    else if (day == 2 || day == 9 || day == 16 || day == 23 || day == 30)
        std::cout << "Sreda" << std::endl;
    else if (day == 3 || day == 10 || day == 17 || day == 24 || day == 31)
        std::cout << "Chetverg" << std::endl;
    else if (day == 4 || day == 11 || day == 18 || day == 25)
        std::cout << "Pyatnitsa" << std::endl;
    else if (day == 5 || day == 12 || day == 19 || day == 26)
        std::cout << "Sybbota" << std::endl;
    else if (day == 6 || day == 13 || day == 20 || day == 27)
        std::cout << "Voskresenie" << std::endl;
    else
        std::cout << "Ponedelnik" << std::endl;







    return 0;
}
