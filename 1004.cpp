#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int tc, sx, sy, ex, ey;
    cin >> tc;
    while(tc--){
        cin >> sx >> sy >> ex >> ey;
        int n, cx, cy, r;
        int cnt = 0;
        cin >> n;
        while(n--){
            cin >> cx >> cy >> r;
            int sdis = pow(cx - sx, 2) + pow(cy - sy, 2);
            int edis = pow(cx - ex, 2) + pow(cy - ey, 2);
            r *= r;
            if(sdis < r || edis < r) cnt++;
            if(sdis < r && edis < r) cnt--;
        }
        cout << cnt << "\n";
    }
}