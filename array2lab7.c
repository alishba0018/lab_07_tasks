#include <stdio.h>

int main() {
    
      int size,i;
      
      
      printf("enter the size of array:");
	  scanf("%d",&size);
	  int arr[size];
	 
	  
	  for(i=0;i<size;i++)
	  {
	  printf("enter the values of array:");
	  scanf("%d",&arr[i]);
	  
}
      printf("elements of array in reverse order: \n");
      for(i=size-1;i>=0;i--)
	  {
	  printf("%d \n",arr[i]);
	  
}


return 0;
}