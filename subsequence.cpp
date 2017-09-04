#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

void subsequence(vector<long long> a, int k, int n){
    vector<long long> t;
    long long l =0,i,j, temp, q = 1000000007;
    long long  m = pow(2,n);
    long long c = 0,r,p;
    for(i =1; i< m; i++){
        if(__builtin_popcount(i) == k){
            c = 0;
            for(j =0; j< n; j++){
                if(i & (1<<j)){
                    c++;
                    if(c == 1){
                        r = a[j] & a[j];
                    }
                    else{
                        r = r & a[j];
                    }
                }
            }
            if(c != 0){
                t.push_back(r);
                l++;
            }
        }
    }
    c = 0;
    for(i=0;i<l;i++){
		for(j=i+1;j<l;j++){
			if(t[i]>t[j]){
				temp=t[i];
				t[i]=t[j];
				t[j]=temp;
			}
		}
	}
    i=l-1;
    p = t[l-1];
    while(p == t[i] &&  i >= 0){
        c++;
        i--;
    }
    c = c%q;
    cout << p << endl;
    cout << c;
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    long long  m = pow(2,n);
    subsequence(a,k,n);
    return 0;
}
