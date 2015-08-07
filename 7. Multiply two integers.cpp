// Multiply two integers without using multiplication, division and bitwise operators, and no loops
#include<stdio.h>
using namespace std;
int mul(int x, int y)
{
    if(y==0)
        return 0;
    if(y>0)
        return (x + mul(x, y-1));
    if(y<0)
        return -mul(x, -y);

}


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Multiplication is : %d\n", mul(a, b));

    return 0;
}


