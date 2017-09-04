#include<iostream>

using namespace std;

int sum(int a[], int s, int n){
    if(n < 0){
        return s;
    }
    else{
        return max(sum(a,s+a[n], n-2), sum(a,s,n-1));
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int s = sum(a, 0, n-1);
    cout << s;
    return 0;
}
