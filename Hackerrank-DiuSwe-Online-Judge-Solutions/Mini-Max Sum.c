#include<stdio.h>

int main()
{
    unsigned long long int arr[5], max, mini, sum = 0;
    long long int maximum, minimum;
    int i;

    for(i = 0; i < 5; i++)
    {
        scanf("%lld", &arr[i]);

        sum = sum + arr[i];
    }

    max = arr[0], mini = arr[0];
    for(i = 0; i < 5; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }

        if(mini > arr[i])
        {
            mini = arr[i];
        }
    }

    maximum = sum - mini;
    minimum = sum - max;

    printf("%lld %lld\n", minimum, maximum);

    return 0;

}
