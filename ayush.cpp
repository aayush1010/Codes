#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    long long int n, j =0;
    cin >> n;
    long long int a[n], b[n];
    for(long long int i =0; i < n; i++){
        cin >> a[i];
        if(a[i] < 0){
            b[j] = i;
            j++;
        }
    }
    for(long long int i =0; i < n; i++){
        long long int m = 10000000000;
        for(int k =0; k < j; k++){
            if(m > b[k]- i){
                m = abs(b[k]- i);
            }
            else{
                break;
            }
            cout << m << " ";
        }
    }
    return 0;
}
