#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i < n; i++){
        cin >> a[i];
    }
    int m1 = 10000,m2 = 10000;
    for(int i = 1; i < n; i++){
        if(m1 > a[i]){
            m2 = m1;
            m1 = a[i];
        }
        if(m2 > a[i] && m1 < a[i]){
            m2 = a[i];
        }
    }
    cout << m1 << " " << m2;
    return 0;
}
