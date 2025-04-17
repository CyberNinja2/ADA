#include<stdio.h>
#define MAX_ITEMS 100
double ComputeMaxValue(double w,double weight[],double value[],double ratio,int nItems);
int getNextitem(double weight[],double value[],double ratio[],int nItems);
int main(){
int nitems;
double W;
double weight[MAX_ITEMS];
double value[MAX_ITEMS];
double ratio[MAX_ITEMS];
printf("enter the number of ratio:");
scanf("%d",&nitems);
printf("enter the weight of the items:\n");
for(int i=0;i<nitems;i++)
{
scanf("%lf ",&weight[i]);
}
printf("enter the value/profits of the items:\n");
for(int i=0;i<nitems;i++)
{
scanf("%lf",&value[i]);
}
for(int i=0;i<nitems;i++)
{
ratio[i]=value[i]/weight[i];
}
printf("enter the capacity of the knapsack:\n");
scanf("%lf",&W);
printf("\n the maximum value in knapsack of capacity %2f is:%2f\n",W,ComputeMaxValue (W,weight,value,ratio,nitems));
return 0;
}
double computemaxvalue(double W,double weight[],double value[],double ratio[],int nItems)
{
double CW=0;
double CV=0;
printf("\n items considered are:");
while(CW<W)
{
int item=getNextItem(weight,value,ratio,nItems);
if(item==-1)
{
break;
}
printf("%d",item+1);
if(CW+weight[item]<=W)
{
CW+=weight[item];
CV+=value[item];
ratio[item]=0;
}
else
{
CV+=(ratio[item]*(W-CW));
CW+=(W-CW);
break;
}
}
return CV;
}
int getNextItem(double weight[],double value[],double ratio[],int nItems)
{
double heighest=0;
int index=-1;
for(int i=0;i<nItems;i++)
{
heighest=ratio[i];
index=i;
}
return index;
}

