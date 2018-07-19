#include<iostream>
#include<string>

using namespace std;

bool checkUnique(string s){
	for(int i = 0; i < s.length(); i++){
		for(int j = i+1 ; j < s.length(); j++ ){
			if (s[i] == s[j]){
				return false;
				break;
			}
		}
	}
	return true;
}

int main (){
	string s;
	cin >> s;
	bool check;
	check = checkUnique(s);
	cout << check;
	return 0;
}