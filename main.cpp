

#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;
void Exercise() {
    srand(time(NULL));
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    const int size = 4;
    int arr[size];
    int arrcomp[size];
    double sumaa = 0;
    double sumaacomp = 0;
    unsigned int user;
    char tray;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "============Cubes game============"<< endl;
    for (size_t i = 1; i < size; i++)
    {

        SetConsoleTextAttribute(hConsole, 15);

        cout << "$Enter 1 - to throw, 0 - to exit: ";

        cin >> arr[i] ;
        if(arr[i] == 0){
            break;
        }
        else if(arr[i]==1){
            arr[i]=rand()%6+1;
            SetConsoleTextAttribute(hConsole, 10);
            cout <<"#You lost the number: "<< arr[i]<< endl;
            sumaa += arr[i];
            arrcomp[i]= rand()%6+1;
            SetConsoleTextAttribute(hConsole, 12);
            cout << "@COMPUTER lost the number: "<< arrcomp[i]<< endl;
            sumaacomp += arrcomp[i];
            if(i ==3){
                if(arr[i]>arrcomp[i]){
                    SetConsoleTextAttribute(hConsole, 15);
                    cout << "=================================="<< endl;
                    SetConsoleTextAttribute(hConsole, 10);
                    cout <<"You won!"<< endl;
                    cout <<"Your score: "<< sumaa<< " Computer score: "<< sumaacomp<< endl;
                    SetConsoleTextAttribute(hConsole, 15);


                }
                else if(arr[i]<arrcomp[i]){
                    SetConsoleTextAttribute(hConsole, 15);
                    cout << "=================================="<< endl;
                    SetConsoleTextAttribute(hConsole, 12);
                    cout <<"You lose!"<< endl;
                    cout <<"Your score: "<< sumaa<<" Computer score: "<< sumaacomp<< endl;
                    SetConsoleTextAttribute(hConsole, 15);

                }
            }
            else {
                continue;
            }
        }
        else{
            cout <<"Error. Try againg!"<< endl;
            continue;
        }


    }

}
int main() {
    Exercise();
    return 0;
}