#include <iostream>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

struct key{
	int f;
	char c;
	bool operator<(const key &k) const{
	    return f < k.f;
	}
};

int main(){
	string s;
	priority_queue<key> pq;
	map<char, int> m;
	key k, t, t1;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		m[s[i]]++;
	}
	for(map<char,int>::iterator i = m.begin(); i != m.end(); i++){
		k.f = i->second;
		k.c = i->first;
		pq.push(k);
	}
	t = pq.top();
	cout << t.c;
	t.f--;
	pq.pop();
	while(pq.size() > 0){
		t1 = pq.top();
		cout << t1.c;
		pq.pop();
		t1.f--;
		if(t.f > 0){
			pq.push(t);
		}
		t = t1;
	}
	cout << endl;
	return 0;
}