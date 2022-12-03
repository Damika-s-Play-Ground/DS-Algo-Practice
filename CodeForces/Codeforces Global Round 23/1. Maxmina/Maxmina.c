#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("Maxmina.txt", "r", stdin);
    int t, n, k, j, output, arr;
    // int *arr;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        // arr = malloc(n * sizeof(int));
        j = 0;
        output = 0;
        while (j < n && scanf("%d", &arr) == 1)
        {
            if (arr == 1)
            {
                output = 1;
            }
            j++;
        }
        if (output == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}