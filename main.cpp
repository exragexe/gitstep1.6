

#include <iostream>

using namespace std;
void Exercise() {
    const unsigned int size = 12;
    int arr[size];
    int min, max;
    cout << "Enter money for "<< 1 <<" month: ";
    cin >> arr[0];
    min = max = arr[0];
    for (size_t i = 1; i < size; i++)
    {
        cout << "Enter money for "<< i+1 <<" month: ";
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Min = " << min << ", Max = " << max << endl;
}
int main() {
    Exercise();
    return 0;
}