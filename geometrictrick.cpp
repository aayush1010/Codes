#include <bits/stdc++.h>

using namespace std;

int geometricTrick(string s){
    map<int, int> a;
    vector<int> av;
    vector<int> bv;
    vector<int> cv;
    int as, bs, cs, d, e, counter = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a'){
            av.push_back(i+1);
        }
        else if(s[i] == 'b'){
            bv.push_back(i+1);
        }
        else{
            cv.push_back(i+1);
        }
    }
    as = av.size();
    bs = bv.size();
    cs = cv.size();
    for(int i = 0; i < as; i++){
        a[av[i]] = 1;
    }
    for(int i = 0; i < bs; i++){
        for(int j = 0; j < cs; j++){
            e = bv[i]*bv[i];
            d = e%cv[j];
            if(!d){
                d = e/cv[j];
                if(a[d] == 1){
                    counter++;
                }
            }
        }
    }
    return counter;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = geometricTrick(s);
    cout << result << endl;
    return 0;
}
