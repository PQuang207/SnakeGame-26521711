#include <iostream>
#include <windows.h>

using namespace std;

struct Point
{
    int x, y;
};
struct SNAKE
{
    Point bd[100];
    int len;
    SNAKE()
    {
        len = 4;
        bd[0] = { 1 , 1 };
        bd[1] = { 1 , 2 };
        bd[2] = { 1 , 3 };
        bd[3] = { 1 , 4 };
    }
};

void gotoxy(int, int);

int main()
{
    SNAKE S;
    return 0;
}

// Hàm di chuyển con trỏ đến tọa độ (x, y)
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x; // Cột (chiều ngang)
    coord.Y = y; // Dòng (chiều dọc)
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}