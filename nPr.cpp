#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <string>
#include <set>
using namespace std;
int T[100];
void process(int q){
    for(int i = q-1; i>= 0; i--){cout<<T[i]<<" ";}
    cout<<endl;
}
void Perm(int n, int r, int q,vector<int> &data){// nPr -> 4P4 = (1,2,3,4) (1,2,4,3) (1,4,2,3) (1,4,3,2)  , 무조건  q=r로 넣는다.
    if(r == 0){process(q);return;}
    for(int i = n-1; i>=0; i--){
        swap(data[i], data[n-1]);
        T[r-1] = data[n-1];
        Perm(n-1, r-1, q,data);
        swap(data[i], data[n-1]);
    }
}

int main(){
	vector<int> data={1,2,3,4};
	for(int i=1;i<5;i++)
	Perm(4,i,i,data);// 4P1, 4P2, 4P3, 4P4
	return 0;
}
