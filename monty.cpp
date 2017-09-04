#include<iostream>

using namespace std;

int main(){
    int n, k, c, r = 0,t;
    cin >> n >> k;
    cin >> c;
    int a[c];
    for(int i = 0; i < c; i++){
        cin >> a[i];
    }
    int i = 0, j =0;
    while(i < n){
        t = i+k;
        if(t >= a[j] && j < c){
            r++;
            i = a[j];
            j++;
        }
        else{
            if(i+k >= n){
                break;
            }
            r++;
            i = i+k;
        }
    }
    cout << r;
    return 0;
}
