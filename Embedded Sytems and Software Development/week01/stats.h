/**
 * @file stats.h
 * @brief Header file for statistical analysis functions
 *
 * This header file contains function declarations for performing statistical analysis
 * on arrays of unsigned characters.
 *
 * The functions included in this file are:
 * - print_array: Prints the elements of an array
 * - find_median: Finds the median value of an array
 * - find_mean: Finds the mean value of an array
 * - find_maximum: Finds the maximum value in an array
 * - find_minimum: Finds the minimum value in an array
 * - sort_array: Sorts an array in ascending order
 * - swap: Swaps two elements in an array
 *
 * @author Khaled Mohamed Ali
 * @date 03/28/2024
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
* @brief Prints the elements of an array
* This function prints the elements of an array of unsigned characters.
* @param arr The array to be printed
* @param len The length of the array
*/
void print_array(unsigned char arr[], int len);

/**
* @brief Finds the median value of an array
* This function calculates the median value of an array of unsigned characters.
* @param arr The array for which median is to be found
* @param len The length of the array
* @return The median value of the array
*/
double find_median(unsigned char arr[], int len);

/**
* @brief Finds the mean value of an array
* This function calculates the mean value of an array of unsigned characters.
* @param arr The array for which mean is to be found
* @param len The length of the array
* @return The mean value of the array
*/
double find_mean(unsigned char arr[], int len);

/**
* @brief Finds the maximum value in an array
* This function finds the maximum value in an array of unsigned characters.
* @param arr The array in which maximum value is to be found
* @param len The length of the array
* @return The maximum value in the array
*/
int find_maximum(unsigned char arr[], int len);

/**
* @brief Finds the minimum value in an array
* This function finds the minimum value in an array of unsigned characters.
* @param arr The array in which minimum value is to be found
* @param len The length of the array
* @return The minimum value in the array
*/
int find_minimum(unsigned char arr[], int len);

/**
* @brief Sorts an array in ascending order
* This function sorts an array of unsigned characters in ascending order using a sorting algorithm.
* @param arr The array to be sorted
* @param n The length of the array
*/
void sort_array(unsigned char arr[], int n);

/**
* @brief Swaps two elements
* This function swaps two elements in an array of unsigned characters.
* @param a Pointer to the first element
* @param b Pointer to the second element
*/
void swap(unsigned char *a, unsigned char *b);



#endif /* __STATS_H__ */
