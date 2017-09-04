#include<iostream>

using namespace std;

void setbool(bool *a){
    for(int i =0; i< 128; i++)
        a[i] = true;
}

bool checkUnique(string s){
    if(s.length() > 128)
        return false;
    else{
        bool a[128];
        setbool(a);
        for(int i = 0; i< s.length(); i++){
            int r = (int)s[i];
            if(a[r] == false){
                return false;
            }
            a[r] = false;
        }
        return true;
    }
}

int main(){
    string s;
    cin >> s;
    bool check = checkUnique(s);
    cout << check;
    return 0;
}
