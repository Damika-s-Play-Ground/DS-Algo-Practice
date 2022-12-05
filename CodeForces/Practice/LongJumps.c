#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt", "r", stdin);
    int n, word_count, *arr, j, element;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &word_count);
        arr = (int *)malloc(word_count * sizeof(int));
        j = 0;
        while (j < word_count && scanf("%d", arr + j) == 1){
            j++;
        }
        
        j = 0;
        while (j < word_count){
            printf("%d",arr +j);
            j++;
        }
    }
    return 0;
}
