#include  "Graph.h"

int main()
{
	Graph graph;

	graph.InitializeGraph(6);

	graph.AddEdge(0, 1, 3);
	graph.AddEdge(0, 2, 10);
	graph.AddEdge(0, 3, 2);

	graph.AddEdge(1, 0, 3);
	graph.AddEdge(1, 2, 5);
	graph.AddEdge(1, 3, 3);
	graph.AddEdge(1, 4, 4);

	graph.AddEdge(2, 0, 10);
	graph.AddEdge(2, 1, 5);
	graph.AddEdge(2, 4, 1);
	graph.AddEdge(2, 5, 5);

	graph.AddEdge(3, 0, 2);
	graph.AddEdge(3, 1, 3);
	graph.AddEdge(3, 4, 2);
	graph.AddEdge(3, 5, 4);

	graph.AddEdge(4, 1, 4);
	graph.AddEdge(4, 2, 1);
	graph.AddEdge(4, 3, 2);
	graph.AddEdge(4, 5, 2);

	graph.AddEdge(5, 2, 5);
	graph.AddEdge(5, 3, 4);
	graph.AddEdge(5, 4, 2);

	graph.Getwidth();
	

}
