#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <string>
#include <set>
using namespace std;

void combination(int kn,int kr){
		vector<int> n;
		vector<int> ind;
		for(int i=0; i<kn; i++) n.push_back(i+1);
		for(int i=0; i<kr; i++) ind.push_back(1);
		for(unsigned int i=0; i<n.size()-kr; i++) ind.push_back(0);
		sort(ind.begin(), ind.end());
		do{
			for(unsigned int i=0; i<ind.size(); i++) if(ind[i] == 1) cout<<n[i]<<" ";
			cout<<endl;

		}while(next_permutation(ind.begin(), ind.end()));
}

int main(){
	combination(4,3);
	return 0;
}
