#include <iostream>
#include <fstream>

void Matrix();
float min, max;
int main()
{

Matrix();



    return 0;
}
void Matrix(){
    std::ofstream fout;
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
    max=mat[0][0];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++)
            if(max<mat[i][j])
                    max=mat[i][j];
    }
    min=mat[0][0];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++)
            if(min>mat[i][j])
                min=mat[i][j];
    }
    std::cout << "max" << max << std::endl;
    std::cout << "min" << min << std::endl;
    fout.open("otvet.txt");
    fout << max << min;

}
