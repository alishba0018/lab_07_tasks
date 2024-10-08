#include <stdio.h>

int main() {
    
      int size,i,sum;
      sum=0;
      
      printf("enter the size of array:");
	  scanf("%d",&size);
	  int arr[size];
	 
	  
	  for(i=0;i<size;i++)
	  {
	  printf("enter the values of array:");
	  scanf("%d",&arr[i]);
	  
}
      for(i=0;i<size;i++)
	  {
	  printf("%d \n",arr[i]);
	  
}

for  (i=0;i<size;i++){

sum=sum+arr[i];

}
printf("sum is %d",sum);
return 0;
}
	