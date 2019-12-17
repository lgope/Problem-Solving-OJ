#include<stdio.h>

int main()
{
    int n, i, j, sum = 0, add = 0, res;
    scanf("%d", &n);
    int arr[n][n];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int col = n-1;
    for(i = 0; i < n; i++)
    {
        sum += arr[i][i];

        add = add + arr[i][col];
        col--;
    }

    if(add > sum)
    {
        res = add - sum;
    }
    else
    {
        res = sum - add;
    }

    printf("%d\n", res);
    return 0;
}
