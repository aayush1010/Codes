#include <iostream>
#include <algorithm>

using namespace std;

bool compare(pair<int , int> p, pair<int, int> q){
	return p.first < q.first;
}

int main(){
	int n, x, y;
	cin >> n;
	pair<int, int> p[n];
	for(int i =0; i < n; i++){
		cin >> x >> y;
		p[i] = make_pair(x,y);
	}
	sort(p, p+n, compare);
	int c = 1;
	int i = 0;
	int mi = p[0].second;
	while(i < n-1){
		if(mi < p[i+1].first){
			mi =  p[i+1].second;
			i++;
		}
		else{
			mi = min(p[i].second, p[i+1].second);
			i++;
			c++;
			m = max()
		}
	}
	cout << c << endl;
	return 0;
}