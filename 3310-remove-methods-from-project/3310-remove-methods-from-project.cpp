class Solution {
public:
   void dfs(int u, vector<vector<int>> &adj, vector<bool> &vis) {
        vis[u] = true;

        for (int v : adj[u]) {
            if (!vis[v]) {
                dfs(v, adj, vis);
            }
        }
    }
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);

        for (auto &edge : invocations) {
            adj[edge[0]].push_back(edge[1]);
        }

        vector<bool> vis(n, false);
        dfs(k, adj, vis);

        // If an unvisited method invokes a suspicious method,
        // then no methods can be removed.
        for (auto &edge : invocations) {
            int u = edge[0], v = edge[1];
            if (!vis[u] && vis[v]) {
                vector<int> ans;
                for (int i = 0; i < n; i++)
                    ans.push_back(i);
                return ans;
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!vis[i])
                ans.push_back(i);
        }

        return ans;
    }
};