#include<stdio.h>
void main(){
int n,k,a[1000],i,s=0;
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
a[i]=i;
}
for(i=1;i<=k;i++)
{
s=s+a[i];
}

printf("%d",s);


}
