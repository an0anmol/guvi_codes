#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
if(n%400!=0 || n%4!=0)
printf("Not");
else
printf("Leap year");

}