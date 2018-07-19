#include<iostream>

using namespace std;

int lcm(int a, int b){
    int l, t;
    l = a*b;
    while(b){
        t = b;
        b =a%b;
        a = t;
    }
    l = l/t;
    return l;
}

int main(){
    int n, p;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        p = lcm(a[i], a[i+1]);
        a[i+1]= p;
    }
    cout << a[n-1];
    return 0;
}
