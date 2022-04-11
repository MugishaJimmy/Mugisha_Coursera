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
 * @file stats.h
 * @brief This header file contains function declarations
 *
 * @author Jimmu Mugisha
 * @date 10th April 2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median
 *
 * This function takes a one dimensional array and the length of the array and prints the
 * statistics of this array. It returns none
 *
 * @param array N-length one dimensional array of data type unsigned char
 * @param array_length lenth of the array of data type unsigned int
 *
 * @return None
 */
void print_statistics(unsigned char array[], unsigned int array_length);


void print_array(unsigned char array[], unsigned int array_length);
/**
 * @brief Prints the array to the screen
 *
 * This function prints the sorted elements of an N-length one dimensional array. It takes the array
 * which is of unsigned char type and the length of this array.
 *
 * @param array N-length one dimensional array of data type unsigned char
 * @param array_length lenth of the array of data type unsigned int
 *
 * @return None
 */


float find_median(unsigned char array[], unsigned int array_length);
/**
 * @brief Compute the median of the array elements
 *
 * This function finds the median of the elements of an N-length one dimensional array. It takes the array
 * which is of unsigned char type and the length of this array.
 *
 * @param array N-length one dimensional array of data type unsigned char
 * @param array_length lenth of the array of data type unsigned int
 *
 * @return float
 */


float find_mean(unsigned char array[], unsigned int array_length);
/**
 * @brief Compute the mean of the array elements
 *
 * This function finds the mean of the elements of an N-length one dimensional array. It takes the array
 * which is of unsigned char type and the length of this array.
 *
 * @param array N-length one dimensional array of data type unsigned char
 * @param array_length lenth of the array of data type unsigned int
 *
 * @return float
 */


unsigned char find_maximum(unsigned char array[], unsigned int array_length);
/**
 * @brief Determines the maximum of the array elements
 *
 * This function finds the maximum of the elements of an N-length one dimensional array. It takes the array
 * which is of unsigned char type and the length of this array.
 *
 * @param array N-length one dimensional array of data type unsigned char
 * @param array_length lenth of the array of data type unsigned int
 *
 * @return unsigned char
 */


unsigned char find_minimum(unsigned char array[], unsigned int array_length);
/**
 * @brief Determines the minimum of the array elements
 *
 * This function finds the minimum of the elements of an N-length one dimensional array. It takes the array
 * which is of unsigned char type and the length of this array.
 *
 * @param array N-length one dimensional array of data type unsigned char
 * @param array_length lenth of the array of data type unsigned int
 *
 * @return unsigned char
 */


void sort_array(unsigned char array[], unsigned int array_length);
/**
 * @brief Sort the array elements from the largets to the smallest
 *
 * This function sorts an N-length one dimensional array from largest to smallest. It takes in the array of 
 * unsigned char type and the length of that array
 *
 * @param array N-length one dimensional array of data type unsigned char
 * @param array_length lenth of the array of data type unsigned int
 *
 * @return None
 */


void swap(unsigned char *a, unsigned char *b);

/**
 * @brief This swaps two elements of an array
 *
 * It is a helper function for the sort array function. It takes reference parameters both of unsigned char type
 *
 * @param a unsigned charactor, the firts element
 * @param b unsigned charactor, the second element
 *
 * @return None
 */



#endif /* __STATS_H__ */
