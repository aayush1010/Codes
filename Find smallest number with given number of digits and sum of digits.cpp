#include <iostream>

using namespace std;

int main(){
	int s, d;
	cin >> s >> d;
	int a[d];
	if (d*9 < s){
		return -1;
	}
	int c = d-1;
	for(int i = 0; i < d; i++){
		if(s >= c*9){
			a[i] = s-(c*9);
		}
		else{
			a[i] = 1;
		}
		c--;
		s -= a[i];
	}
	for(int i =0; i< d; i++){
		cout << a[i];
	}
	cout << endl;
	return 0;
}