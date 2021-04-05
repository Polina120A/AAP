//Пользователь вводит день месяца. Вывести на экран день недели. Считаем, что 1-е
//число месяца это вторник.
#include <iostream>
#include <fstream>


int main()
{
    int day;

    std::ifstream fin;

    fin.open("day.txt");
    fin >> day;
    fin.close();

    switch (day)
    {
        case 1:
        std::cout << "vtornik";
        break;
        case 2:
        std::cout << "sreda";
        break;
        case 3:
        std::cout << "chetverg";
        break;
        case 4:
        std::cout << "pyatniza";
        break;
        case 5:
        std::cout << "subbota";
        break;
        case 6:
        std::cout << "voskresenie";
        break;
        case 7:
        std::cout << "ponedelnik";
        break;
        case 8:
        std::cout << "vtornik";
        break;
        case 9:
        std::cout << "sreda";
        break;
        case 10:
        std::cout << "chetverg";
        break;
        case 11:
        std::cout << "pyatniza";
        break;
        case 12:
        std::cout << "subbota";
        break;
        case 13:
        std::cout << "voskresenie";
        break;
        case 14:
        std::cout << "ponedelnik";
        break;
        case 15:
        std::cout << "vtornik";
        break;
        case 16:
        std::cout << "sreda";
        break;
        case 17:
        std::cout << "chetverg";
        break;
        case 18:
        std::cout << "pyatniza";
        break;
        case 19:
        std::cout << "subbota";
        break;
        case 20:
        std::cout << "voskresenie";
        break;
        case 21:
        std::cout << "ponedelnik";
        break;
        case 22:
        std::cout << "vtornik";
        break;
        case 23:
        std::cout << "sreda";
        break;
        case 24:
        std::cout << "chetverg";
        break;
        case 25:
        std::cout << "pyatniza";
        break;
        case 26:
        std::cout << "subbota";
        break;
        case 27:
        std::cout << "voskresenie";
        break;
        case 28:
        std::cout << "ponedelnik";
        break;
        case 29:
        std::cout << "vtornik";
        break;
        case 30:
        std::cout << "sreda";
        break;
        case 31:
        std::cout << "chetverg";
        break;
    }

            return 0;

    }

