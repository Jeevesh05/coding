
    }

    // Function to add an edge to the graph
    void addEdge(int v, int w) {
        adj[v].push_back(w); // Add w to v's list
    }

    // Depth First Search
    void DFS(int start) {
        vector<bool> visited(V, false); // Mark all vertices as not visited
        stack<int> stack; // Create a stack for DFS

        stack.push(start); // Push the current source node

        while (!stack.empty()) {
            // Pop a vertex from stack and print it
            int current = stack.top();
            stack.pop();

            // Print only if not visited yet
            if (!visited[current]) {
                cout << current << " ";
                visited[current] = true;
            }

            // Get all adjacent vertices of the popped vertex and push them to the stack
            for (auto it = adj[current].begin(); it != adj[current].end(); ++it) {
                if (!visited[*it]) {
                    stack.push(*it);
                }
            }
        }
    }
};

int main() {
    // Create a graph given in the example
    Graph g(8);
    g.addEdge(1,2);
    g.addEdge(1,3);