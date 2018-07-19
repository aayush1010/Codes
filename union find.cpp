#include <iostream>

using namespace std;

class uf{
	private:
		int a[];
	public:
		void quickfind(int n){
			for(int i = 0; i < n; i++){
				a[i] = i;
			}
		}
		bool connected(int p, int q){
			if(a[p] == a[q]){
				return true;
			}
			return false;
		}
		void unionf(int p, int q){
			int pid = a[p];
			int qid = a[q];
			for(int i = 0; i < n; i++){
				if(pid == a[i]){
					a[i] = qid;
				}
			}
		}
}

int main(){

	return 0;
}