#include "sort.h"

/**
 * bubble_sort - sort an array of integers using
 * bubble sort method
 * @array - an array to be sorted
 * @size - size of the array
 *
 * Return None
 */

void bubble_sort(int *array, size_t size)
{
    if (size<2 || array==NULL)
    {
        return;
    }
    for (size_t i=0; i<size-1; i++)
    {
        int flag=0;
        for (size_t j=0; j<size-1-i; j++)
        {
            int tmp;
            if array[j]>array[j+1]
            tmp=array[j];
            array[j]=array[j+1];
            array[j+1]=tmp;
            print_array(array, size);
            flag=1;
        }
        if (flag==0)
        {
            break;
        }
    }
}
