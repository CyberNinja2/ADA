#include<stdio.h>
#define MAX_ITEMS 10
int knapSack(int W,int Wt[],int val[],int n);
int max(int a,int b);
int main(){
int i;
int n;
int w;
int wt[MAX_ITEMS];
printf("enter the number of items:\n");
scanf("%d",&n);
printf("enter the weight of the items:\n");
for(i=1;i<=n;i++)
scanf("%d",&wt[i]);
}
printf("enter the values of the items:\n");
for(i=1;i<=n;i++)
{
scanf("%d",&val[i]);
}
printf("enter the capacity of knapSack");
scanf("%d",&w);
printf("the maximum value in knapSack of capacity %s is %d\n",w,knapSack(W,wt,val,n));
return 0;
}
int v[MAX_ITEMS+1][w+1];
for(i=0;i<=n;i++)
{
for(j=0;j<=w;j++)
{
if(i==0||j==0)
{
v[i][j]=0;
}
else if(j-wt[i]<0)
{
v[i][j]=v[i-1][j];
}
else
{
v[i][j]=max(v[i-1],val[i]+v[i-1][j-wt[i]);
}
}
return v[n][w]
int max(int a,int b)
{
return(a>b)?a:b;
}
}















