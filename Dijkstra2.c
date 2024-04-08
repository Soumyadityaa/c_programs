#include <stdio.h>

#define INFINITY 9999
#define MAX_NODES 100

void dijkstra(int graph[MAX_NODES][MAX_NODES], int start, int numNodes) {
    int d[MAX_NODES];
    
    for (int i = 0; i < numNodes; i++) {
        d[i] = INFINITY;
    }
    
    d[start] = 0;
    
    for (int count = 0; count < numNodes - 1; count++) {
        for (int u = 0; u < numNodes; u++) {
            for (int v = 0; v < numNodes; v++) {
                if (graph[u][v] != 0 && d[u] != INFINITY && d[u] + graph[u][v] < d[v]) {
                    d[v] = d[u] + graph[u][v];
                }
            }
        }
    }
    
    for (int i = 0; i < numNodes; i++) {
        printf("Shortest distance from %d to %d: %d\n", start, i, d[i]);
    }
}

int main() {
    int numNodes;
    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    int graph[MAX_NODES][MAX_NODES];
    printf("Enter the adjacency matrix for the graph:\n");
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int startNode;
    printf("Enter the starting node: ");
    scanf("%d", &startNode);

    dijkstra(graph, startNode, numNodes);

    return 0;
}
