/* Найти периметр и площадь эллипса */


#include <iostream>
#include <cmath>
#include <fstream>

float s;
float a;
float b;
float p;

void FindingS();
void FindingP();
void WritingInFile();

int main()
{
    FindingS();
    FindingP();
    WritingInFile();

    return 0;
}

void FindingS(){
    std::cout << "Enter halfaxis a" << std::endl;
    std::cin >> a;
    std::cout << "Enter halfaxis b" << std::endl;
    std::cin >> b;
    s = 3.14*a*b;
    std::cout << "s= " << s << std::endl;
}
void FindingP(){
    std::cout << "Enter halfaxis a" << std::endl;
    std::cin >> a;
    std::cout << "Enter halfaxis b" << std::endl;
    std::cin >> b;
    p = 4*(3.14*a*b+(a-b)*(a-b))/(a+b);
    std::cout << "p= " << p << std::endl;
}
void WritingInFile(){
    std::ofstream fout;
    fout.open("s.txt");
    fout << s;
    fout.close();

    fout.open("p.txt");
    fout << p;
    fout.close();
}
