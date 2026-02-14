#include <stdio.h>

#define MAX 5
#define INF 999

void dijkstra(int graph[MAX][MAX], int start) {
    int dist[MAX], visited[MAX];
    
    for (int i = 0; i < MAX; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[start] = 0;

    for (int count = 0; count < MAX - 1; count++) {
        int min = INF, u;

        // Pick the smallest distance node
        for (int v = 0; v < MAX; v++) {
            if (visited[v] == 0 && dist[v] <= min) {
                min = dist[v];
                u = v;
            }
        }

        visited[u] = 1;

        // Update neighbors
        for (int v = 0; v < MAX; v++) {
            if (!visited[v] && graph[u][v] != 0 && dist[u] != INF 
                && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Node \t Distance\n");
    for (int i = 0; i < MAX; i++) {
        printf("%d \t %d\n", i, dist[i]);
    }
}

int main() {
    int graph[MAX][MAX] = {
        {0, 10, 0, 30, 100},
        {10, 0, 50, 0, 0},
        {0, 50, 0, 20, 10},
        {30, 0, 20, 0, 60},
        {100, 0, 10, 60, 0}
    };

    dijkstra(graph, 0);

    return 0;
}