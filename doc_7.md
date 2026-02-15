Documentation for Question No. 7

Given a weighted graph, implement Dijkstra’s algorithm to find the shortest path from a source node to all other nodes.

(A) Data Structures Defined

i} I used a 2D array to act as an adjacency matrix which stores the weights of the edges between the nodes.

ii} I used an integer array called dist to store the shortest distance from the source to every other vertex in the graph.

iii} I used a visited array to keep track of nodes that have already been processed to avoid redundant calculations.

iv} I used a constant called INF to represent infinity for nodes that have not been reached yet.

(B) Functions

i} The dijkstra() function initializes the distance to all nodes as infinity and the starting node as zero.

ii} It uses a loop to find the nearest unvisited node and marks it as visited in each step.

iii} The function then updates the distances of all neighboring nodes if a shorter path is found through the current node.

iv} Finally, it prints a simple table showing each node and its shortest distance from the starting point.

(C) The main() function

i} I wrote the main() function to set up a sample weighted graph using a 5x5 adjacency matrix.

ii} I called the dijkstra function starting from node 0 to show how the shortest paths are calculated.

iii} I used simple print statements to format the output so it is easy to read.

iv} The program demonstrates how the algorithm correctly updates distances as it finds better paths through the graph.

(D) Sample Output

Node     Distance

0        0

1        10

2        50

3        30

4        60
