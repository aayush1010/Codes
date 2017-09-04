#include<iostream>

using namespace std;

int check(int a[], int n){
    int d = 0;
    int m1 = 0, m2;
    for(int i = n-1; i >= 0; i--){
        if(a[i] > m1){
            m1 = a[i];
        }
        else{
            m2 = m1-a[i];
            d = max(d, m2);
        }
    }
    return d;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int r = check(a, n);
    cout << r;
    return 0;
}
