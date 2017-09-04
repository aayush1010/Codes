#include<iostream>

using namespace std;

int check(int n){
    int a[n], p[n];
    for(int i =0; i< n; i++){
        cin >> a[i];
    }
    int l = 0;
    bool hitzero = false;
    int i = 0;
    while(i < n){
        if(a[i] == 1){
            l++;
        }
        if(a[i] == 0){
            hitzero = true;
            i++;
            continue;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int r = check(n);
    cout << r;
    return 0;
}
