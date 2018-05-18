/******************************************************************************
 * Copyright (C) 2018 by Dwij Sheth
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief the file contains function definitions and main funcion
 *
 *
 * @author Dwij Sheth
 * @date 18th May 2018
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
	sort_array(test ,SIZE);
	print_array(test ,SIZE);
	print_statistics(test ,SIZE);	
	
	

}


 
void sort_array(unsigned char array[] , unsigned int size ){
	int i , index , max_index = -1 , max  = -1, j , temp;
	for (i = 0 ; i< (size - 1) ;i++){
		index = i ;
		for(j = index ; j< size  ;j++){
			if(array[j] > max){ 
				max_index = j;
				max = array[j];
			} 
		}
		
		temp = array[index];
		array[index] = max;
		array[max_index] = temp ;
		max = -1 ;
	}
}


unsigned char find_maximum(unsigned char array[] , unsigned int size ){
	// this function will make use of sorted array
	return array[0];
}


unsigned char find_minimum(unsigned char array[] , unsigned int size ){
	// this function will make use of sorted array
	return array[size - 1];
}


unsigned char find_mean(unsigned char array[] , unsigned int size ){

	int i,sum = 0;
	for(i = 0 ; i < size ;i++){
		sum += array[i];
	}
	return sum/size;
}


unsigned char find_median(unsigned char array[] , unsigned int size ){
	// this function will make use of sorted array
	if ((size % 2) == 1) return array[size/2]; // if dataset has odd number of members
	else { // in case of even numbers , will return mean of 2 middle members of sorted dataset
		return ((array[size/2] + array[(size/2) - 1]) / 2);
	}
}


void print_statistics(unsigned char array[] , unsigned int size){
	
	printf("the maximum of dataset :\n");
	printf("%d\n",find_maximum(array ,size));	
	printf("\n\n");

	printf("the minimum of dataset :\n");
	printf("%d\n",find_minimum(array ,size));	
	printf("\n\n");

	printf("the mean of dataset :\n");
	printf("%d\n",find_mean(array ,size));	
	printf("\n\n");

	printf("the median of dataset :\n");
	printf("%d\n",find_median(array ,size));	
	printf("\n\n");
}


void print_array(unsigned char array[] , unsigned int size ){
	int i;
	printf("the sorted array:\n");
	for(i = 0 ;i < size ;i++){
		printf("\t%d",array[i]);
	}
	printf("\n\n");
}