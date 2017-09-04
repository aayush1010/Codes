#include<iostream>

using namespace std;

int main(){
    int n , k, s , num, den;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    den = n-k+1;
    int j = 1, i =0;
    while(j <= den){
        num  += j*a[i];
        s += num;
        j++;
        i++;
    }
    i++;
    j--;
    while(j > 0){
        num += j*a[i];
        j--;
        i++;
    }
    cout << num/den;
    return 0;
}

