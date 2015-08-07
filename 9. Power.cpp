// Write you own Power without using multiplication(*) and division(/) operators
#include<stdio.h>
int pow(int a, int b)
{
    if(b==0) return 1;
    int answer = a;
    int increment = a;
    int i, j;
    for(i = 1; i<b; i++){
      for(j = 1; j<a; j++)
      {
          answer += increment;
      }
      increment = answer;

    }
    return answer;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", pow(x, y));


    return 0;
}

/*
#include<stdio.h>
int multiply(int x, int y);
/* A recursive function to get a^b
  Works only if a >= 0 and b >= 0  */
int pow(int a, int b)
{
   if(b)
     return multiply(a, pow(a, b-1));
   else
    return 1;
}

/* A recursive function to get x*y */
int multiply(int x, int y)
{
   if(y)
     return (x + multiply(x, y-1));
   else
     return 0;
}

int main()
{
  printf("\n %d\n", pow(5, 3));
  getchar();
  return 0;
}
*/






