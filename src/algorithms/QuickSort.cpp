#include "../../inc/algorithms.h"

void QuickSort1_step(int left_bound, int right_bound, vector<int> &data, bool (*COMPARE)(int, int)) // [l,r)
{
	if(right_bound - left_bound < 1) return;
	
	int pivot = left_bound, left = left_bound + 1, right = right_bound - 1; 
	
	// partA
	while(left <= right){
		while(!COMPARE(data[pivot], data[left])  && left <= right) ++left;
		while(!COMPARE(data[right], data[pivot]) && right >= left) --right;
		if(left < right) SWAP(data[left], data[right]);
	}
	
	SWAP(data[pivot], data[right]);
	
	// partB
	QuickSort1_step(left_bound, right, data, COMPARE);
	QuickSort1_step(right+1, right_bound, data, COMPARE);	
}

void QuickSort1(vector<int> &data, bool (*COMPARE)(int, int))
{
	QuickSort1_step(0, SIZE, data, COMPARE);
}