#include <iostream>
//Увеличить все нечётные элементы массива на 3, а чётные в 2 раза
int main()
{
    const int rows = 7;
    const int cols = 4;
    int mass[rows][cols];
    for (int i =0; i<rows;i++) //задаём значения в массиве
    {
        for (int j =0; j<cols; j++)
        {
            mass[i][j] = rand() % 10 + 10;
        }
    }

    for (int i = 0; i < rows; i++)//выводим первый массив
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << mass[i][j] << '\t';
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++)//проводим над элементами массива операции
    {
        for (int j = 0; j < cols; j++)
        {
            if (mass[i][j]%2==0)
            {
                mass[i][j] *= 2;
            }
            else
            {
                mass[i][j] += 3;
            }
        }
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < rows; i++)//выводим готовый массив
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << mass[i][j] << '\t';
        }
        std::cout << std::endl;
    }
}
