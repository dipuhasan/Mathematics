// Write a program to add two numbers in base 14

#include<bits/stdc++.h>
using namespace std;

int getNumerical(char a)
{
    if( a>='0' && a<='9')
     return (a-'0');
    if(a>='A' && a<='D')
     return (a-'A' +10);
 }

 char getNumber(int res)
 {
    if( res>=0 && res<=9)
      return (res + '0');
    if(res>=10 && res <= 14)
      return (res - 10 + 'A');
 }

void sumBase(char num1[], char num2[],char ans[])
{
   int m,n;
   int v1,v2;
   int res;
   m = strlen(num1);
   n = strlen(num2);
   if(m!=n)
   {
      printf("Not pssible\n");
      return;
   }
   int carry=0;
   int i;
   for(i = m-1; i >= 0; i--)
   {
      v1=getNumerical(num1[i]);
      v2=getNumerical(num2[i]);
      res=v1+v2+carry;
     // printf("Yo  yo%d\n",res);
     if(res>=14)
     {
        carry=1;
        res = res-14;
     }
     else
       carry=0;

     ans[i+1]=getNumber(res);
    }
    if(carry==0)
      ans[0]=' ';
    else
      ans[0]='1';

 }

 int main()
{
   char num1[]="12A";
   char num2[] = "CD3";
   int n=strlen(num1);
   char ans[n+1];

   sumBase(num1,num2,ans);

   printf("%s\n",ans);
 }


