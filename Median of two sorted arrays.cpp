#include<iostream>

using namespace std;

int main(){
    int n, m, t;
    cin >> n;
    int a[n];
    for(int i =0; i<n ; i++){
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for(int i =0; i< n; i++){
        cin >> b[i];
    }
    t = n+m;
    int c[n];
    int i = 0, j = 0, k = 0;
    while(i < n && j < m){
        if(a[i] <= b[j]){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }
    if(i == n){
        while(j < m){
            c[k] = b[j];
            k++;
            j++;
        }
    }
    if(j == m){
        while(i  < n){
            c[k] = a[i];
            i++;
            k++;
        }
    }
    for(int i =0; i< t; i++){
        cout << c[i];
    }
    return 0;
}
