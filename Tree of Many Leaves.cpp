#include<iostream>

using namespace std;

void check(){
    int n;
    cin >> n;
    long long int a[n],r =0;
    for(int i =0; i<n; i++){
        cin >> a[i];
        r ^= a[i];
    }
    cout << r<< endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
    return 0;
}
