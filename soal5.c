#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

pthread_t tid;

void *carikata(void *arg){
	char **inputan = (char**)arg;	
	FILE *novel;
	novel = fopen("Novel.txt","r");
	char x;
	int i=0;
	int count=0;
	while (( x= fgetc(novel)) != EOF){
		if(x==inputan[1][i]) i++;
		else if(i==strlen(inputan[1])) { count++;}		
		else i=0;
	}
	printf("%d\n",count);	
}

