#include <iostream>
using namespace std;

int main(void){
    int month[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string res[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int x = 0, y = 0, cnt = 0;
    cin >> x >> y ;

    for (int i = 0; i < 12; i++){
        if (x == month[i] ){
            cnt += y;
            break;
        }
        else cnt += day[i]; 
    }
    cout << res[cnt%7];
}