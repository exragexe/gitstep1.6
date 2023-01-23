

#include <iostream>

using namespace std;
void Exercise() {
    const int size = 6;
    int arr[size];
    int sumaa=0;
    for (size_t i = 0; i < size; i++)
    {
        cout << "Enter number for masive(6 num): ";
        cin >> arr[i];
    }
    for (int i = size-1; i >=0; i--) {
        cout << arr[i]<<" ";

    }

}
int main() {
    Exercise();
    return 0;
}