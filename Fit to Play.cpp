#include<iostream>

using namespace std;

int result(int n){
    int a[n], d, r = 0;
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    int i =0;
    int j = i+1;
    while(i < n && j < n){
        d = a[j]-a[i];
        if(d > 0){
            r = max(d,r);
            j++;
        }
        else{
            i++;
            j= i+1;
        }
    }
    return r;
}

int main(){
    int t, n, r;
    cin >> t;
    while(t--){
        cin >> n;
        r = result(n);
        if(r==0){
            cout <<"UNFIT"<< endl;
        }
        else{
            cout << r << endl;
        }
    }
    return 0;
}
