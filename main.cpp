

#include <iostream>
#include <Windows.h>
using namespace std;
void Exercise() {
    int x,y;
    char simvol;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "Enter the width of the rectangle: ";
    cin >> y;
    cout << "Enter the length of the rectangle: ";
    cin >> x;
    cout << "Which simvol u want?: ";
    cin >> simvol;
    SetConsoleTextAttribute(h, 15);
    cout << "======COLOR======"<<endl;
    cout << "|0-Black        |"<<endl;
    cout << "|1-Blue         |" << endl;
    cout << "|2-Green        |" << endl;
    cout << "|3-Cyan         |" << endl;
    cout << "|4-Red          |" << endl;
    cout << "|5-Magenta      |" << endl;
    cout << "|6-Brown        |" << endl;
    cout << "|7-Lightgray    |" << endl;
    cout << "|8-Darkgray     |" << endl;
    cout << "|9-Lightblue    |" << endl;
    cout << "|10-Lightgreen  |" << endl;
    cout << "|11-Lightcyan   |" << endl;
    cout << "|12-Lightred    |" << endl;
    cout << "|13-Lightmagenta|" << endl;
    cout << "|14-Yellow      |" << endl;
    cout << "|15-White       |" << endl;
    cout << "=================" << endl;
    cout << "Enter color: ";
    int operation;
    cin >> operation;
    switch (operation)
    {
        case 0: {
            SetConsoleTextAttribute(h, 0);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 1: {
            SetConsoleTextAttribute(h, 1);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y-1 ) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x-1 ) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 2: {
            SetConsoleTextAttribute(h, 2);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 3: {
            SetConsoleTextAttribute(h, 3);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 4: {
            SetConsoleTextAttribute(h, 4);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 5: {
            SetConsoleTextAttribute(h, 5);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 6: {
            SetConsoleTextAttribute(h, 6);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 7: {
            SetConsoleTextAttribute(h, 7);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 8: {
            SetConsoleTextAttribute(h, 8);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 9: {
            SetConsoleTextAttribute(h, 9);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 10: {
            SetConsoleTextAttribute(h, 10);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 11: {
            SetConsoleTextAttribute(h, 11);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 12: {
            SetConsoleTextAttribute(h, 12);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 13: {
            SetConsoleTextAttribute(h, 13);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 14: {
            SetConsoleTextAttribute(h, 14);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        case 15: {
            SetConsoleTextAttribute(h, 15);
            for (size_t i = 0; i < y; i++)
            {
                for (size_t j = 0; j < x; j++)
                {
                    if (i == 0 or i == y - 1) {
                        cout << simvol << "";
                    }
                    else {
                        if (j == 0 or j == x - 1) {
                            cout << simvol << "";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }break;
        default:
            break;
    }

}
int main() {
    Exercise();
    return 0;
}