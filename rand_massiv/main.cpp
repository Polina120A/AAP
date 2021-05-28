#include <iostream>
//Сгенерировать массив со случайными числами в диапазоне:[10,20]

void Matrix();

int main()
{

Matrix();


    return 0;
}
void Matrix(){
    const int rows = 7;
    const int cols = 4;
    int mat[rows][cols];

    srand(0);
    for(int i = 0; i<rows; i++)
        for(int j = 0; j<cols; j++)
            mat[i][j] = rand() % 10 + 10;

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++)
            std::cout << mat[i][j] << "\t";
        std::cout << std::endl;
    }

}
