#include <stdio.h>

int main() {
    
      char full_name[100];
      char email[100];
      char phone_number[20];
      
      int result_full_name;
	  int result_email;
	  int result_phone_number;
      
      printf("enter your full name: \n");
      result_full_name = scanf(" %[A-Za-z ]",full_name);
	  printf("enter your email: \n");
	  result_email = scanf(" %[A-Za-z0-9.-_@]",email);
	  printf("enter your phone number: \n");
	  result_phone_number = scanf(" %[0-9 +-()]",phone_number);
      
	 if(result_full_name != 1)
	  {
	  printf("invalid name format");
	 }
	 else if(result_email != 1)
	 {
	  printf("invalid email format");
	 }
	 else if(result_phone_number != 1)
	 {
	  printf("invalid phone number format");
	 }
      else
	  {
	  printf("your entered name is: %s \n",full_name);
	  printf("your entered email is: %s \n",email);
	  printf("your entered phone number is: %s \n",phone_number);
	  
}
return 0;
}