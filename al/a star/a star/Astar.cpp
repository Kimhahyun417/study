#include "Astar.h"




int Astar::dist(int Dx, int Dy)
{
    return (Dy < Dx) ? Dy* 14 + (Dx-Dy) * 10 : Dx* 14 +(Dy-Dx) * 10;
}

int Astar::abs(int num)
{
    if (num < 0) return -num;
    return num;
}

Astar::Astar()
{
    for (int y = 0; y < ROW; ++y) {
        for (int x = 0; x < COL; ++x) {
            grid[y][x].x = x;
            grid[y][x].y = y;
            grid[y][x].dist = dist(abs(targetX - x), abs(targetX - y));
        }
    }

    
}

