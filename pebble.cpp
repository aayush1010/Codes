#include <iostream>

using namespace std;

int main(){
	int n, k, s = 0;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i]%k == 0){
			s += a[i]/k;
		}
		else{
			s += (a[i]/k) +1;
		}
	}
	s++;
	cout << s/2;
	return 0;
}
