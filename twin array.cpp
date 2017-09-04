#include <bits/stdc++.h>

using namespace std;

int twinArrays(vector <int> a, vector <int> b, int n){
    // Complete this function
    int mina1 =INT_MAX;
    int minb1 =INT_MAX;
    int mina2 =INT_MAX;
    int minb2 =INT_MAX;
    int p , q;
    for(int i = 0; i < n; i++){
        if(a[i] <= mina1){
            p = i;
            mina2 = mina1;
            mina1 = a[i];
        }
        else if(a[i] > mina1 && mina2 > a[i]){
            mina2 = a[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(b[i] <= minb1){
            q = i;
            minb2 = minb1;
            minb1 = b[i];
        }
        else if(b[i] > minb1 && minb2 > b[i]){
            minb2 = b[i];
        }
    }
    if(p != q){
        return mina1+minb1;
    }
    return min(mina1+minb2, minb1+mina2);
}

int main() {
    int n;
    cin >> n;
    vector<int> ar1(n);
    for(int ar1_i = 0; ar1_i < n; ar1_i++){
       cin >> ar1[ar1_i];
    }
    vector<int> ar2(n);
    for(int ar2_i = 0; ar2_i < n; ar2_i++){
       cin >> ar2[ar2_i];
    }
    int result = twinArrays(ar1, ar2, n);
    cout << result << endl;
    return 0;
}
