#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], i;
    float posi = 0, neg = 0, zero = 0;
    float avgp = 0, avgn = 0, avgz = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            posi++;
        }
        else if(arr[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }

    avgp = posi/n;
    avgn = neg/n;
    avgz = zero/n;

    printf("%f\n", avgp);
    printf("%f\n", avgn);
    printf("%f\n", avgz);

    return 0;
}
