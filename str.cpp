#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

bool test(){
    string s;
    int n,c, k =0 , e =0 , o = 0;
    cin >> s;
    n = s.length();
    int a[n];
    for(int i = 0; i < n; i++){
            c =1;
        for(int j = i+1 ; j < n; j++){
            if(s[i] == s[j]){
                if (s[i] != '0'){
                    s[j] = '0';
                    c++;
                }
            }
        }
        if(s[i] != '0')
            a[k++] = c;
    }
    for(int i = 0; i < k; i++){
        if(a[i] % 2 == 0)
            e++;
        else
            o++;
    }

    if (e == k)
        return true;
    else if( o == 1 && e == k-1)
        return true;
    else
        return false;
}

int main(){
    int t;
    bool a;
    cin >> t;
    while(t--){
      a = test();
     if (a)
        cout << "yes" << endl;
     else
         cout << "no"<< endl;
    }
    return 0;
}