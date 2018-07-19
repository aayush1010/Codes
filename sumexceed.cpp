#include<iostream>

using namespace std;

int main(){
    int n, k;
    int l =1000;
    cin >> n >> k;
    int a[n];
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    for(int i =0; i< n; i++){
        int s = 0;
        for(int j = i; j < n; j++){
            s += a[j];
            if(s >= k){
                l = min(l, j-i+1);
            }
        }
    }
    if(l == 1000){
        l = -1;
    }
    cout << l;
    return 0;
}
