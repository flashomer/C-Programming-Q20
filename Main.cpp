#include<stdio.h>


int main(){
	int array1[2][3];
	int array2[2][3];
	int array3[2][3];
	int i,j,a,b;
	printf("Enter the elements of array 1 :");
	for (i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a);
			array1[i][j]=a;
		}
	}
	printf("array1: \n");
	for (i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d \t",array1[i][j]);
		}
		printf("\n\n");
	}
	printf("Enter the elements of array 2 : ");
	for (i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b);
			array2[i][j]=b;
		}
	}
	printf("array2: \n");
	for (i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d \t",array2[i][j]);
		}
		printf("\n\n\n");
	}
	printf("Sum of arrays: \n");
	for (i=0;i<2;i++){
		for(j=0;j<3;j++){
			array3[i][j]=array2[i][j]+array1[i][j];
			printf("%d \t",array3[i][j]);
		}
		printf("\n\n");
	}
	
	
}


