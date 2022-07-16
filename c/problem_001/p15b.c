#include <stdio.h>
#include <stdlib.h>

#define XS 20
#define YS 20

void printMtx(int [][20]);

int main()
{
    int x, y;
    int n;
    int mat[20][20];


    for(n = 0; n < XS; n++)
    {
        mat[0][n] = 1;
        mat[n][0] = 1;
    }

    printMtx(mat);
    return 0;
}


void printMtx(int mtx[][20])
{
    int x, y;

    for(y = 0; y < YS; y++)
    {
        for(x = 0; x < XS; x++)
        {
            printf("%d\t", mtx[y][x]);
        }
        printf("%d\t", mtx[y][x]);
    }

}
