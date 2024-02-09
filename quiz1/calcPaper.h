#ifndef __CALCPAPER_H__
#define __CALCPAPER_H__

/* calcPaper
 *
 * This function reduce the original piece of paper into a series
 * of perfect squares of paper, making the largest possible squares,
 * and using all of the paper provided. 
 *
 * @N: the width of the original piece of paper
 * @M: the height of the original piece of paper
 * @numSquares: returns the count of squares
 *
 * Returns: a pointer to a dynamically allocated array: [numSquares][2]
 *
 * NOTE: free the returned pointer when done with it
 */
int *calcPaper(unsigned int N, unsigned int M, int *numSquares);

#endif // __CALCPAPER_H__

