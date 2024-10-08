#include <stdio.h>

int main() {
    
      int arr[10]={5,10,15,20,25,30,35,40,45,50}; 
      int number;
      int found=0;
      printf("enter a number:");
	  scanf("%d",&number);
	  int i;
      for(i=0;i<10;i++)
	   if(number==arr[i]){
	  
	    found=1;
	     break;
	      }
	  if(found)
	  {
	  	
	  printf("number found");
	 
	  
}
      else
	  {
	  printf("number not found");
	  
}
return 0;
}
	