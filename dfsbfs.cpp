#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int c[10002];
vector<vector<int>> g(10002, vector<int>());

void dfs(int x) {
	if(c[x]) return;
	c[x] = true;
	cout << x << ' ';
	for(unsigned int i = 0; i < g[x].size(); i++) {
		int y = g[x][i];
		dfs(y);
	}
}

void bfs(int start) {
	queue<int> q;
	q.push(start);
	c[start] = true;
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for(unsigned int i = 0; i < g[x].size(); i++) {
			int y = g[x][i];
			if(!c[y]) {
				q.push(y);
				c[y] = true;
			}
		}
	}
}

int main(void) {
	int n,m,s,a,b;
	cin>>n>>m>>s;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	dfs(s);

	cout<<endl;

	for(int i=0;i<10002;i++){
		c[i]=0;
	}

	bfs(s);
	return 0;
}
