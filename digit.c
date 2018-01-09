#include<stdio.h>
void main(){
int n,count=0;
scanf("%d",&n);
while(n!=0)
{
count=count+1;
n=n/10;
}
printf("%d",count);
}

