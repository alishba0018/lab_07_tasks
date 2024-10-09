#include <stdio.h>

int main() {
    
      int i;
      float avg_temp;
      int sum=0;
      int arr[7];
	  for(i=0;i<7;i++)
	  {
	  printf("enter the temperature:");
	  scanf("%d",&arr[i]);
	  sum=sum+arr[i];
	  }
	  
	  avg_temp=sum/7;
	  printf("the average temperature is: %.1f C \n",avg_temp);
	  
	  printf("Extreme temperatures on day(s): ");
      for (i=0; i<7;i++) {
        if (arr[i] > 40 || arr[i] < 0) {
            printf("%d ", i+1); 
        }
      }
     

	  

      
return 0;
}