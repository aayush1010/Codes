#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

bool oneAway(string s1, string s2){
    if(abs(s1.length() - s2.length()) > 1)
        return false;
    int i = 0, j = 0, c = 0;
    if(s1.length() == s2.length()){
        while(i < s1.length() && j < s2.length()){
            if(s1[i] != s2[j]){
                c++;
                if(c > 1)
                    return false;
            }
           i++;
           j++;
        }
    }
    else{
        s1 = s1.length() > s2.length() ? s1 : s2;
        s2 = s1.length() > s2.length() ? s2 : s1;
        while(i < s1.length()){
            if(s1[i] == s2[j]){
                j++;
            }
            else{
                c++;
                if(c > 1)
                    return false;
            }
            i++;
        }
    }
    return true;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    bool result = oneAway(s1, s2);
    cout << result;
    return 0;
}
