#include <iostream>
using namespace std;

int main(void){
    int people[100][100];
    int map[100][100];
    
    int n, min, max, dir[2][2] = { {0, 1}, {-1, 0} };  // R, D
    cin >> n >> min >> max;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> people[i][j];
        }
    }
    int tmp = 10;
    while(tmp--){
        int peopleCnt = 0;
        int moveCnt = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                    int p1 = people[i][j];
                for (int k = 0; k < 2; k++){
                    int x = dir[k][1];
                    int y = dir[k][0];
                    if(x>=0 && x<n && y>=0 && y<n){
                        int p2 = people[i+y][j+x];
                        int diff = abs(p1 - p2);
                        if(diff >= min && diff <= max){
                            if(map[i][j] == 0) peopleCnt += p1 + p2;
                            map[i][j] = 1;
                        }
                    }
                }
                
            }
        }
    }
    
    

}