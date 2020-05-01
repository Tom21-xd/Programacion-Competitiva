//DFS
vector <int> list_ady[MAX];
bool vis[MAX];
void dfs(int node_inicial){
	//Si el nodo inicial se toma como visitado
	//vis[node_inicial]=true;
	for(auto &it : list_ady[node_inicial]){
		if(!vis[it]){
			//Si el nodo inicial no se toma como visitado
			//vis[it] = true;
			dfs(it);
		}
	}
}
