// Program for Fibonacci numbers
#include<stdio.h>
int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}

int main ()
{
  int n = 9;
  printf("%d\n", fib(n));
  getchar();
  return 0;
}
/*--------------------------*/
#include<stdio.h>
int fib(int n)
{
    int f[n+1], i;
    f[0] = 0;
    f[1] = 1;
    for(i = 2; i<=n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}


int main()
{
    int n = 9;
    printf("%d\n", fib(n));

    return 0;
}

/*--------------------------*/
#include<stdio.h>
int fib(int n)
{
    int a = 0, b = 1, c, i;
    if(n==0)
        return a;
    for(i = 2; i<=n; i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    return b;

}

int main()
{
    int n = 9;
    printf("%d\n", fib(n));


    return 0;
}

