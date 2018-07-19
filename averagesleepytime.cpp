#include<iostream>

using namespace std;

int main(){
    int n , k, s = 0 , num =0, den;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    den = n-k+1;
    int j = 1, i =0;
    while(i < k-1){
        num = j*a[i];
        s += num;
        j++;
        i++;
    }
    while(i < n-k+1){
        num = j*a[i];
        s += num;
        i++;
    }
    j--;
    while(i < n){
        num = j*a[i];
        s += num;
        i++;
        j--;
    }
    cout << s/den;
    return 0;
}
