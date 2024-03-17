#include <stdio.h>
#include <stdlib.h>

#define MAX_V 4
#define WHITE 0
#define GRAY 1
#define BLACK 2

// Queue structure
struct Q {
    int items[MAX_V];
    int front;
    int rear;
};

// Vertex structure
struct V {
    int color;
    int dist;
    int pred;
};

// Graph structure
struct G {
    int n;
    int adj[MAX_V][MAX_V];
    struct V vertices[MAX_V];
};

// Function prototypes
void initG(struct G *g, int n);
void addE(struct G *g, int u, int v);
void bfs(struct G *g, int start);
void enq(struct Q *q, int value);
int deq(struct Q *q);
int isEmpty(struct Q *q);

// Function to initialize a graph with given number of vertices
void initG(struct G *g, int n) {
    g->n = n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            g->adj[i][j] = 0;
        }
        g->vertices[i].color = WHITE;
        g->vertices[i].dist = -1;  // Initialize distance to -1 for infinity
        g->vertices[i].pred = -1;  // Initialize predecessor to -1 (NIL)
    }
}

// Function to add an edge to the graph
void addE(struct G *g, int u, int v) {
    g->adj[u][v] = 1;  // Assuming it's a directed graph
}

// Function to add an item to the queue
void enq(struct Q *q, int value) {
    q->items[q->rear++] = value;
}

// Function to remove an item from the queue
int deq(struct Q *q) {
    return q->items[q->front++];
}

// Function to check if the queue is empty
int isEmpty(struct Q *q) {
    return q->front == q->rear;
}

// BFS traversal
void bfs(struct G *g, int start) {
    struct Q q;
    q.front = 0;
    q.rear = 0;

    g->vertices[start].color = GRAY;
    g->vertices[start].dist = 0;
    enq(&q, start);

    while (!isEmpty(&q)) {
        int cv = deq(&q);
        printf("Visited vertex: %d\n", cv);
        
        // Explore neighbors
        for (int i = 0; i < g->n; i++) {
            if (g->adj[cv][i] == 1 && g->vertices[i].color == WHITE) {
                g->vertices[i].color = GRAY;
                g->vertices[i].dist = g->vertices[cv].dist + 1;
                g->vertices[i].pred = cv;
                enq(&q, i);
            }
        }
        g->vertices[cv].color = BLACK;
    }
}

// Main function
int main() {
    struct G g;
    int nv = 4; // Change this according to your graph
    initG(&g, nv);
    
    // Add arbitrary connections
    addE(&g, 0, 1);
    addE(&g, 1, 2);
    addE(&g, 2, 3);
    addE(&g, 3, 0);
    
    int source = 0; // Change this according to your source vertex
    printf("BFS Traversal starting from vertex %d:\n", source);
    bfs(&g, source);

    return 0;
}
