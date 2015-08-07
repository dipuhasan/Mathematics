#include<bits/stdc++.h>
using namespace std;

unsigned int squareRoot(int n)
{
    int x = n;
    int y = 1;
    while( x>y )
    {
        x = (x+y) / 2;
        y = n/x;
    }
    return x;
}


int main()
{
    int n = 49;
    printf("root of %d is %d\n", n, squareRoot(n));

    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
float sq(float n)
{
    float x = n;
    float y = 1;
    float e = 0.000001;
    while(x-y > e)
    {
        x = (x+y) / 2;
        y = n/x;
    }
    return x;
}

int main()
{
    int n = 50;
    printf("Bablylion square root of %d is %f\n",n, sq(n));

    return 0;
}
*/
