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
 * @brief header file for stats.c 
 *
 * contains the declaration functions.
 *
 * @author Amit Kumar Yadav
 * @date 31-05-2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

// print_statistics prints the mean, median, maximum and minimum

/**
 * The function takes test[] array from the main function and use this statistics funtions.
 *output is the median, minimum, maximum and mean
 */
void print_statistics(unsigned char test[]);




/**
 * The function takes test[] array from the main function .
 *Print the given array as output.
 */
void print_array(unsigned char test[]);




/**
 * The function takes test[] array from the main function.
 *Print sorted array in descending order.
 */

void sort_array(unsigned char test[]);

#endif /* __STATS_H__ */
