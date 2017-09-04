#include<iostream>

using namespace std;

int main(){
    int long long n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long int i = 0, j = 1, k = 2;
    long long int l = 0, m = 0, p = 0;
    while(i < n || j < n || k < n){
        if(i < n){
            l = l + a[i];
        }
        if(j < n){
            m = m + a[j];
        }
        if(k < n){
            p = p + a[k];
        }
        i += 3;
        j += 3;
        k += 3;
    }
    cout << l << " " << m << " "<< p;
    return 0;
}
