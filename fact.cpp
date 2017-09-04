#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, a = 1, c =0, p, d,j;
    cin >> n;
    vector<int> v(1000);
    v[0] = 1;
    for(int i =2; i<= n; i++){
        j = 0;
        while(j<a){
            p = i*v[j]+c;
            d = p%10;
            v[j] = d ;
            c = p/10;
            j++;
        }
        while(c){
                v[j] = c%10;
                c /= 10;
                j++;
                a++;
            }
    }
    for(int i =a-1; i >=0; i--){
        cout << v[i];
    }
    return 0;
}

