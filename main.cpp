

#include <iostream>

using namespace std;
void Exercise() {

        int profit[12], minProfit = INT_MAX, maxProfit = INT_MIN;
        int minMonth, maxMonth, start, end;

        for(int i = 0; i < 12; i++){
            cout << "Enter profit for month " << i+1 << ": ";
            cin >> profit[i];
        }

        cout << "Enter the start and end month for the range: ";
        cin >> start >> end;

        for(int i = start-1; i < end; i++){
            if(profit[i] < minProfit){
                minProfit = profit[i];
                minMonth = i+1;
            }
            if(profit[i] > maxProfit){
                maxProfit = profit[i];
                maxMonth = i+1;
            }
        }

        cout <<  "The month with the maximum profit was: " << maxMonth << " with a profit of " << maxProfit << endl;
        cout <<"The month with the minimum profit was: " << minMonth << " with a profit of " << minProfit << endl;

}
int main() {
    Exercise();
    return 0;
}