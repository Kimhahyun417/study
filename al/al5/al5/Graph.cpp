#include "Graph.h"

void Graph::InitializeGraph(int nodeCount)
{
	count = nodeCount;
	graph = new Node * [count];
	isVisited = new bool[count];

	for (int i = 0; i < count; ++i)
	{
		graph[i] = nullptr;
		isVisited[i] = false;
	}
}

Node* Graph::CreateNode(int data, int cost)
{
	Node* newNode = new Node;
	newNode->node = data;
	newNode->cost = cost;
	newNode->next = nullptr;
	return newNode;
}

void Graph::AddEdge(int from, int to, int cost)
{
	Node* newNode = CreateNode(to, cost);
	newNode->next = graph[from];
	graph[from] = newNode;
}

void Graph::ShowGraphEdge(int node)
{
	Node* cur = graph[node];
	cout << "Node " << node << " edges: ";
	while (cur != nullptr)
	{
		cout << "(" << cur->node << ", cost: " << cur->cost << ") ";
		cur = cur->next;
	}
	cout << endl;
}

bool Graph::VisitVertex(int node)
{
	if (!isVisited[node])
	{
		isVisited[node] = true;
		return true;
	}
	return false;
}

void Graph::Dijikstra(int node)
{
	int* dist = new int[count];
	bool* visi = new bool[count];

	for (int i = 0; i < count; i++)
	{
		dist[i] = 1e9;
		visi[i] = false;
	}
	dist[node] = 0;
	for (int i = 0; i < count; i++)
	{
		int min = 1e9;
		int curr = -1;
		for (int j = 0; j < count; j++)
		{
			if (min > dist[j] && !visi[j]) // 최솟값
			{
				min = dist[j];
				curr = j;
			}
		}
		if (curr == -1) break;

		visi[curr] = true;  // 다녀간것 활성화

		Node* cur = graph[curr];
		while (cur != nullptr)
		{
			if (dist[cur->node] > dist[curr] + cur->cost)
			{
				dist[cur->node] = dist[curr] + cur->cost;
			}
			cur = cur->next;
		}
	}
	cout << "Dijkstra result from node " << node << ":\n";
	for (int i = 0; i < count; ++i)
	{
		cout << "To node " << i << ": ";
		if (dist[i] == 1e9)
			cout << "INF";
		else
			cout << dist[i];
		cout << endl;
	}

	delete[] dist;
	delete[] visi;
}

void Graph::DijikstraSTL(int node)
{
	vector<int> dist(count, INT_MAX);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

	dist[node] = 0;
	pq.push({ 0, node });

	while (!pq.empty())
	{
		int currentDist = pq.top().first;
		int currentNode = pq.top().second;
		pq.pop();

		if (dist[currentNode] < currentDist)
			continue;

		Node* cur = graph[currentNode];
		while (cur != nullptr)
		{
			int next = cur->node; // 다른 노드 연결
			int cost = cur->cost; // 연결 거리

			if (dist[next] > dist[currentNode] + cost) // 연결되어있는 값 보다 기존 값 + 코스트
			{
				dist[next] = dist[currentNode] + cost;
				pq.push({ dist[next], next });
			}
			cur = cur->next;
		}
	}

	cout << "Dijkstra result from node " << node << ":\n";
	for (int i = 0; i < count; ++i)
	{
		cout << "To node " << i << ": ";
		if (dist[i] == INT_MAX)
			cout << "INF";
		else
			cout << dist[i];
		cout << endl;
	}
}

int Graph::Getheight()
{
	stack<int> stack;
	stack.push(0);
	int a = 0 ;
	while (1)
	{
		if (stack.empty())
			return a;
		int top = stack.top();
		stack.pop();
		Node* cur = graph[top];
		isVisited[top] = true;
		a++;

		//연결된 노드 스택에 담기 
		while (cur != nullptr)
		{
			if (!isVisited[cur->node])
			{
				stack.push(cur->node);
			}

			cur = cur->next;
		}
	}
}

int Graph::Getwidth()
{
	queue<int> que;
	que.push(0);
	int a = 0;
	while (1)
	{
		if (que.empty())
			return a;
		int top = que.front();
		que.pop();
		Node* cur = graph[top];
		isVisited[top] = true;
		a++;
		
		cout << "시작: " << top;
		//연결된 노드 스택에 담기 
		while (cur != nullptr )
		{
			if (!isVisited[cur->node])
			{
				que.push(cur->node);
				cout << " :" << cur->node;
			}


			cur = cur->next;
		}
		cout<<endl;
	}
	return 0;
}


Graph::~Graph()
{
	if (graph)
	{
		for (int i = 0; i < count; ++i)
		{
			Node* cur = graph[i];
			while (cur)
			{
				Node* next = cur->next;
				delete cur;
				cur = next;
			}
		}
		delete[] graph;
	}

	delete[] isVisited;
}