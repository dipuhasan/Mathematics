// Write an Efficient Method to Check if a Number is Multiple of 3
#include<bits/stdc++.h>
using namespace std;
int isMultipleOf3(int n)
{
    int odd_count = 0;
    int even_count = 0;
    if(n<0) n = -n;
    if(n==0) return 1;
    if(n==1) return 0;

    while(n){
        if(n & 1)
            odd_count++;
        n = n>>1;

        if(n & 1)
            even_count++;
        n = n>>1;
    }
    return isMultipleOf3(abs(odd_count - even_count));
}


int main()
{
    int num = 23;
    if(isMultipleOf3(num))
        printf("num is multple of 3\n");
    else
        printf("num is not multiple of 3\n");


    return 0;
}
