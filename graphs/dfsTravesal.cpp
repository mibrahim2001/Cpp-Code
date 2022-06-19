#include <bits/stdc++.h>
using namespace std;

class Graph{
    int numOfVertices;
    list<int> *adjLists;
    bool *visited;

    public:
    //constructor 
    Graph(int vertices){
        numOfVertices = vertices;
        adjLists = new list<int>[vertices];
        visited = new bool[vertices];
    }

    //add edges method
    void addEdge(int src, int dest){
        adjLists[src].push_front(dest);

    }

    //dfs method
    void DFS(int vertex){
        visited[vertex] = true;
        list<int> adjList = adjLists[vertex];

        cout<<vertex<<" ";

        list<int>::iterator i;
        for(i = adjList.begin(); i!=adjList.end(); ++i){
            if(!visited[*i]){
                DFS(*i);
            }
        }

    }
    
};

int main(){

    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);

    g.DFS(0);

    return 0;
}

