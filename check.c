#include <stdio.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void main()
{
    int a[5] = {1, 6, 7, 2, 0};
    qsort(a, 5, sizeof(int), compare);
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", a[i]);
    }
}