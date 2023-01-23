

#include <iostream>

using namespace std;
void Exercise() {
    const int size = 6;
    int arr[size];
    double sumaa=0;
    for (size_t i = 1; i < size; i++)
    {
        cout << "Enter side of pentagon: ";
        cin >> arr[i];
        sumaa += arr[i];
    }
    cout << "Perimetr: " << sumaa;
}
int main() {
    Exercise();
    return 0;
}