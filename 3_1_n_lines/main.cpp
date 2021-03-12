//Вывести на экран Н строк из нулей, причем количество нулей в каждой строке равно номеру строки.
//Количество строк Н вводит пользователь (можно из файла).


#include <iostream>
#include <fstream>

int main()
{
    float L;
    std::ifstream fin;

    fin.open("in.txt");
    fin >> L;

    for(int i=1; i < L; i++){
           for(int j=0; j < i; j++)
               std::cout << 0;
           std::cout << std::endl;
    }

    std::cout << std::endl;

       std::getchar();
       std::getchar();


    return 0;
}
