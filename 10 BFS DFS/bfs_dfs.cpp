#include <iostream>
using namespace std;

#define MAX 100

int main() {
    int adj[MAX][MAX], visited[MAX];
    int stack[MAX], top = -1;
    int queue[MAX], front = -1, rear = -1;

    int n, i, j, start;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix (" << n << "x" << n << "):\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> adj[i][j];
        }
    }

    cout << "Enter starting vertex (0 to " << n - 1 << "): ";
    cin >> start;

    front = 0; rear = -1;

    queue[++rear] = start;
    visited[start] = 1;

    cout << "\nBFS Traversal (using Queue): ";
    while (front <= rear) {
        int curr = queue[front++];
        cout << curr << " ";

        for (i = 0; i < n; i++) {
            if (adj[curr][i] == 1 && visited[i] == 0) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }

    for (i = 0; i < n; i++) visited[i] = 0;

    top = -1;
    stack[++top] = start;

    cout << "\nDFS Traversal (using Stack): ";
    while (top != -1) {
        int curr = stack[top--];

        if (!visited[curr]) {
            cout << curr << " ";
            visited[curr] = 1;

            for (i = 0; i < n; i++) {
                if (adj[curr][i] == 1 && !visited[i]) {
                    stack[++top] = i;
                }
            }
        }
    }

    cout << endl;
    return 0;
}
