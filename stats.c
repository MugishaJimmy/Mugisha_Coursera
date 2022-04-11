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
 * @file stats.c 
 * @brief This c file contains the definitions of functions declared in the stats.h header file
 *        and the implementation of the main function
 *
 *
 * @author Jimmy Mugisha
 * @date 10th April 2022
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

  // Sorting the given array
  sort_array(test, SIZE);

  //printing the statistics
  print_statistics(test, SIZE);

  // Printing the sorted array
  printf("\nSorted array: \n");
  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char array[], unsigned int array_length)
{
  printf("The median is: %f \n", find_median(array, array_length));
  printf("The mean is: %d \n", find_mean(array, array_length));
  printf("The maximum is: %d \n", find_maximum(array, array_length));
  printf("The minimum is: %d \n", find_minimum(array, array_length));
}

void print_array(unsigned char array[], unsigned int array_length)
{
  int i; 
  for (i=0; i < array_length; i++) 
  printf("%d ", array[i]); 
  printf("\n"); 
}

float find_median(unsigned char array[], unsigned int array_length)
{
  float median = 0.0;
  if (array_length % 2 == 0)
  {
    // Type casting the unsigned char to float
    median = (float)(array[array_length/2 - 1] + array[array_length/2])/2.0;
  }
  else
  {
    median = array[array_length/2 + 1];
  }

  return median;
  
}

float find_mean(unsigned char array[], unsigned int array_length)
{
  int sum = 0;
  for(int i=0; i<array_length; i++)
  {
    sum += array[i];
  }

  return sum/array_length;
}

unsigned char find_maximum(unsigned char array[], unsigned int array_length)
{
  unsigned char max_value = array[0];
  for(int i=0; i<array_length; i++)
  {
    if (array[i] > max_value)
    {
      max_value = array[i];
    }
    
  }
  return max_value;

}

unsigned char find_minimum(unsigned char array[], unsigned int array_length)
{
  unsigned char min_value = array[0];
  for(int i=0; i<array_length; i++)
  {
    if (array[i] < min_value)
    {
      min_value = array[i];
    }
    
  }
  return min_value;

}

void sort_array(unsigned char array[], unsigned int array_length)
{
  // using the bubble sort algorithm
  int i, j; 
  for (i = 0; i < array_length-1; i++)       
  for (j = 0; j < array_length-i-1; j++) if (array[j] < array[j+1]) 
  swap(&array[j], &array[j+1]);
}

// A helper function to swap elements 
void swap(unsigned char *a, unsigned char *b) 
{ 
  unsigned char temp = *a; 
  *a = *b; 
  *b = temp; 
}  

