#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int n, d, r=0;
    cin >> n >> d;
    int a[n];
    for(int i=0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int i =0;
    while(i < n-1){
        if(a[i+1]-a[i] <= d){
            r++;
            i+=2;
        }
        else{
            i++;
        }
    }
    cout << r;
    return 0;
}
