

#include <iostream>

using namespace std;
void Exercise() {
    const int size = 6;
    int dobevn,sumvid,dobbeetwen;
    int min,max;
    int sum = 0;
    int firstNegativeIndex = -1;
    int lastNegativeIndex = -1;
    int n[] = {8,-33,23,-4,-18,40};
    min = n[0];
    for (int i = 0; i < size; ++i) {
        if(n[i]%2==0){
            dobevn *= n[i];
        }
        if(n[i] <0) {
            sumvid += n[i];
        }
        if(i == 0)
        {
            min = max = n[i];
        }
        if(n[i]>max){
            max = n[i];

        }
        if(n[i]<min) {
            min = n[i];

        }

    }
    int product = 1;
    for (int i = 0; i < size; ++i) {
        if (n[i] >= min && n[i] <= max) {
            product *= n[i];
        }
    }
    for (int i = 0; i < size; ++i) {
        if (firstNegativeIndex == -1 && n[i] < 0) {
            firstNegativeIndex = i;
        }
        if (n[i] < 0) {
            lastNegativeIndex = i;
        }
    }

    for (int i = firstNegativeIndex; i <= lastNegativeIndex; ++i) {
        sum += n[i];
    }
    cout << "Summa chisel mizh pervym i poslednim vid'yemnym: " << sum << endl;
    cout << "Dobytok chisel mizh min i max: " << product << endl;
    cout << "Suma vidyemnih chisel: "<<sumvid<<endl;
    cout << "Dobytok parnih chisel: "<<dobevn<<endl;
}
int main() {
    Exercise();
    return 0;
}