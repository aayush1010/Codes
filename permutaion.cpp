#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

void setarray(int *a){
    for(int i = 0; i< 128; i++)
        a[i] = 0;
}

bool permutation(string s1, string s2){
    int a[128];
    setarray(a);
    for(int i = 0; i < s1.length(); i++){
        int r = (int)s1[i];
        a[r]++;
    }
    for(int i = 0; i < s2.length(); i++){
        int r = (int)s2[i];
        a[r]--;
        if(a[r] < 0)
            return false;
    }
    return true;
}

int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;
    bool check = permutation(s1, s2);
    cout << check;
    return 0;
}
