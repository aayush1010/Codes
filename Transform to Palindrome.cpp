#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int id[100000];

void init(int n){
	for(int i = 1; i <= n; i++){
		id[i-1] = i;
	}
}

bool connected(int x, int y){
	x--;
	y--;
	if(id[x] == id[y])
		return true;
	return false;
}

void unions(int x, int y, int n){
	for(int i = 0; i < n; i++){
		int xid = id[x];
		int yid = id[y];
		for(int i = 0; i < n; i++){
			if(xid == id[i]){
				id[i] = yid;
			}
		}
	}
}

int m = 0;

int checkPalin(int a[], int i, int j, int c){
	if(i == j){
		c++;
		return c;
	}
	if(i > j){
		return c;
	}
	if(connected(a[i], a[j])){
		c += 2;
		checkPalin(a, i+1, j-1, c);
	}
	return max(checkPalin(a, i+1, j, c),checkPalin(a,i, j-1, c));
}

int main(){
	int n, k, m, x, y;
	cin >> n >> k >> m;
	init(n);
	int a[m];
	for(int i =0; i < k; i++){
		cin >> x >> y;
		if(!connected(x,y)){
			unions(x-1, y-1, n);
		}
	}
	for(int i = 0; i < m; i++){
		cin >> a[i];
	}
	int i = 0, j = m-1, c = 0;
	c= checkPalin(a, i, j, c);
	cout << c << endl;
	return 0;
}