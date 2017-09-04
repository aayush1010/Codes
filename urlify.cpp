#include <iostream>
#include <string.h>

using namespace std;

string urlify(string s, int l){
	int sc = 0, total;
	for(int i = 0; i < l; i++){
		if(s[i] == ' ')
			sc++;
	}
	cout << sc <<endl;
	total  = 2*sc + l;
	cout << total<< endl;
	for(int i = l-1; i >= 0; i--){
		if(s[i] != ' '){
			s[total-1] = s[i];
			total--;
		}
		else{
			s[total-1] = '0';
			s[total-2] = '2';
			s[total-3] = '%';
			total-= 3;
		}
	}
	return s;
}

int main(){
	string s;
	getline(cin, s);
	cout << s << endl;
	int l = 13;
	cout << l << endl;
	s = urlify(s, l);
	cout << s;
	return 0;
}
