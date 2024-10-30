#include <stdio.h>
#include <stdlib.h>

int	push	(int *stack,int size);
int	pop	(int *stack,int size);
void	display	(int *stack,int size);
int	quit	(int *stack);

int main(){
	int	*intStack = (int*) malloc(sizeof(int));
	int	intCounter	=0;
	char	chrOperation;
	printf("Welcome to the stack! Enter your desired operation: \n");
	printf("p for push, o for pop, d to display the contents and e to exit\n");

	while (1){
		printf("Enter your desired operation: ");
		scanf(" %c", &chrOperation);

		if(chrOperation=='p' ||chrOperation=='P'){
			intCounter=push(intStack,intCounter);
		}
		else if(chrOperation=='o' || chrOperation=='O'){
			intCounter=pop(intStack,intCounter);
		}
		else if(chrOperation=='d' ||chrOperation=='D'){
			display(intStack,intCounter);
		}
		else if(chrOperation=='e' ||chrOperation=='E'){
			return quit(intStack);
		}
		else{
			printf("INVALID OPERATION!!! TERMINATING...");
			free(intStack);
			return 0;
		}
	}
return 0;
}

int push(int *stack,int size){
        int     intInput        =0;
	printf("Enter an Integer to push: ");
	scanf("%d",&intInput);
	printf("Pushing %d to the stack\n",intInput);
	size=size+1;
	stack = realloc(stack,size*(sizeof(int)));
	stack[size-1]=intInput;
	return size;
}
int pop(int *stack,int size){
        printf("Popping the stack gives:  %d\n",stack[size-1]);
        size=size-1;
        stack = realloc(stack,size*(sizeof(int)));
        return size;
}
void display(int *stack,int size){
	printf("Displaying the contents of the stack: \n");
	for(int i=0;i<size;i++){
		printf("%d\n",stack[i]);
	}
}
int quit(int *stack){
	free(stack);
	return 0;
}
