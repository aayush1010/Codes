#include<iostream>
#include<map>
#include<cstdlib>

using namespace std;

int main(){
    int n,x,d, r = 0;
    map<int, int> m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;
    for(int i = 0; i< n; i++){
        m[a[i]]++;
    }
    for(int i =0; i < n; i++){
        d = abs(a[i]-x);
        if(m[d]){
            if(d == a[i]){
                if(m[d] > 1){
                    cout << a[i] << " " << d<< endl;
                    m[a[i]] = 0;
                    r = 1;
                }
            }
            else{
                m[a[i]] = 0;
                cout << a[i] << " " << d<< endl;
                r = 1;
            }
        }
    }
    if(r == 0){
        cout << "NO";
    }
    return 0;
}
