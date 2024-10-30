#include <stdio.h>
#include <stdlib.h>

int main(){
	int	intMaxChars	=100;
	char	*chrString;
	char	*chrStringR;
	int	intSize		=0;

	chrString=(char*) malloc(intMaxChars*sizeof(char));

	printf("Enter a sentence of %d charachters or less: \n",intMaxChars);
	fgets(&chrString[0], intMaxChars, stdin);

	if(chrString ==NULL){
		printf("MEMORY ALLOCATION FAILED!!! TERMINATING...\n");
		return 1;
	}

	for(int i=0;i<intMaxChars;i++){
		if(chrString[i]=='\n'){
			break;
		}
		else{
			intSize++;
		}
	}
	chrString = realloc(chrString, intSize*sizeof(char)+1);

	chrStringR=(char*) malloc(intSize*sizeof(char));
	for(int d=0;d<intSize;d++){
		printf("%c",chrString[d]);
	}
	int k=0;
	for(int j=intSize-1;j>=0;j--){
		chrStringR[k]=chrString[j];
		chrString= realloc(chrString, j*sizeof(char));
		k++;
	}

	printf("\nThe reversed sentence is: \n");
        for(int p=0;p<intSize;p++){
                printf("%c",chrStringR[p]);
   	}

	printf("\n");
	free(chrString);
	free(chrStringR);
return 0;
}
