#include <stdio.h>
#include <stdlib.h>

int main(){
	int	intSize		=0;
	int	*x;
	int	*y;
	int	*z;
	int	intA		=0;
	int	intB		=0;


	printf("Enter the size of vectors: \n");
	scanf("%d",&intSize);

	x= (int*) malloc(intSize * sizeof(int));
	y= (int*) malloc(intSize * sizeof(int));
	z= (int*) malloc(intSize * sizeof(int));

	printf("Enter the value of A: ");
	scanf("%d",&intA);

	printf("Enter the value of B: ");
	scanf("%d",&intB);

	printf("Enter the values of X: \n");
	for(int i=0;i<intSize;i++){
		scanf("%d",&x[i]);
	}
        printf("Enter the values of Y: \n");
        for(int j=0;j<intSize;j++){
                scanf("%d",&y[j]);
        }
	printf("The result Z is as follows: \n");
	for(int k=0;k<intSize;k++){
		z[k]=(intA*x[k])+(intB*y[k]);
		printf("%d\n",z[k]);
	}
free(x);
free(y);
free(z);
return 0;
}
