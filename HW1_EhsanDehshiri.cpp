#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	srand(time(0));
	int d,i;
	int s=0;                                                            //its counter
	for(i=0;i<10;i++){
		int f = rand() % 3;                                              //f = 0 or 1 or 2
		int a = rand();
		int b = rand();
	    if(f==0){
	    	printf("%d + %d =",a,b);
	    	scanf("%d",&d);
	    	if(d== a+b){
	    		printf("Correct!\n");
	    		s=s+1;
			}
			else{
				printf("Incorrect!\n");
			}
		}
		if(f==1){
			printf("%d - %d =",a,b);
			scanf("%d",&d);
			if(d== a-b){
				printf("Correct!\n");
				s=s+1;
			}
			else{
				printf("Incorrect!\n");
			}
		}
		if(f==2){
			printf("%d * %d =",a,b);
			scanf("%d",&d);
			if(d== a*b){
				printf("Correct!\n");
				s=s+1;
			}
			else{
				printf("Incorrect!\n");
			}
		}
	}
	float p = (s*10);                                                                   //because of 10 numbers, instead of (s/10)*100 wrote s*10
	printf("Congratulation! %2.2f percent of your answers were correct.",p);
}
