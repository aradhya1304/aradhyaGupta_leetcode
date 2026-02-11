class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if (source == destination) return true;
        std::unordered_map<int, std::vector<int>> adj;
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        std::queue<int> q;
        std::vector<bool> visited(n, false);


        q.push(source);
        visited[source] = true;

      
        while (!q.empty()) {
            int current_node = q.front();
            q.pop();

            if (current_node == destination) {
                return true;
            }

            for (int neighbor : adj[current_node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        return false;

    }

};