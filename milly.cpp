#include <iostream>
using namespace std;

int print(){
	long int n , k ,i , s = 0;
	cin >> n >> k;
	for (i = 1; i <= n; i++ ){
		s = s+i;
	}
	if(k <= s)
		return (s-k);
	else{
		while(k > s){
			k  = k-s;
		}
		return s-k;
	}
}

int main()
{
   long int t;
   cin >> t;
   int a;
   while(t--){
   		a = print ();
   		cout << a << endl;
   }
    return 0;
}
