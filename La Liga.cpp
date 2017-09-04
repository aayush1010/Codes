#include<iostream>
#include<string>

using namespace std;

struct team{
    string s;
    int g;
}a[4];

string check(){
    int r, m, b, e;
    for(int i = 0; i < 4; i++){
        cin >> a[i].s >> a[i].g;
        if(a[i].s == "RealMadrid"){
            r = a[i].g;
        }
        else if(a[i].s == "Barcelona"){
            b = a[i].g;
        }
        else if(a[i].s == "Malaga"){
            m = a[i].g;
        }
        else{
            e = a[i].g;
        }
    }
    if(r < m){
        if(b > e){
            return "Barcelona";
        }
    }
    return "RealMadrid";
}

int main(){
    int t;
    string w;
    cin >> t;
    while(t--){
        w = check();
        cout << w << endl;
    }
    return 0;
}
