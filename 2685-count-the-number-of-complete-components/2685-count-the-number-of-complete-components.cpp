class Solution {
public:

    void dfs(int u,unordered_map<int,vector<int>> &adj, vector<bool> &visited, int &v, int &e){
        visited[u]=true;
        v++;
        e+=adj[u].size();
        for(int it : adj[u]){
            if (!visited[it]){
                dfs(it,adj,visited,v,e);
            }
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<bool>visited(n,false);
        int ans=0;
        unordered_map<int,vector<int>>adj;
        for(auto &edge : edges){
            int u=edge[0];
            int v=edge[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i=0;i<n;i++){
           if(!visited[i]) {

                int v = 0;
                int e = 0;

                dfs(i, adj, visited, v, e);

                if(e == v*(v-1))
                    ans++;
            }
        }
        return ans;
    }
};