

#include <iostream>

using namespace std;
void Exercise() {
    const int size = 6;
    int arr[size];
    double sumaa=0;
    for (size_t i = 1; i < size; i++)
    {
        cout << "Enter money for month: ";
        cin >> arr[i];
        sumaa += arr[i];
    }
    cout << "Suma money for 6 month: " << sumaa;
}
int main() {
    Exercise();
    return 0;
}