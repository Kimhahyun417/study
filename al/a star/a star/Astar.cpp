#include "Astar.h"


void Astar::research()
{

    int stack= 0;
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
    //주변 노드 탐색
    for (int y = startY -1; y <= startY +1; y++)
    {
        for (int x = startX - 1; x <= startX + 1; x++)
        {

            grid[y][x].move += (stack % 2 == 0 ? 14 : 10);
            grid[y][x].sum = grid[y][x].move + grid[y][x].dist;
            pq.push({ grid[y][x].sum, y, x });
            stack++;
        }
    }
}

int Astar::dist(int Dx, int Dy)
{
    return (Dy < Dx) ? Dy* 14 + (Dx-Dy) * 10 : Dx* 14 +(Dy-Dx) * 10;
}

int Astar::abs(int num)
{
    if (num < 0) return -num;
    if (num == 0) return 0;
    return num;
}

void Astar::Show()
{
    for (int y = 0; y < COL; ++y) {
        for (int x = 0; x < ROW; ++x) {
            cout << "("<< x << "," << y << ")" << "[" << grid[y][x].dist << "] ";
        }
        cout << endl;
    }
}

Astar::Astar()
{
    for (int y = 0; y < COL; ++y) {
        for (int x = 0; x < ROW; ++x) {
            grid[y][x].x = x;
            grid[y][x].y = y;
            grid[y][x].dist = dist(abs(targetX - x), abs(targetY - y));
        }
    }

    
}

