#include <stdio.h>

int main() {
    
      int size,i;
     
      printf("enter the size of array:");
	  scanf("%d",&size);
	  int arr[size];
	  int max=arr[0];
	  int min=arr[0];
	  
	  for(i=0;i<size;i++)
	  {
	  printf("enter the values of array:");
	  scanf("%d",&arr[i]);
	  
}
      for(i=1;i<size;i++){
	   if (arr[i] > max) {
            max = arr[i]; 
           }
        if (arr[i] < min) {
            min = arr[i];
        } 
      }
      printf("The maximum number in the array is: %d\n", max);  
      printf("The minimum number in the array is: %d\n", min);  
return 0;
}