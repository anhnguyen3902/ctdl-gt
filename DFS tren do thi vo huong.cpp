#include<bits/stdc++.h>

using namespace std;

int n, m, u;
vector <int> adj[1005];
bool visited[1005];

void input(){
	cin >> n >> m >> u;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, 0, sizeof(visited));
}
void DFS(int u){
	cout << u << " ";
	visited[u] = 1;
	for(int v : adj[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		input();
		DFS(u);
		cout << endl;
	}
}
