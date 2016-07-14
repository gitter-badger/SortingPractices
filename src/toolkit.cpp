#include "../inc/toolkit.h"

void SWAP(int &A, int &B)
{
	int tmp = A;
	A = B;
	B = tmp;
	return;
}

string toString(vector<int> target, string split)
{
	stringstream itoa;
	
	for_each(target.begin(), target.end(), [&](auto &element){
		itoa << element << split;
	});
	
	return itoa.str();
}

void printResult(vector<int> before, vector<int> after, bool (*cmp)(int, int))
{
	printf("\n");
	if(is_sorted(after.begin(), after.end(), cmp)){
		printf("\033[0;32m - SUCCESS\033[0m\n");
	}
	else{
		printf("\033[0;31m - FAILED\033[0m\n");
	}
	printf("before sorting: %s\n", toString(before, " ").c_str());
	printf("after  sorting: %s\n", toString(after , " ").c_str());
	printf("\n");
	return;
}