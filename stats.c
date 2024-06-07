/**
 * @file stats.c
 * @brief Implementation file for statistical analysis functions
 *
 * This implementation file contains functions for performing statistical analysis
 * on arrays of unsigned characters. The functions included in this file are used
 * to calculate the median, mean, maximum, and minimum values of an array, as well
 * as sorting the array in ascending order and printing its elements.
 *
 * @author Khaled Mohamed Ali
 * @date 03/28/2024
 */

#include <stdio.h>
#include "stats.h"
#include <stdlib.h>

/* Size of the Data Set */
#define SIZE 40

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
   
  print_stats(test,SIZE);
}

/* Add other Implementation File Code Here */
void print_array(unsigned char arr[], int len){

    for (int i=0; i<len; i++){
      printf("%d ",arr[i]);
    }
}

void print_stats(unsigned char test[],int len){
   printf("\nThe Original array: ");
    print_array(test,SIZE);

    printf("\nThe mediane is : %d",find_median(test,len));

    printf("\nThe mean is : %d",find_mean(test,len));

    printf("\nThe max is : %d",find_maximum(test,len));

    printf("\nThe min is : %d",find_minimum(test,len));

    sort_array(test,len);

    printf("\nThe Sorted array: ");

    print_array(test,len);
}

int find_median(unsigned char arr[], int len){
    // Sorting the array
    sort_array(arr,len);

    // Checking if array has number of odd elements or even 
    if(len % 2 == 0){
        double middle1 = arr[len/2];
        double middle2 = arr[(len-1)/2];
        return (middle1+middle2)/2;
    }else{
        return (arr[len/2]);
    }
}

int find_mean(unsigned char arr[], int len){
  int sum=0;
  for (int i = 0; i < len; i++){
    sum+=arr[i];
  }

  return sum/len;
}

int find_maximum(unsigned char arr[], int len){
  int max = arr[0];
  for (int i = 1; i < len; i++){
   if(arr[i]>max){
    max = arr[i];
   }
  }
  return max;
}

int find_minimum(unsigned char arr[], int len){
  int min = arr[0];
  for (int i = 1; i < len; i++){
   if(arr[i]<min){
    min = arr[i];
   }
  }
  return min;
}

void sort_array(unsigned char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if current element is greater than next element
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void swap(unsigned char *a, unsigned char *b){
  unsigned char tmp = *a;
  *a = *b;
  *b = tmp;
}