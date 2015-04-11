#include<stdio.h>
#include<math.h>
//Simple program to compute standard deviation of input


int main(){
	

	int i, c, size = 0,  grades[100], hold=0;				//Declare and define variables
	float average, total, variance;

	while(c != -1){
		scanf("%d ", &c);						//Read data from input into array 'grades' and record the size/amount of grades
		grades[size] = c;
		size+=1;	
	}
	
	printf("The grades are as folling:\n\n");				//Print grades to screen
	
	for(i = 0; i<size-1; i++){

		printf("%d ", grades [i]);
		
	}
	puts("");

	for(i = 0; i<size-1;i++){
		total+= (float)grades[i];					//Adds up the elements in array 'grades' and stores it in total
	}
	average = total/(size-1);
	printf("The grade average is %.2f\n", average);				//Uses total to compute and print average
	
	for(i = 0; i<size-1;i++){
		hold += pow((grades[i]-average),2);				//Compute variance from average in order to compute standard deviation
		variance =(float)hold/(size-1);
	}

	printf("The standard deiation is %.2f\n", sqrt(variance));
}

