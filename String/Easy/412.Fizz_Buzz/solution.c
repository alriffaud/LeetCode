#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int *returnSize) 
{
    int i, j;
    char **p;

    if (returnSize == NULL)
    {
        return (NULL);
    }
    p = malloc(n * sizeof(char*));
    if (p == NULL)
    {
        free(p);
        return (NULL);
    }    
    for (i = 0; i < n; i++)
    {
        p[i] = malloc(20 * sizeof(char));
        if (p[i] == NULL)
        {
            for (int j = 0; j < i; j++) {
                free(p[j]);
            }
            free(p);
            return NULL;
        }
        if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0)
            sprintf(p[i], "FizzBuzz");
        else if ((i + 1) % 3 == 0)
            sprintf(p[i], "Fizz");
        else if ((i + 1) % 5 == 0)
            sprintf(p[i], "Buzz");
        else
            sprintf(p[i], "%d", i + 1);
    }
    *returnSize = n;
    return (p);
}