#include<iostream>
#include<queue>

using namespace std;

struct compare  {  
  bool operator()(const int& l, const int& r){  
        return l > r;  
   }  
};  

int check(priority_queue<int, vector<int>, greater<int> > q, int n){
	int l = n, c, s = 0;
	int a, b;
	while(l != 1){
		a = q.top();
		q.pop();
		b = q.top();
		q.pop();
		c = a+b;
		s += c;
		q.push(c);
		l = q.size();
	}
	return s;
}

int main(){
	int n, t;
	cin >> n;
	priority_queue<int, vector<int>, greater<int> > q; 
	for(int i = 0; i < n; i++){
		cin >> t;
		q.push(t);
	}
	int r = check(q, n);
	cout << r;
	return 0;
}