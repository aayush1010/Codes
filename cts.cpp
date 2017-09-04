#include<iostream>
#include<algorithm>

using namespace std;

int longestConsecutive(int a[]){
    int n ,c = 1, d=0;
    n = a[0];
    int b[n],j;
    for(int i =0; i<n; i++)
        { b[i] = a[i+1];
    }
    sort(b,b+n);
    for(int i =0; i < n-1; i++){
        j = i;
        while(b[j+1] == (b[j]+1) &&j+1<n){
            c++;
            j++;
        }
        d = max(d, c);
         c = 1;
         } if(d == 1) return 0;
          else return d;}
          int main(){
              int r, n; cin >> n;
               if(n <= 0){
                    cout << -1;
                    return 0;
               } else if(n > 50){
                   cout << "Size of the array is too large";
                    return 0;
                    }
                     else{
                         int a[n+1];
                          a[0] = n;
                          for(int i =1; i < n+1; i++){
                                cin >> a[i];
                          }
                          r = longestConsecutive(a);
                          cout << r;
                          }
                          return 0;
                          }
