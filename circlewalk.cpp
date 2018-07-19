#include <bits/stdc++.h>

using namespace std;

int circularWalk(int n, int s, int t, int r_0, int g, int seed, int p){
    int r[n], t = 0;
    r[0] = r_0;
    for(int i = 1; i < n; i++){
        r[i] = (r[i-1]*g + seed) % p;
    }
}

int main() {
    int n;
    int s;
    int t;
    cin >> n >> s >> t;
    int r_0;
    int g;
    int seed;
    int p;
    cin >> r_0 >> g >> seed >> p;
    int result = circularWalk(n, s, t, r_0, g, seed, p);
    cout << result << endl;
    return 0;
}
