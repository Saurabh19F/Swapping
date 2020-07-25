#include<stdio.h>
#include<conio.h>

void main()
{
int x,y;
printf("Swapping of 2 numbers without using a temporary variable");
printf("Enter value of X:\n");
scanf("%d", &x);
printf("Enter value of Y:\n");
scanf("%d", &y);

if(x>y)
{
y=x-y;
x=x-y;
y=x+y;
}

else
if(y>x)
{
x=y-x;
y=y-x;
x=y+x;
}

printf("\nX=%d",x);
printf("\nY=%d",y);
getch();
}
