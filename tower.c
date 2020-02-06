#include<stdio.h>
void tower(int n,char a,char c,char b)
{
 if(n==1)
   {
     printf(" Move Disk 1 from %c to %c\n",a,c);
     return;
   }
  
  tower(n-1,a,b,c);
  printf(" Move disk %d from %c to %c\n",n,a,c);
  tower(n-1,b,c,a);
}

int main()
{ 
  int n;
  printf("\n Enter the no of Disks:");
  scanf("%d",&n);
  tower(n,'A','C','B');
  return 0;
}
