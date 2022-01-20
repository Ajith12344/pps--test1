#include<stdio.h>
int input()
{
  int num;
  printf("enter a number:\n");
  scanf("%d",&num);
  return num;
}
int cmp(int a,int b,int c)
{
  if(a>b&&a>c)

  {
      return a;
  }
    else if(b>a&&b>c)
    {
      return b;
    }
   else if(c)
    {
      return c;
    }
}

void output(int a,int b,int c,int largest)
{

 printf("Largest number is %d\n;",a,b,c,largest);
}
int main()
{
  int a,b,c,largest;
  a = input();
  b = input();
  c = input();
 a = cmp(a,b,c);
 b =cmp(a,b,c);
 c =cmp(a,b,c);

   output(a,b,c,largest);
   return 0;
}