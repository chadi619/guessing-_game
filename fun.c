#include <time.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


 int main(){
	int guesscount=0;
	int guess,num;
	int i,j;

	for( i=0;i<1;i++){
	srand (time(0));
	num = (rand()%100+1);
		
	}    printf("GUESS THE CORRECT NUMBER BETWEEN 1 AND 100\nwith minimum guesses\n");
	
		while(guess!=num){
		j++;
			printf("give a guess:");
			scanf("%d",&guess);
		guesscount++;
			if (guess<num){
		printf("chose a bigger number\n");
		}else if(guess>num){
			printf("chose a smaller number\n");
		}
	}	printf("CORRECT!\nguesscount is:%d",guesscount);

		 
}	

