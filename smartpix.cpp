#include<iostream>
#include<cstdlib>
#include<string>
#include<map>
using namespace std;

map<int,string> check(string s){
    map<int,string> m;
    int len=s.length();
    int k=0, j;
    for(int i=0; i<len; i= j+1){
        j=i;
        string word="";
        while(j<len && s[j]!=' '){
            word += s[j++];
        }
        m[k++] = word;
    }
    return m;
}

int main(){
    string a="Smartprix site india comparison best";
    string b="{} is {4} online {3} shopping {} in {}";
    map<int,string> m = check(a);
    int cb=0;
    string p="";
    int len = b.length();
    for(int i=0;i<len;){
        if(b[i]=='{'){
            int j=i+1;
            char c[1000];
            int k=0;
            bool t=false;
            while(b[j]!='}'){
                c[k++] = b[j];
                if(isalpha(b[j])){
                    t = true;
                }
                ++j;
            }
            if(t){
                for(int l=0;l<k;++l){
                    p += c[l];
                }
            }
            else{
                int index;
                if(k==0){
                    index = cb;
                    ++cb;
                }
                else{
                    index = atoi(c);
                }
                p += m[index];
            }
            i = j+1;
        }
        else{
            p += b[i];
            ++i;
        }
    }
    cout<<p<<endl;
    return 0;
}
