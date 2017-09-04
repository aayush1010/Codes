#include <iostream>

using namespace std;

int call(int a, int n){
    int p[n],i;
    for(i =0; i<n; i++){
        cin >> p[i];
    }
    i = 0;
    while(i<n && a>0){
        if(p[i]){
            a+=2;
        }
        else{
            a--;
        }
        i++;
    }
    if(a){
        cout << "yes" << " ";
        return a;
    }
    else{
        if(i == n){
            cout << "yes ";
            return 0;
        }
        cout << "no" << " ";
        return i;
    }
}

int main(){
    int t,n,a;
    cin >> t;
    while(t--){
        cin >> a >> n;
        int c = call(a, n);
        cout << c;
        cout << endl;
    }
    return 0;
}
