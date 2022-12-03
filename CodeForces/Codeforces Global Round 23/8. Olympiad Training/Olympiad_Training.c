#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *array;
    unsigned long int used;
    unsigned long int size;
} Array;

void initArray(Array *a, long unsigned int initial_size)
{
    a->array = malloc(initial_size * sizeof(int));
    a->used = 0;
    a->size = initial_size;
}
void insertArray(Array *a, long unsigned int element)
{
    if (a->used >= a->size)
    {
        a->size *= 2;
        a->array = realloc(a->array, a->size * sizeof(int));
    }
    a->array[a->used++] = element;
}
void freeArray(Array *a)
{
    free(a->array);
    a->array = NULL;
    a->used = a->size = 0;
}

int main()
{
    freopen("Olympiad_Training.txt", "r", stdin);
    int t, n, a, b, c, r, type, d;
    Array rArr, typeArr, dArr;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &n, &a, &b, &c);
        initArray(&rArr,n+1);
        initArray(&typeArr,n+1);
        initArray(&dArr,n+1);
        for (int j = 0; j < n; j++)
        {
            scanf("%d %d %d", &r, &type, &d);
            insertArray(&rArr,r);
            insertArray(&typeArr,type);
            insertArray(&dArr,d);
        }
    }
    return 0;
}