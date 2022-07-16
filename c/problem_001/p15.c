#include <stdio.h>
#include <stdlib.h>

#define XS (20+1)
#define YS (20+1)

typedef unsigned long long int uint64_t;


void printMtx(uint64_t [][XS]);
void initMtx(uint64_t [][XS]);
uint64_t nPaths(uint64_t [][XS]);

int main()
{
    uint64_t n;
    uint64_t mat[XS][XS];

    initMtx(mat);
    n = nPaths(mat);
    printf("Paths: %I64u ", n);

    return 0;
}




void printMtx(uint64_t mtx[][XS])
{
    int x, y;

    for(y = 0; y < YS; y++)
    {
        for(x = 0; x < XS; x++)
        {
            printf("%I64u ", mtx[y][x]);
        }
        printf("\n");

    }

}

void initMtx(uint64_t mtx[][XS])
{
    int x, y;

    for(y = 0; y < YS; y++)
    {
        for(x = 0; x < XS; x++)
        {
            mtx[y][x] = 0;
            if(x == 0) mtx[y][x] = 1;
            if(y == 0) mtx[y][x] = 1;
        }
    }
    mtx[0][0] = 0;
    printMtx(mtx);
}


uint64_t nPaths(uint64_t mtx[][XS])
{
    int x, y;

    for(y = 1; y < YS; y++)
    {
        for(x = 1; x < XS; x++)
        {
            mtx[y][x] = mtx[y-1][x] + mtx[y][x-1];
        }
    }
    printMtx(mtx);

    return mtx[YS-1][XS-1];
}
