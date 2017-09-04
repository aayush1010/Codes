#include<iostream>
#include<map>
#include<cstdio>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    int n,i,j;
    while(t--){
        scanf("%d",&n);
        long long int w[n], c[n];
        for(i=0;i<n;i++){
            scanf("%d",&c[i]);
        }
        for(i=0;i<n;i++){
            scanf("%lld",&w[i]);
        }
        long long int res=0,temp = 0;
        map <int,int> m;
        for(int i =0; i<n; i++){
            m[c[i]] = 0;
        }
        int l = 0, r = 0;
        while(true){
            while(m[c[r]] == 0 && r<n){
                temp += w[r];
                m[c[r]] = 1;
                r++;
            }
            res = max(res,temp);
            if(r == n){
                break;
            }
            while(m[c[r]] == 1){
                m[c[l]] = 0;
                temp -= w[l];
                l++;
            }
        }

        cout<<res<<endl;
    }

    return 0;
}
