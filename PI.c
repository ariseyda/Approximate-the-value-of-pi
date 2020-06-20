#include<stdio.h>

//The value for PI can be determined by the series equation,
// PI = 4 x (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13....1/99)
//Write a program to approximate the value of PI using the formula given including terms up through 1/99. 
 
int main(){
	
	float pi;
	int i,j;
	float sum1=0,sum2=0;
	
	for(i=1;i<100;i+=4){
		printf("%d/%d + ",1,i);
		sum1=sum1+1.0/i;
	}
	for(j=3;j<100;j+=4){
		printf(" - %d/%d",1,j);
		sum2=sum2-1.0/j;
	}
	
    printf("\nSUM1:%f",sum1);
    printf("\nSUM2:%f",sum2);
    
	pi=4.0*(sum1+sum2);
	
	printf("\nPI:%.2f",pi);
	
	return 0;
}
