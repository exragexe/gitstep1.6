

#include <iostream>
using namespace std;
void Exercise() {
    int x,y;
    char simvol;
    cout << "Enter the width of the rectangle: ";
    cin >> y;
    cout << "Enter the length of the rectangle: ";
    cin >> x;
    cout << "Which simvol u want?: ";
    cin >> simvol;
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            cout << simvol << " ";

        }
        cout << endl;
    }

}
int main() {
    Exercise();
    return 0;
}