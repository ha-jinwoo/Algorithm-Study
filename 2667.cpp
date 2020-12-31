#include <iostream>
#include <queue>
#include <utility>
#include <string>
#include<algorithm>

using namespace std;
int n;

vector <int>a;
bool v[100][100];
string arr[100];
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};

void bfs(int i,int j){
	int count=1;
	v[i][j]=true;

	queue<pair<int,int>> q;
	q.push(make_pair(i,j));

	while(!q.empty()){
		int x = q.front().second;
		int y = q.front().first;

		q.pop();

		for(int k=0;k<4;k++){
			int newx=x+dx[k];
			int newy=y+dy[k];
			if( 0<=newx && newx<n && 0<=newy && newy<n && arr[newy][newx] == '1' &&!v[newy][newx]){
				v[newy][newx]=true;
				count++;
				q.push(make_pair(newy,newx));
			}
		}

	}
	a.push_back(count);
}
int main(){

	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)if(!v[i][j]&&arr[i][j]=='1')bfs(i,j);
	}

	sort(a.begin(),a.end());
	cout<<a.size()<<endl;
	for(int i=0;i<a.size();i++)cout<<a[i]<<endl;

	return 0;
}
