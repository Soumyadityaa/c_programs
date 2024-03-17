#include <stdio.h>
#include <stdbool.h>

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define MAX_VERTICES 4

int color[MAX_VERTICES];
int parent[MAX_VERTICES];
int graph[MAX_VERTICES][MAX_VERTICES] = {
    {0, 1, 1, 0},
    {1, 0, 0, 1},
    {1, 0, 0, 1},
    {0, 1, 1, 0}
}; // Adjacency matrix representation

void dfs(int num_vertices);
void dfs_visit(int node, int num_vertices);

int main() {

    // Perform DFS
    dfs(MAX_VERTICES);

    return 0;
}

void dfs(int num_vertices) {
    for (int i = 0; i < MAX_VERTICES; i++) {
        color[i] = WHITE;
        parent[i] = -1; // -1 represents nil
    }
    for (int i = 0; i < num_vertices; i++) {
        if (color[i] == WHITE) {
            dfs_visit(i, num_vertices);
        }
    }
}

void dfs_visit(int node, int num_vertices) {
    color[node] = GRAY;
    printf("Discovered: %d\n", node);

    for (int i = 0; i < num_vertices; i++) {
        if (graph[node][i] && color[i] == WHITE) {
            parent[i] = node;
            dfs_visit(i, num_vertices);
        }
        else if (graph[node][i] && color[i] == GRAY) {
            printf("Back edge detected: %d -> %d\n", node, i);
        }
    }

    color[node] = BLACK;
    printf("Finished: %d\n", node);
}
