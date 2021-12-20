#include <stdio.h>
int main(int argc, char *argv[]){
	if(argc==2){
		printf("Hello, %s\n",argv[1]);
	}
	else{
		fprintf(stderr,"Not enough arguments or too many.\nUsage: %s <name>\n",argv[0]);
		return 1;
	}
	return 0;
}
