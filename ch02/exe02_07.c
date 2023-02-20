#include <stdio.h>

void happy(void);

int main(void)
{
    happy();
    happy();
    happy();
    printf("\n");

    happy();
    happy();
    printf("\n");

    happy();
    printf("\n");

    return 0;
}

void happy(void)
{
    printf("Smile!");
}