#include <stdio.h>
#include <stdbool.h>

int main(){

	printf("welcome to the jungle\n");

	int chute = 0;
	int numeroSecreto = 42;


	 int acertou = (chute == numeroSecreto);
	 int count=0;

	 while(acertou==false){
		scanf("%d", &chute);
		if(acertou){
		printf("acertou");
		break;
	}else{
		if(chute < numeroSecreto){
			printf("menor numero");
			count++;

		}else{
			printf("maior numero");
			count++;
			
		}
	}

	 }
	
}
