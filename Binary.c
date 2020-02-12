#include<stdio.h>
#include<stdlib.h>


int main()
{
	int A[100],key,n,j,fpos,lpos,count,m,i,k,h,l=0;
	printf("Enter Size : ");
	scanf("%d",&n);
	h=n-1;
	printf("\nEnter the Sorted Array : ");
	for(j=0;j<n;j++)
		scanf("%d",&A[j]);
	printf("Enter Key : ");
	scanf("%d",&key);
	while(l<=h)
	{
		m=(l+h)/2;	
		if(A[m]==key)
			{	i=k=m;
				while(A[i]==key)
				{
					fpos=i;
					i--;
				}
				while(A[k]==key)
				{
					lpos=k;
					k++;
				}
				count=lpos-fpos+1;
				printf("Element Found.");
				printf("\nFirst Occurence : %d",fpos);
				printf("\nLast Occurence : %d",lpos);
				printf("\nCount : %d",count);
				break;
			}
		else if(A[m]>key)
			h=m-1;
		else
			l=m+1;
	}
	if(l>h)
		printf("\nElement Not found.);
	return 0;
}
