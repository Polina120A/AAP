#include <iostream>
//Вывести элементы массива, меньших среднего арифметического


int main()
{
    int avgsum=0;
    const int rows = 7;
    const int cols = 4;
    int mass[rows][cols];
    for (int i =0; i<rows;i++)
    {
        for (int j =0; j<cols; j++)
        {
            mass[i][j] = rand() % 10 + 10;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << mass[i][j] << '\t';
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++)//среднее
    {
        for (int j = 0; j < cols; j++)
        {
            avgsum+=mass[i][j];

        }
    }
    avgsum /= rows*cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mass[i][j]<avgsum)
            {
                std::cout << mass[i][j] << ' ';
            }
            else
            {
                std::cout << '0' <<'\t';
            }
        }
        std::cout << std::endl;
    }


    return 0;
}
