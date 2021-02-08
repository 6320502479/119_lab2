#include <stdio.h>
int main()
{
 int num[3],sort,j,k,i,A,B,C,i1,i2,i3;
 char in[3];
  for(i=0;i<3;i++)
  {
      scanf("%d",&num[i]);
  }
 if(num[0]>=0 && num[0]<=100 && num[1]>=0 && num[1]<=100 && num[2]>=0 && num[2]<=100)
 {
  for(i=1;i<3;i++)
  {
      j=0;
      while(num[i]>num[j])
          j++;
          sort=num[i];
      for(k=0;k<=i-j-1;k++)
        num[i-k]=num[i-k-1];
    num[j]=sort;
  }
  fflush (stdin);
  scanf("%c %c %c",&in[0],&in[1],&in[2]);
  if(in[0]=='A' || in[0]=='B' || in[0]=='C' || in[1]=='A' || in[1]=='B' || in[1]=='C' || in[2]=='A' || in[2]=='B' || in[2]=='C')
  {
   if(in[0]=='A')
    i1=0;
   if(in[0]=='B')
    i1=1;
   if(in[0]=='C')
    i1=2;
    if(in[1]=='A')
    i2=0;
   if(in[1]=='B')
    i2=1;
   if(in[1]=='C')
    i2=2;
    if(in[2]=='A')
    i3=0;
   if(in[2]=='B')
    i3=1;
   if(in[2]=='C')
    i3=2;
  printf("%d %d %d",num[i1],num[i2],num[i3]);
  }
 }
}
