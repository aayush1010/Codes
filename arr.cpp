#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a[10], c = 0, k, m = 0;
    for(int i = 0; i < 10; i++){
        cin >> a[i];
    }
    sort(a, a+10);
    for(int i = 0; i < 10; i = m){
        for( k = i; k < 10; k++){
            if(a[i] == a[k]){
                c++;
                m++;
            }
        }
        if(a[i] == c){
            cout << a[i]<< endl;
        }
        c = 0;
    }
    return 0;
}
