#include "sort.h"

/**
 * bitonic_sort - Sort an array of integers in ascending
 *                order using the bitonic sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap. Only works for
 * size = 2^k where k >= 0 (ie. size equal to powers of 2).
 */

void bitonic_sort(int *array, size_t size) {
    int i, j, k;
    for (k = 2; k <= size; k = k * 2) {
        for (j = k / 2; j > 0; j = j / 2) {
            for (i = 0; i < size; i++) {
                int ij = i ^ j;
                if ((ij) > i) {
                    if ((i & k) == 0 && array[i] > array[ij]) {
                        int temp = array[i];
                        array[i] = array[ij];
                        array[ij] = temp;
			print_array(array, size);
                    }
                    if ((i & k) != 0 && array[i] < array[ij]) {
                        int temp = array[i];
                        array[i] = array[ij];
                        array[ij] = temp;
			print_array(array, size);
                    }
                }
            }
        }
    }
}
