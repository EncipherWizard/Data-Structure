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
    void breadthFirstSearch(int s);  
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
 
void Graph_adjList::breadthFirstSearch(int svertex)
{
    bool *visited = new bool[totVertex];
    for(int i = 0; i < totVertex; i++)
        visited[i] = false;
    list<int> queue;
 
    visited[svertex] = true;
    queue.push_back(svertex);
 
    list<int>::iterator i;
 
    while(!queue.empty())
    {
        svertex = queue.front();
        cout << svertex << " ";
        queue.pop_front();
 
        for (i = adjList[svertex].begin(); i != adjList[svertex].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}
 
int main()
{
    Graph_adjList graph(5);
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
 
    cout << "Enter the vertex to start (0 to 4):";
    int start_vertex;
    cin>>start_vertex;
    graph.breadthFirstSearch(start_vertex);
 
    return 0;
}
