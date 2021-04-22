/*Пользователь вводит три числа. Найдите среднее арифметическое этих чисел,
  а также разность удвоенной суммы первого и третьего чисел и утроенного второго числа. */


#include <iostream>
#include <fstream>

float num1;
float num2;
float num3;
float AM;
float D;

void EnterNumbers();
void FindingAM();
void FindingD();
void WriteInFile();

int main()
{
    EnterNumbers();
    FindingAM();
    FindingD();
    WriteInFile();

    return 0;
}

void EnterNumbers(){
    std::cout << "Enter number 1" << std::endl;
    std::cin >> num1;
    std::cout << "Enter number 2" << std::endl;
    std::cin >> num2;
    std::cout << "Enter number 3" << std::endl;
    std::cin >> num3;
}
void FindingAM(){
    AM = (num1+num2+num3)/3;                             //ищем среднее арифметическое
    std::cout << "Arithmetic mean = " << AM << std::endl;
}
void FindingD(){
    D = 2*(num1+num3)-3*num2;                            //ищем разность
    std::cout << "Difference = " << D << std::endl;
}
void WriteInFile(){
    std::ofstream fout;
    fout.open("AM.txt");
    fout << AM;
    fout.close();

    fout.open("D.txt");
    fout << D;
    fout.close();

}
