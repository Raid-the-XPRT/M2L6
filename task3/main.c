#include <stdio.h>
#include <stdlib.h>

int main(){
	float	*intSamples;
	int	intSamplesCount=0;

	char	chrConfirmation;

	float	intAverage=0;

	intSamples=(int*) malloc(sizeof(int));


	while (1){
	        printf("Enter the Value of the sample: ");
	        scanf("%f",&intSamples[intSamplesCount]);

		intSamplesCount++;

		printf("Do you wish to add more? (Y/N): \n");
		scanf(" %c",&chrConfirmation);

		if(chrConfirmation == 'N' ||chrConfirmation == 'n'){
			break;
		}
		else if(chrConfirmation == 'Y' ||chrConfirmation == 'y'){
			realloc(intSamples,intSamplesCount);
		}
	}
	for (int i=0;i<=intSamplesCount;i++){
		intAverage=intAverage+intSamples[i];
	}
	intAverage=intAverage/intSamplesCount;

	printf("The Final adjusted samples are: \n");

	for (int j=0;j<=intSamplesCount-1;j++){
		printf("%f ,",(intSamples[j]-intAverage));
	}
return 0;
}
