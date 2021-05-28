#include <iostream>

void inputRandArray(int a[], int n){
    for(int i=0; i<n; i++)
        a[i] = rand() % 56;
}
void outputArray(int a[], int n){
    for(int i=0; i<n; i++)
        std::cout << a[i] << ", ";
    std::cout << std::endl;
}
int sumMore(int a[], int n, int b){
    int sum = 0;
    for(int i=0; i<n; i++)
        if(a[i]<b)
        sum += a[i];
    return sum;
}

int main()
{
    const int n = 25;
     int arr[n];
     srand(2547);
     inputRandArray(arr, n);
     outputArray(arr, n);

     std::cout << "SumIf = " << sumMore(arr, n, 7) << std::endl;

    return 0;
}
