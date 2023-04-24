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
    size_t i, j, len = size;
    int tmp;
    int flag;


    if (size<2 || array==NULL)
    {
        return;
    }
    for (i=0; i<len-1; i++)
    {
        flag=0;
        for (j=0; j<len-1-i; j++)
        {
            if (array[j]>array[j+1])
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
