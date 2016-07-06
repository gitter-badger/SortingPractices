#include "../../inc/algorithms.h"

int NthHexDigit(int number, int Nth)
{
	return (number >> Nth*4) & 0xF;
}

void RadixSort_step(vector<int> &data, int Nth_digit)
{
	vector<int> sorted_step;
	sorted_step.assign(SIZE, 0);
	
	int count[16] = {0};
	for(int i = 0; i < SIZE; ++i) count[NthHexDigit(data[i], Nth_digit)]++;
	for(int i = 1; i < 16; ++i) count[i] += count[i-1];
	for(int i = SIZE-1; i >= 0; --i) sorted_step[--count[NthHexDigit(data[i], Nth_digit)]] = data[i];
	
	data = sorted_step;
}

void RadixSort(vector<int> &data)
{
	// int: 32bits = 8 * 4bits = 8 hex digits
	for(int Nth_digit = 0; Nth_digit < 8; ++Nth_digit){
		RadixSort_step(data, Nth_digit);
	}
}