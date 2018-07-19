#include <iostream>
#include <vector>
#include <string>

using namespace std;

int check(string a){
	int i = 0;
	int c = 0;
	int n = a.length();
	while(i < n){
		if(a[i] == '1' && a[i+1] == '0'){
			i++;
			while(a[i] == '0' && i < n){
				i++;
			}
			if(a[i] == '1'){
				c++;
			}
		}
		else{
			i++;
		}
	}
	return c;
}

int main(){
	string s;
	int t, r;
	cin >> t;
	while(t--){
		cin >> s;
		r = check(s);
		cout << r << endl;
	}
	return 0;
}