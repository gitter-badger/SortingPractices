#include "../../inc/algorithms.h"

void SelectionSort(vector<int> &data, bool (*COMPARE)(int, int))
{
	for(int i = 0; i < SIZE; ++i){
		int min_index = i, j;
		for(j = i; j < SIZE; ++j){
			if(!COMPARE(data[min_index], data[j])){
				min_index = j;
			}
		}
		SWAP(data[i], data[min_index]);
	}
}

void InsertionSort1(vector<int> &data, bool (*COMPARE)(int, int))
{
	for(int i = 0; i < SIZE; ++i){
		int data_i = data[i], j;
		for(j = i; j > 0; --j){
			if(COMPARE(data[j-1], data_i)) break;
			data[j] = data[j-1];
		}
		data[j] = data_i;
	}
}

void InsertionSort2(vector<int> &data, bool (*COMPARE)(int, int))
{
	for(int i = 0; i < SIZE; ++i){
		for(int j = i; j > 0; --j){
			if(COMPARE(data[j-1], data[j])) break;
			SWAP(data[j-1], data[j]);
		}
	}
}

void BubbleSort(vector<int> &data, bool (*COMPARE)(int, int))
{
	for(int i = SIZE-1; i > 0; --i){
		for(int j = 0; j < i; ++j){
			if(!COMPARE(data[j], data[i])){
				SWAP(data[j], data[i]);
			}
		}
	}
}