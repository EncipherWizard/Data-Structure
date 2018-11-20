#include<iostream>
#include <list>
 
using namespace std;

class Graph_adjList
{
    int totVertex;
    list<int> *adjList;   
public:
    Graph_adjList(int totVertex);
    void addEdge(int u, int v);
    void depthFirstSearch(int s); 
    void dfsDepthCalculation(int svertex, bool visited[]);
};
 
Graph_adjList::Graph_adjList(int totVertex)
{
    this->totVertex = totVertex;
    adjList = new list<int>[totVertex];
}
 
void Graph_adjList::addEdge(int u, int v)
{
    adjList[u].push_back(v);
}
 
void Graph_adjList::depthFirstSearch(int svertex)
{
    bool *visited = new bool[totVertex];
    for(int i = 0; i < totVertex; i++)
        visited[i] = false;
    
   dfsDepthCalculation(svertex, visited);
}

void Graph_adjList::dfsDepthCalculation(int svertex, bool visited[])
    {
     visited[svertex] = true;
     cout << svertex << " ";
     list<int>::iterator i;
     for (i = adjList[svertex].begin(); i != adjList[svertex].end(); ++i)
        if (!visited[*i])
            dfsDepthCalculation(*i, visited);
    }
 
int main()
{
    Graph_adjList graph(6);
    graph.addEdge(0, 1);
    graph.addEdge(0, 3);
    graph.addEdge(1, 2);
    graph.addEdge(1, 0);
    graph.addEdge(2, 1);
    graph.addEdge(2, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 0);
    graph.addEdge(3, 2);
    graph.addEdge(4, 2);
    graph.addEdge(1, 5);
    graph.addEdge(5, 1);
 
    cout << "Enter the vertex to start (0 to 5):";
    int start_vertex;
    cin>>start_vertex;
    graph.depthFirstSearch(start_vertex);
 
    return 0;
}
