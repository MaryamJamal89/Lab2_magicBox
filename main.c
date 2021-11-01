#include<stdio.h>
#include<conio.h>
#include <windows.h>

int main()
{
    int col, row, i, size, totalSize;
    printf("Enter size of magic box: ");
    scanf("%d", &size);
    totalSize = size * size;

    for(i = 1; i <= totalSize; i++)
    {
        if(i == 1)
        {
            row = 1;
            col = (size + 1) / 2;
        }
        else if(((i-1) % size) == 0)
        {
            row++;
        }
        else
        {
            row--;
            col--;
            if(row == 0)
                row = size;
            if(col == 0)
                col = size;
        }
        gotoxy(col, row);
        printf("%d",i);
    }
    printf("\ntotal magic square size %d\n", totalSize);

    return 0;
}

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(
        GetStdHandle( STD_OUTPUT_HANDLE ),
        coord
    );
}
