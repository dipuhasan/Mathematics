#include<stdio.h>

// Returns the new average after including x
float getAvg(float prev_avg, int x, int n)
{
    return (prev_avg*n + x) / (n+1);
}

// Prints average of a stream of numbers
void streamAvg(float arr[], int n)
{
    float avg = 0;
    for(int i = 0; i<n; i++)
    {
        avg = getAvg(avg, arr[i], i);
        printf("Average of %d numbers is %.1f\n", i+1, avg);
    }
}

int main()
{
    float arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);

    streamAvg(arr, n);

    return 0;
}
