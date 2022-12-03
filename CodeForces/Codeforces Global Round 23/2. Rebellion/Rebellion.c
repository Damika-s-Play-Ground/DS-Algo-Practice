#include <stdlib.h>
#include <stdio.h>

int main()
{
    freopen("Rebellion.txt", "r", stdin);
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; t++)
    {
        scanf("%d", &n);
        int *arr = (int *)malloc(n * sizeof(int));
        char *str;
        scanf("%c", str);

        // Returns first token
        char *token = strtok(str, "-");

        // Keep printing tokens while one of the
        // delimiters present in str[].
        while (token != NULL)
        {
            printf("%s\n", token);
            token = strtok(NULL, "-");
        }
    }
    return 0;
}