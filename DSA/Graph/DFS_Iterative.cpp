#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Graph class
class Graph {
    int V; 
    vector<vector<int>> adj; 

public:
    Graph(int V) : V(V+1) {
        adj.resize(V+1);
    }

    // Function to add an edge to the graph
    void addEdge(int v, int w) {
        adj[v].push_back(w); // Add w to v's list
    }

    void DFS(int start) {
        vector<bool> visited(V, false); // Mark all vertices as not visited
        stack<int> stack; 

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
    g.addEdge(2,5);
    g.addEdge(2,6);
    g.addEdge(3,4);
    g.addEdge(4,8);
    g.addEdge(8,7);
    g.addEdge(7,3);
   
    cout << endl <<"Depth First Traversal (starting from vertex 0): ";
    g.DFS(1);
    cout << endl;

    return 0;
}
