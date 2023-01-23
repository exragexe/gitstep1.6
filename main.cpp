

#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;
void Exercise() {
    srand(time(NULL));
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    const int size = 6;
    int arr[size];
    int min, max;
    min = arr[0];

    for (size_t i = 1; i < size; i++)
    {
        arr[i]=rand()%100+1;
        cout <<arr[i]<<" ";

        if(i == 0)
        {
            min = max = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout <<endl;
    cout <<"Min: "<< min<<" Max: "<< max;

}
int main() {
    Exercise();
    return 0;
}