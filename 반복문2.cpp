#include <stdio.h>

main(){
	//1부터 10까지의 합
	int i=0 , sum=0 ;
	
	while(i<=10){
		sum = sum+i ; //sum+=i;
		i++;
	}
		printf("1부터 10까지의 합: %d", sum);
}
