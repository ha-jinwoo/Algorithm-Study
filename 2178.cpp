#include <iostream>
#include <queue>
#include <utility>
#include <string>

using namespace std;
int n,m;

int check[100][100];
bool v[100][100];
string arr[100];
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};

void bfs(int i,int j){
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
			if( 0<=newx && newx<m && 0<=newy && newy<n && arr[newy][newx] == '1' &&!v[newy][newx]){
				check[newy][newx] = check[y][x]+1;
				v[newy][newx]=true;
				q.push(make_pair(newy,newx));
			}
		}

	}
}
int main(){
	
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>arr[i];
	bfs(0,0);
	printf("%d\n",check[n-1][m-1]+1);

	return 0;
}
