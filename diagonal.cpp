#include<iostream>

using namespace std;

int main(){
    int r, c, d = 1;
    cin >> r >> c ;
    int a[r][c];
    for(int i = 0; i  < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
        }
        }
        int flag = 0;
    for(int l = r-2, k = 0; l >= 0 ; l--){
        int x = a[l][k];
        int m = l+1;
        int n = k+1;
            if(m < r && n < c && x == a[m][n]){
                while(m <= r-1 && n <= c-1){
                    if(a[m][n] == x){
                        flag = 1;
                    }
                    else {
                        flag = 0;
                        break;
                    }
                    m++;
                    n++;
                }

        }
        if(flag==1){
            d++;
            flag=0;
            }
    }
    cout << d;
    return 0;
}
