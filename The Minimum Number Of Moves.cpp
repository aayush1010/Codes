#include<iostream>

using namespace std;

int moves(int n){
    int a[n], max_index = 0, mini = 0, c = 0, d, k =1, r,t;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > mini){
            mini = a[i];
            max_index = i;
        }
    }
    while(k){
        r = 0;
        for(int i =0; i < n; i++){
            if(a[i] == a[max_index]){
                r++;
            }
        }
        if(r == n){
            return c;
        }
        else{
            t = max_index;
            for(int i =0; i < n; i++){
                if(i != t){
                    a[i]++;
                }
                if(a[i] > a[max_index]){
                    max_index = i;
                }
            }
            c++;
        }
    }
}

int main(){
    int t, n, r;
    cin >> t;
    while(t--){
        cin >> n;
        r = moves(n);
        cout << r << endl;
    }
    return 0;
}
