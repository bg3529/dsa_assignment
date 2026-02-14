Documentation for Question No. 5

How can we implement the undirected graph using the adjacency matrix? Write a function that implements the BFS and DFS technique to traverse through the graph. Demonstrate the use of your program with an example graph.


(A) Data Structures Defined

i} I used a 2D integer array called adj to represent the adjacency matrix. This table stores 1s to show a connection between two points and 0s where there is no connection.

ii} I used a simple integer array called visited to keep track of which points the program has already seen, preventing it from going in circles.

iii} I defined a constant MAX to set the size of the graph, ensuring the matrix and arrays are large enough to hold all vertices.

(B) Functions

i} The add_edge() function takes two points and marks both spots in the matrix as 1, which represents a two-way connection in an undirected graph.

ii} The dfs() function uses recursion to go as deep as possible into the graph before backtracking, which is the standard way to explore long paths.

iii} The bfs() function uses an array as a queue to visit all the immediate neighbors of a point first before moving on to the next level of the graph.

iv} I included a reset_visited() function to clear the tracking array between the two different search methods so the results stay accurate.

(C) The main() function

i} I wrote the main() function to build a small sample graph by connecting nodes like 0 to 1, 0 to 2, and so on.

ii} I called the dfs function first to show the output of a depth-first search starting from node 0.

iii} I then reset the visited array and called the bfs function to show the output of a breadth-first search from the same starting point.

iv} I used print labels so anyone running the code can clearly distinguish which traversal method produced which line of output.

(D) Sample Output
DFS Traversal starting from 0: 0 1 3 2 4 
BFS Traversal starting from 0: 0 1 2 3 4 