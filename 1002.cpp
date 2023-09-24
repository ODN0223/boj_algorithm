#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int tc;
    cin >> tc;
    while(tc--){
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int res = 0;
        if(x1 == x2 && y1 == y2){
            if(r1 == r2) res = -1;
        }
        else{
            // 중심 사이 거리
            float pdis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
            // 반지름 차이, 합
            int rdiff = abs(r1 - r2);
            int rsum = r1 + r2;

            if(pdis == rsum || pdis == rdiff) res = 1;
            else if(pdis > rsum || pdis < rdiff) res = 0;
            else res = 2;
        }
        cout << res << "\n";
    }
}