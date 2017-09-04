#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int calculate(vector< vector<int> > a, int n){
    int d1 = 0, d2 = 0, i= 0, j =0;
    while(i < n){
        d1 += a[i][j];
        i++;
        j++;
    }
    cout << d1;
    i = 0;
    j = n-1;
    while(i < n){
        d2 += a[i][j];
        i++;
        j--;
    }
    cout << d2;
    if(d1>=d2){
        d1 -= d2;
        return d1;
    }
    else{
        d2 -= d1;
        return d2;
    }
}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int r = calculate(a, n);
    cout << r;
    return 0;
}
