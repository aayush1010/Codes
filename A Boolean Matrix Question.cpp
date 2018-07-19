#include<iostream>

using namespace std;

void convert(bool a[][], int m, int n){

}

int main(){
    int m, n;
    cin >> m >> n;
    bool a[m][n];
    for(int i =0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    convert(a, m, n);
    return 0;
}
