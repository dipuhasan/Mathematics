//Efficient way to multiply with 7.
#include<bits/stdc++.h>
using namespace std;
int multiplyBy7(unsigned int n)
{
    return((n<<3) - n);
}

int main()
{
    unsigned int n = 4;
    printf("%u\n", multiplyBy7(n));

    return 0;
}
/*We can multiply a number by 7 using bitwise operator.
First left shift the number by 3 bits (you will get 8n)
then subtract the original numberfrom the shifted number
and return the difference (8n – n).
*/
