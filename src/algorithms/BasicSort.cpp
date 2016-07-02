#include "../../inc/algorithms.h"

void BubbleSort(vector<int> &array, bool (*COMPARE)(int, int))
{
	for(int i = SIZE-1; i > 0; --i){
		for(int j = 0; j < i; ++j){
			if(COMPARE(array[i], array[j])){
				SWAP(array[i], array[j]);
			}
		}
	}
}