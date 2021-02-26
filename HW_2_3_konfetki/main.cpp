/*Пользователь вводит цены 1 кг конфет и 1 кг печенья. Найдите стоимость:
  а) одной покупки из 300 г конфет и 400 г печенья;
  б) трех покупок, каждая из 2 кг печенья и 1 кг 800 г конфет. */


#include <iostream>



int main()
{
    float ALL;
    float coKg;
    float caKg;
    float ALL2;


    std::cout << "Enter price of cookies per kg" << std::endl;       //300г конфет и 400г печенья
    std::cin >> coKg;
    std::cout << "Enter price of candies per kg" << std::endl;
    std::cin >> caKg;
    ALL = caKg*0.4+coKg*0.3;
    std::cout << "Price of candies and cookies = " << ALL << std::endl;
    ALL2 = 3*(2*coKg+1.8*caKg);                                           //3 покупки 2кг печенья и 1,8 кг конфет
    std::cout << "Price of candies and cookies2 = " << ALL2 << std::endl;



    return 0;
}
