#include<iostream>
#include<map>
#include<vector>
#include<cstdlib>

using namespace std;

int main(){
    map<int,int> m;
    int n, k, r , p, i, j = 1, q, a, b;
    cin >> n >> k;
    while(j<=k){
        cin >> r;
        p = r;
        vector<int> v(r);
        i = 0;
        while(p){
            cin >> v[i];
            m[v[i]] = j;
            i++;
            p--;
        }
        j++;
    }
    cin >> q;
    while(q--){
        cin >> a >> b;
        a = m[a];
        b = m[b];
        cout << abs(a-b) << endl;
    }
    return 0;
}
