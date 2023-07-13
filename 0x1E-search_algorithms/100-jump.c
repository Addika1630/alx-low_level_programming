#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{

	/* declarations */
	int jump, i, j;

	/* check for null array */
	if (!array)
		return (-1);

	jump = sqrt(size);

	for (i = 0; i < (int)size && array[i] < value; i += jump)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	j = i - jump;
	printf("Value found between indexes [%d] and [%d]\n", j, i);

	for (; j < i; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	/* not in the array */
	return (-1);
}
