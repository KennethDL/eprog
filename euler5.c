#include<stdio.h>
int main(){
	int x=232000000;
	int num=0;
	while(x<233000000){
		  x++;
		  
		  if(x%2 == 0 && x%3 == 0 && x%5 == 0 && x%7 == 0 && x%11 == 0 && x%13 == 0 && x%17 == 0 && x%19 == 0){
		  	num=num+x;
	    }
		  
	}
	printf("%d",num);
}
