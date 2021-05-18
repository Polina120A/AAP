#include <iostream>
#include <fstream>

struct Sensor{
    float range, speed;
};
bool rangeGreat(Sensor A, Sensor a, Sensor B, Sensor b);

int main()
{
    Sensor A,a,B,b;
    std::ifstream fin;

    fin.open("range.txt");
    fin >> A.range >> a.range >> B.range >> b.range; // Диапазон от A до а и диапазон от B до b
    fin.close();

    float d = rangeGreat(A,a,B,b);

    std::cout << d;

    return 0;
}
bool rangeGreat(Sensor A, Sensor a, Sensor B, Sensor b){
    if ((a.range - A.range) > (b.range - B.range)){
        std::cout << "[" << A.range << ";" << a.range << "]" << std::endl;
    } else
        std::cout << "[" << B.range << ";" << b.range << "]" << std::endl;
}
