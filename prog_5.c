#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int adj[MAX][MAX] = {0};
int visited[MAX];

void add_edge(int u, int v) {
    adj[u][v] = 1;
    adj[v][u] = 1;
}

void reset_visited() {
    for (int i = 0; i < MAX; i++) {
        visited[i] = 0;
    }
}

void dfs(int vertex) {
    printf("%d ", vertex);
    visited[vertex] = 1;

    for (int i = 0; i < MAX; i++) {
        if (adj[vertex][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

void bfs(int start_node) {
    int queue[MAX];
    int front = 0, rear = 0;

    visited[start_node] = 1;
    queue[rear++] = start_node;

    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);

        for (int i = 0; i < MAX; i++) {
            if (adj[current][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

int main() {
    add_edge(0, 1);
    add_edge(0, 2);
    add_edge(1, 3);
    add_edge(2, 4);

    printf("DFS Traversal starting from 0: ");
    reset_visited();
    dfs(0);
    printf("\n");

    printf("BFS Traversal starting from 0: ");
    reset_visited();
    bfs(0);
    printf("\n");

    return 0;
}