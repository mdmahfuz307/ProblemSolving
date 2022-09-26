#include <stdio.h>
int main()
{
    int n, k, score[101], count = 0, i, j;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }
    for (j = 0; j < n; j++)
    {
        if (score[j] > 0 && score[j] >= score[k - 1])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}