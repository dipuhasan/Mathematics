#include<bits/stdc++.h>
using namespace std;
bool isLucky(int n)
{
    static int counter  = 2;
    int next_position = n;
    if(counter > n)
        return 1;
    if(n%counter == 0)
        return 0;

    next_position -= next_position/counter;

    counter++;
    return isLucky(next_position);
}

int main()
{
    int x = 13;
    if(isLucky(x))
        printf("%d is lucky number\n", x);
    else
        printf("%d is not lucky number\n", x);

    return 0;
}
