#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generate_random(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	arr[i]=rand()%100;
}
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min, temp ;
  
    
    for (i = 0; i < n-1; i++) 
    { 
     
        min = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min]) 
            min = j; 
  
       temp=arr[min];
       arr[min]=arr[i];
       arr[i]=temp;
        
    } 
}

void printArray(int arr[], int size) 
{ 
    int i,j; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
  
}


int main() 
{ 
    int arr[1000];
    int n,i;
    clock_t start, end;
     double cpu_time_used;
	
    printf("Enter the size of array:");
    scanf("%d",&n);
    
       generate_random(arr,n); 

printf("\n The random array: ");
	for(i=0;i<n;i++)
		printf(" %d ",arr[i]);
	
	start = clock();	
    selectionSort(arr, n);
         end = clock();
          
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    
    
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("The time taken to sort elements is : %f\n",cpu_time_used);
	
    return 0; 
} 

