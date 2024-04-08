#include <stdio.h>

#define INFINITY 9999
#define MAX_NODES 9

void dijkstra(int graph[MAX_NODES][MAX_NODES], int start, int numNodes) {
    int distances[MAX_NODES];
    
    for (int i = 0; i < numNodes; i++) {
        distances[i] = INFINITY;
    }
    
    distances[start] = 0;
    
    for (int count = 0; count < numNodes - 1; count++) {
        for (int u = 0; u < numNodes; u++) {
            for (int v = 0; v < numNodes; v++) {
                if (graph[u][v] != 0 && distances[u] != INFINITY && distances[u] + graph[u][v] < distances[v]) {
                    distances[v] = distances[u] + graph[u][v];
                }
            }
        }
    }
    
    for (int i = 0; i < numNodes; i++) {
        printf("Shortest distance from %d to %d: %d\n", start, i, distances[i]);
    }
}

int main() {
    int graph[MAX_NODES][MAX_NODES] = {
        {0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0}
    };

    int startNode = 0;
    int numNodes = sizeof(graph[0]) / sizeof(graph[0][0]);

    dijkstra(graph, startNode, numNodes);

    return 0;
}
