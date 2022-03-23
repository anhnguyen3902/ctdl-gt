#include<bits/stdc++.h>

using namespace std;

int n, m, u;
vector <int> adj[1001];
bool visited[1001];

void input(){
//	cin >> n >> m >> u;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void bfs(int u){
	// buoc khoi tao
	queue <int> q;
	q.push(u);
	visited[u] = true;
	// buoc lap
	while(!q.empty()){
		int v = q.front(); // lay dinh o dau hang doi
		q.pop();
		cout << v << " ";
		for(int x : adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m >> u;
		input();
		bfs(u);
		cout << endl;
	}
	return 0;
}
