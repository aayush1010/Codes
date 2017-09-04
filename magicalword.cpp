#include <iostream>
#include<cstdlib>
#include <vector>

using namespace std;

void output(){
    int n, m, j,c, index ;
    int a[6] = {67, 71, 73, 79, 83, 89};
    cin >> n;
    vector<char> k(n);
    for(int i =0; i< n; i++){
        cin >> k[i];
    }
    for(int i = 0; i < n; i++){
        j = 0;
        m = 100;
        while(j  < 6){
            c = abs((int)k[i]- a[j]);
            if(c < m){
                m = c;
                index =j;
            }
            j++;
        }
        k[i] = (char)a[index];
    }
    for(int i =0; i< n; i++){
        cout << k[i];
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t){
        output();
        t--;
    }
    return 0;
}

