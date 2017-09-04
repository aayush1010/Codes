#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    int m = 0;
    for(int i = n-1; i >= 0; i--){
        if(a[i] > m){
            m = a[i];
            cout << a[i] << " ";
        }
    }
    return 0;
}
