#include <stdio.h>
#include <stdio.stdlib.h>

int main(void) {
  printf(int argc, chat* argv[]) {
 int num,i;
 num = atoi(argv[1]);
	  if (num <= 1){
		  printf("0");
	  }else{
		  for (i=3; i< num; i+=2) {
			  
		  if(num%i==0){
			  printf("0");
			  break;
		  }
		  }
		  if(i==num){
			  printf("1");
		  }
	  }
	  }
  return 0;
}