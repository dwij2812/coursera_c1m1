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
 * @file stats.h 
 * @brief header file for functions to analyze a data set.
 *
 *
 * @author Dwij Sheth
 * @date 18th May 2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__




/**
 * @brief function to sort array in descending order
 *
 *
 * @param array[]  the data set
 * @param size 	   size of data set
 *
 * @return void , the array itself( parameter ) will be sorted after execution
 */
void sort_array(unsigned char array[] , unsigned int size );

/**
 * @brief function to find maximum in dataset
 *
 * @param array[]  the data set
 * @param size 	   size of data set
 *
 * @return the maximum of a dataset
 */
unsigned char find_maximum(unsigned char array[] , unsigned int size );

/**
 * @brief function to find minimum in dataset
 *
 * @param array[]  the data set
 * @param size 	   size of data set
 *
 * @return the minimum of a dataset
 */
unsigned char find_minimum(unsigned char array[] , unsigned int size );

/**
 * @brief function to return mean of dataset
 *
 * this function will retunrn a number which some of 
 * dataset numbers divided by their number
 *
 * @param array[]  the data set
 * @param size 	   size of data set
 *
 * @return the mean of dataset
 */
unsigned char find_mean(unsigned char array[] , unsigned int size );

/**
 * @brief function to return a median of data set
 *
 * this function will semply return the middle number of data set after sorting it
 *
 * @param array[]  the data set
 * @param size 	   size of data set
 * 
 *
 * @return return is unsigned char , it is of middle index of dataset after sorting it
 */
unsigned char find_median(unsigned char array[] , unsigned int size );

/**
 * @brief function to print the statistics of an array
 *
 * it will print statistics of an array in a good way including
 *  minimum, maximum, mean, and median.
 *
 * @param array[]  the data set
 * @param size 	   size of data set
 *
 * @return void
 */
void print_statistics(unsigned char array[] , unsigned int size);

/**
 * @brief function to print sorted array
 *
 * this function will print the array after applying sorting function on it
 * 
 * @param  array[] the sorted array to be copied
 * @param  size    the size of the array
 * 
 * @return void
 */
void print_array(unsigned char array[] , unsigned int size );



#endif /* __STATS_H__ */
