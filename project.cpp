#include<conio.h>
#include<stdio.h>
int main()
{
 int num;   
 int n;     
 int i,j,k,c,c1;
 int avail[20],arr[10];
 int need[20][20],alloc[20][20],max[20][20];

 printf("\nEnter number of process :");
 scanf("%d",&num);
 printf("\n Enter  resources available : ");
 scanf("%d",&n);
 printf("\nEnter insatnces for resources :\n");
 for(i=0;i<n;i++)
 {  printf("R%d ",i+1);
  scanf("%d",&avail[i]);
  }
 printf("\n Enter allocation matrix  \n");
 for(i=0;i<num;i++)
 {
 printf("p%d",i+1);          arr[i]=0;
 for(j=0;j<n;j++)
 {
  scanf("%d",&alloc[i][j]);
 }
}
  printf("\n Enter MAX matrix  \n");

 for(i=0;i<num;i++)
 {
 printf("p%d",i+1);
 for(j=0;j<n;j++)
 {
  scanf("%d",&max[i][j]);
 }
 }

 for(i=0;i<num;i++)
 {
 printf("\np%d\t",i+1) ;
 for(j=0;j<n;j++)
 {
  need[i][j]=max[i][j]-alloc[i][j];
  printf("\t%d",need[i][j]);
  }
 }
 k=0;     c1=0;
 printf("\n\n");
 while(k<15)
 {
 for(i=0;i<num;i++)
 {  c=0;
 for(j=0;j<n;j++)
 {
  if(arr[i]==1) break;
  if(need[i][j]<=avail[j])
  {
  c++;
  }
  if(c==n)
  {
  for(j=0;j<n;j++)
  {
  avail[j]+=alloc[i][j];
  }
  printf("p%d\t",i+1);  arr[i]=1;     c1++;
  }
 }
 } k++;
 }
 if(c1<num-1)
 {
 printf("\n it is not in safe state ");
 }
      getch();
 }
