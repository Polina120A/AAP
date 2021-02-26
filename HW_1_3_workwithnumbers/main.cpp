/*Пользователь вводит три числа. Найдите среднее арифметическое этих чисел,
  а также разность удвоенной суммы первого и третьего чисел и утроенного второго числа. */


#include <iostream>



int main()
{
    float num1;
    float num2;
    float num3;
    float AM;
    float D;

    std::cout << "Enter number 1" << std::endl;
    std::cin >> num1;
    std::cout << "Enter number 2" << std::endl;
    std::cin >> num2;
    std::cout << "Enter number 3" << std::endl;
    std::cin >> num3;
    AM = (num1+num2+num3)/3;                             //ищем среднее арифметическое
    std::cout << "Arithmetic mean = " << AM << std::endl;
    D = 2*(num1+num3)-3*num2;                            //ищем разность
    std::cout << "Difference = " << D << std::endl;







    return 0;
}
