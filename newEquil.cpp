#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int p = 0; p < n; p++){
			cin >> a[p];
		}
		if(n == 2){
		    cout << -1 << endl;
		    continue;
		}
		int i =0, j = n-1, sumLeft = 0, sumRight = 0;
		while(i < j){
			if(sumLeft == sumRight){
				sumLeft += a[i];
				sumRight += a[j];
				i++;
				j--;
			}
			else if(sumLeft > sumRight){
				sumRight += a[j];
				j--;
			}
			else{
				sumLeft += a[i];
				i++;
			}
		}
		if(sumLeft != sumRight){
			cout << -1;
		}
		else{
			cout << i+1;
		}
		cout << endl;
	}
	return 0;
}	