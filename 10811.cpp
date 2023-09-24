#include <iostream>
using namespace std;

int main(void){
    int n, m;
    int bucket[101];
    int input[100][2];
    cin >> n >> m;
    for (int i = 0; i <= n; i++){
        bucket[i] = i;
    }
    
    for (int i = 0; i < m; i++){
        cin >> input[i][0] >> input[i][1];
    }

    for (int i = 0; i < m; i++){
        int a = input[i][0];
        int b = input[i][1];
        int diff = b - a;
        for (int j = 0; j < diff/2 + 1; j++){
            int tmp = bucket[a+j];
            bucket[a+j] = bucket[b-j];
            bucket[b-j] = tmp;
        }
    }

    for (int i = 1; i <= n; i++){
        cout << bucket[i] << " ";
    }
}