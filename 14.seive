#include<bits/stdc++.h>
#define limit 100
int main()
{
    int i, j, *primes;
    primes = (int *)malloc(sizeof(int)*limit);

    for(i = 2; i<=limit; i++)
        primes[i] = 1;
    //sqrt(limit)
    for(i = 2; i<=sqrt(limit); i++)
        for(j = i; i*j<=limit; j++)
        primes[i*j] = 0;

    for(int i = 2; i<=limit; i++)
        if(primes[i])
            printf("%d\n", i);
    
    return 0;
}


/*
Output:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 71 73 79 89 89 97
*/
