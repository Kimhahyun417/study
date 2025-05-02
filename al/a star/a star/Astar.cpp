#include "Astar.h"


void Astar::research()
{

    pair<int, int> cameFrom[COL][ROW];
    bool found = false;
    //주변 노드 탐색
    grid[startY][startX].shape = 2;
    if (startX == player.x && startY == player.y)//
        return;
    for (int y = startY -1; y <= startY +1; y++)
    {
        for (int x = startX - 1; x <= startX + 1; x++)
        {
            if (y < 0 || x < 0 || y >= COL || x >= ROW) continue;
            if (grid[y][x].shape == 2 || grid[y][x].shape == 4) continue;
            if (x == startX && y == startY) continue;
           

          
            int moveCost = (abs(x - startX) + abs(y - startY) == 2) ? 14 : 10;

            int newMove = grid[startY][startX].move + moveCost;
            int newSum = newMove + grid[y][x].dist;

            if (grid[y][x].sum > newSum) {
                grid[y][x].move = newMove;
                grid[y][x].sum = newSum;
                grid[y][x].shape = 1; // 탐색 중
                pq.push({ newSum, grid[y][x].dist   , y, x});
            }
            
        }
    }
    if (!pq.empty()) {
        auto temp = pq.top();
        int nextY = get<2>(temp);
        int nextX = get<3>(temp);
        pq.pop();

       
        startX = nextX;
        startY = nextY;
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

void Astar::playerMove()
{
    if (GetAsyncKeyState(VK_LEFT))
    {
        player.x--;

    }
    if (GetAsyncKeyState(VK_RIGHT))
    {
        player.x++;
        

    }
    if (GetAsyncKeyState(VK_UP))
    {

        player.y--;
        ;
    }
    if (GetAsyncKeyState(VK_DOWN))
    {
        player.y++;
        
    }
    


}

void Astar::SetPosition(int x, int y)
{
    COORD pos;
    pos.X = x * 2;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);


}

void Astar::setConsoleColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void Astar::Show()
{
    for (int y = 0; y < COL; ++y) {
        for (int x = 0; x < ROW; ++x) {
            
            switch (grid[y][x].shape)
            {
            case 0:  // 기본
                SetPosition(x, y);
                setConsoleColor(15);
                printf("■");
                break;
            case 1:  // 탐색
                SetPosition(x, y);
                setConsoleColor(2);
                printf("■");
                break;
            case 2: //이동
                SetPosition(x, y);
                setConsoleColor(4);
                printf("■");
                break;
            case 3: // 시작 끝
                SetPosition(x, y);
                setConsoleColor(1);
                printf("■");
                break;
            case 4: // 벽
                SetPosition(x, y);
                setConsoleColor(0);
                printf("■");
                break;
            case 5: // 벽
                SetPosition(x, y);
                setConsoleColor(6);
                printf("■");
                break;
            default:
                break;

            }

        }
        cout << endl;
    }
}

void Astar::ShowNum()
{
    int num;
    for (int y = 0; y < COL; ++y) {
        for (int x = 0; x < ROW; ++x) {
            num = grid[y][x].sum == INT_MAX ? 100 : grid[y][x].sum;
            cout << "(" << num << ")" << " ";

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
            grid[y][x].dist = dist(abs(player.x - x), abs(player.y - y));
        }
    }
    grid[startY][startX].shape = 3;
    grid[player.y][player.x].shape = 3;
    grid[3][2].shape = 4;
    grid[3][3].shape = 4;
    grid[3][4].shape = 4;
    grid[3][5].shape = 4;
    grid[3][6].shape = 4;
    
}

