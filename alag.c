#include<stdio.h>
#include<conio.h>
void great(int a,int b)
{
if(a>b)
printf("\n %d is greater than %d",a,b);
else
printf("\n %d is greater than %d",b,a);
}
void main()
{
    int a,b;
clrscr()_;
printf("enter two nunber:\n") ;
scanf("%d%d",&a,&b);
great(a,b);
getch();
