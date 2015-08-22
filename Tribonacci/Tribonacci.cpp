#include<iostream>

using namespace std;

int main()
{
    int n, a = 0, b = 0, Total = 1, c = 1;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        Total = a+b+c;
        a = b;
        b = c;
        c = Total;

        cout<<Total<<'\n';
    }

    return 0;
}

Output : 0 1 2 3 6 11 20 37 68 125

/*----------------------------------*/

#include<stdio.h>
int main()
{
    int n, a = 0, b = 1, c = 2, d = 0;
    scanf("%d", &n);
    printf("%d %d %d ", a, b, c);
    for(int i = 3; i<n; i++){
        d = a+b+c;
        printf("%d ", d);
        a = b;
        b = c;
        c = d;
    }

    return 0;
}
