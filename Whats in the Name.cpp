#include<iostream>
#include<string>

using namespace std;

void check(){
    string s;
    getline(cin, s);
    int l = s.length();
    int i = 0, sc = 0, f = 0, m =0, flag = 0, r = 0;
    s[0] = toupper(s[0]);
    while(i < l){
        if(s[i] == ' '){
            sc+=1;
            if(sc == 1){
                f = i+1;
                r = 1;
            }
            if(sc == 2){
                m = i+1;
                r = 2;
            }
        }
        i++;
    }
    i = 0;
    while(i < l){
        if(sc > 0){
            s[i] = toupper(s[i]);
            cout << s[i] << ". ";
            if(r == 1){
                i = f;
            }
            if(r == 2){
                if(sc == 2){
                    i = f;
                }
                else{
                    i = m;
                }
            }
            sc--;
        }
        else{
            if(flag == 0){
                s[i] = toupper(s[i]);
                cout << s[i];
                flag = 1;
            }
            else{
                s[i] = tolower(s[i]);
                cout << s[i];
            }
            i++;
        }
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
        cin.ignore();
    while(n--){
        check();
    }
}
