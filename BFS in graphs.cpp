//Chandani Bhasin : 28845
//BFS#include<iostream>
#include<list>
#include <iostream>

using namespace std;

class Graph
{
int numVertices;
list<int> *adjList;
bool *visited;

public:
Graph (int vertices);
void addEdge(int src,int dest);
void BFS(int startVertex);
};

Graph :: Graph(int vertices)
{
numVertices=vertices;
adjList = new list<int>[vertices];
}

void Graph::addEdge(int src,int dest)
{
adjList[src].push_back(dest);
adjList[dest].push_back(src);
}

void Graph:: BFS(int startVertex)
{
visited=new bool[numVertices];
for(int i=0;i<numVertices;i++)
visited[i]=false;

list<int> queue;
visited[startVertex]=true;
queue.push_back(startVertex);

list <int> :: iterator i;

while(!queue.empty())
{
int currVertex=queue.front();
cout<<"visited "<<currVertex<<" ";
queue.pop_front();

for(i=adjList[currVertex].begin();i!=adjList[currVertex].end();++i)
{
int adjVertex=*i;
if(!visited[adjVertex])
{
visited[adjVertex]=true;
queue.push_back(adjVertex);
}
}
}
}
int main()
{
Graph g(4);
g.addEdge(0,1);
g.addEdge(0,2);
g.addEdge(1,2);
g.addEdge(2,0);
g.addEdge(2,3);
g.addEdge(3,3);

g.BFS(2);
return 0;
}

