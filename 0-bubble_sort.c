#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swaps.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int flag = 0;
	int tmp;

	if (array == NULL || size < 2)
		return;

	while (flag == 0)
	{
		flag = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				flag = 0;
			}
		}
		len--;
	}
}
