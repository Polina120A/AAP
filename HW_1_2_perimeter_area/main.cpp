/* Найти периметр и площадь эллипса */


#include <iostream>
#include <cmath>

int main()
{
    float s;                                 //ищем площадь
    float a;
    float b;
    float p;

    std::cout << "Enter halfaxis a" << std::endl;
    std::cin >> a;
    std::cout << "Enter halfaxis b" << std::endl;
    std::cin >> b;
    s = 3.14*a*b;
    std::cout << "s= " << s << std::endl;

                                            //ищем периметр
    p = 4*(3.14*a*b+(a-b)*(a-b))/(a+b);
    std::cout << "p= " << p << std::endl;



    return 0;
}
