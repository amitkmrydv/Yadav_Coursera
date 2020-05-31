/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <basic coding in C >
 *
 * <prefrorming different operation >
 *
 * @author <Amit Kumar Yadav>
 * @date <30-05-2020 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)




void print_array(unsigned char test[]){
	for(int i=0; i<SIZE; i++)
		printf("%d ",test[i] );
	printf("\n");
}

//median at 0

void find_median(unsigned char test[]){
	int i, j;

	for(i=0; i<SIZE-1; i++){
		for(j=0; j<SIZE-i-1; j++){
			if(test[j]>test[j+1])
				{
					int t= test[j];
					test[j]=test[j+1];
					test[j+1]=t;
				}
		}}
		
	printf("\nMedian=%d", test[20] );
	
}
// maximum 1
void find_mean(unsigned char test[]){
	float sum=0;
	for(int i=0; i<SIZE;i++)
		sum=sum+test[i];

	printf("\nMean=%0.2f",sum/SIZE );
}

// maximum 2
void find_maximum(unsigned char test[]){


	int large=test[0];
	for(int i=1; i<SIZE; i++){
		if(large<test[i]){
			large=test[i];
		}
		else large=large;
	}
	printf("\nMaximum=%d", large);

}


// minimum 3
void find_minimum(unsigned char test[]){
	int small=test[0];
	for(int i=1; i<SIZE; i++){
		if(small>test[i]){
			small=test[i];
		}
		else small =small;
	}
	printf("\nMinimum=%d", small);
}


// sort 4
void sort_array(unsigned char test[]){


	for(int i=0; i<SIZE-1; i++){
		for(int j=0; j<SIZE-i-1; j++){
			if(test[j]>test[j+1])
				{
					int t= test[j];
					test[j]=test[j+1];
					test[j+1]=t;
				}
		}}

		printf("\nSorted array\n");
		print_array(test);

}


void print_statistics(unsigned char test[]){
	
	printf("Statistics\n");
  find_median(test);
  find_mean(test);
  find_maximum(test);
  find_minimum(test);
}




void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    


 

  /* Other Variable Declarations Go Here */
  unsigned char t[SIZE]={ 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  /* Statistics and Printing Functions Go Here */
  print_statistics(test);
  printf("\nThe given array\n");

  print_array(t);
  sort_array(test);

}