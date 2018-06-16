#ifndef SORTER_H
#define SORTER_H

#include <quick.h>

void sorter(int *nums, int size) {
	quick_sort(nums, nums + size);
}

#endif // !SORTER_H