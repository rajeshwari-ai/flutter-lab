#include<stdio.h>
#include<conio.h>
struct da
{
int max[10],a1[10],need[10],before[10],after[10];
}
p[10];
void main()
{
int i,j,k,l,n,tot[10],av[10],cn=0,cz=0,temp=0,c=0;
printf("enter the no.of processes:");
scanf("%d",&n);
printf("\n enter the no.of resources");
scanf("%d",&r);
for(i=0;i<n;i++)
{
printf("process %d \n",i+1);
for(j=0;j<r;j++)
[
printf("maximum value for resource %d:",j+1);
scanf("%d",&p[i],max[j]);
}
for(j=o;j<r;j++)
{
printf("allocated for resoures%d",j+1);
scanf("%d",&p[i].a1[j]);
p[i].need[j]=p[i].max[j]-p[i].a1[j];
}
}
for(i=0;i<r;i++)
{
printf("enter total value of resources%d",i+1);
scanf("%d",&tot[i]);
}
for(i=0;i<n;i++)
temp=temp+p[j].a1[i];
av[i]=tot[i]-temp;
temp=0;
}
printf("\n\t maxallocated needed total avail"0;
for(i=0;i<n;i++)
{
prinf("\np%d\t",i+1);
for(j=0;j<r;j++);
printf(%D",p[i].max[j]);
printf(