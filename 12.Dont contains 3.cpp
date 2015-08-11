#include<stdio.h>

int cnt(int n)
{
    if(n<3)
        return n;
    if(n>=3 && n<10)
        return n-1;

    int po = 1;
    while(n/po > 9)
        po = po*10;

    int msd = n/po;

    if(msd!=3)
        return cnt (msd)*cnt(po-1) + cnt(msd) + cnt(n%po);
    else
        return cnt(msd*po - 1);
}

int main()
{
    printf("%d ", cnt(578));

    return 0;
}
/*---------------------*/

#include<stdio.h>

int cnt(int n)
{
    if(n<3)
        return n;
    if(n>=3 && n<10)
        return n-1;

    int po = 1;
    while(n/po > 9)
        po = po*10;
    // Calculate 10^(d-1) (10 raise to the power d-1) where d is
    // number of digits in n. po will be 100 for n = 578
    int msd = n/po;
// For 578, total will be 4*count(10^2 - 1) + 4 + count(78)
    if(msd!=3)
        return cnt (msd)*cnt(po-1) + cnt(msd) + cnt(n%po);
        
    else // For 35, total will be equal to count(29)
        return cnt(msd*po - 1);
}

int main()
{
    printf("%d ", cnt(578));

    return 0;
}



/*
Output : 385
*/
