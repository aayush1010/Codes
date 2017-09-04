#include <iostream>
#include<vector>
#include<string>

using namespace std;

void output(){
    string s, p;
    int j;
    getline(cin, s);
    vector<string> v;
    j =0;
    for(int i =0; i< s.length(); i=j){
        while(s[j] != ' ' && j != s.length()){
            p.push_back(s[j]);
            j++;
        }
        v.push_back(p);
        p.clear();
        j++;
    }
    vector<string> :: iterator i= v.begin();
    vector<string> :: iterator k = v.end()-1;
    while(i < k){
        p = *i;
        *i = *k;
        *k = p;
        i++;
        k--;
    }

    for(i = v.begin(); i!= v.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t){
        output();
        t--;
    }
    return 0;
}

