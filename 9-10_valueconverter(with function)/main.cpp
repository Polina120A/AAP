/* Сделать конвертер величин. Плотность (грамм на литр, грамм на кубический дециметр, фунт на кубический ярд)*/

#include <iostream>

float gl;
float gdm3;
float lbyd3;

void TranslatingFromGrammesPerLiters();
void TranslatingFromGrammesPerDecimeterCubic();
void TranslatingFromGrammesPerCubicYard();

int main()
{
    TranslatingFromGrammesPerLiters();
    TranslatingFromGrammesPerDecimeterCubic();
    TranslatingFromGrammesPerCubicYard();

    return 0;
}

void TranslatingFromGrammesPerLiters(){
    std::cout << "Enter value in grammes per liters" << std::endl;
    std::cin >> gl;
    gdm3 = gl*1;
    std::cout << "Value in gram per decimeter cubic = " << gdm3 << std::endl;
    lbyd3 = gl/0.59;
    std::cout << "Value in pounds per cubic yard = " << lbyd3 << std::endl;
}
void TranslatingFromGrammesPerDecimeterCubic(){
    std::cout << "Enter value in gram per decimeter cubic" << std::endl;
    std::cin >> gdm3;
    gl = gdm3*1;
    std::cout << "Value in grammes per liters = " << gl << std::endl;
    lbyd3 = gdm3/0.59;
    std::cout << "Value in pounds per cubic yard = " << lbyd3 << std::endl;
}
void TranslatingFromGrammesPerCubicYard(){
    std::cout << "Enter value in pounds per cubic yard" << std::endl;
    std::cin >> lbyd3;
    gl = lbyd3*0.59;
    std::cout << "Value in grammes per liters = " << gl << std::endl;
    gdm3 = lbyd3*0.59;
    std::cout << "Value in gram per decimeter cubic = " << gdm3 << std::endl;

}
