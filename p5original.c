#include<stdio.h>
void input(int *a,int *b,int *c)
{
  printf("enter a number:\n");
  scanf("%d%d%d",a,b,c);
  
}
int cmp(int a,int b,int c,int *largest)
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
  printf("Largest number is = %d\n ",a,b,c,largest);
}
int main()
{ 
  int a,b,c,t;
  input(&a,&b,&c);
  cmp(a,b,c,&t);
  output(a,b,c,t);
  return 0;

}