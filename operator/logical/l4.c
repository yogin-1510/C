#include<stdio.h>
main()
{
int i=0,j=0,k=30,l=40,m;
printf("i=%d,j=%d,k=%d,l=%d,m=%d \n",i,j,k,l,m);
//m=i&&(j=300)||k&&(l=400);
m=i||j&&(k=300)&&(l=500)||20;
printf("i=%d,j=%d,k=%d,l=%d,m=%d \n",i,j,k,l,m);
}
