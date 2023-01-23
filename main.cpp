

#include <iostream>
#include <chrono>
#include <thread>
#include <time.h>
#include <Windows.h>

using namespace std;
void Exercise() {
    char symbol,line,timer;
    int len;
    srand(time(NULL));
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    cout <<"Enter symbol: ";
    cin >>symbol ;
    cout <<"Enter length of line: ";
    cin >>len ;
    cout <<"Enter which line you want vertical or horizontal(v/h): ";
    cin>>line;
    cout <<"Enter the speed level fast, normal and slow(f/n/s): ";
    cin >>timer;

    for (size_t i = 0; i < len; i++) {


        if(line == 'v'){
            cout << symbol <<endl;

        }
        else if(line == 'h'){
            cout << symbol <<" ";

        }
        else{
            cout <<"Error!";
            break;
        }

        if(timer == 'f'){
            std::this_thread::sleep_for(std::chrono::milliseconds(500));

        }
        else if(timer == 'n'){
            std::this_thread::sleep_for(std::chrono::milliseconds(1500));

        }
        else if(timer == 's'){
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));

        }
        else{
            cout <<"Error!";
            break;
        }
    }
    SetConsoleTextAttribute(hConsole, 8);
    cout << endl;

}
int main() {
    Exercise();
    return 0;
}