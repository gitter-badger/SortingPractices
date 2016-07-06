#include <cstdio>
#include <vector>
#include <algorithm>
#include "../inc/algorithms.h"
using namespace std;

bool compare(int A, int B)
{
	return A/10 < B/10; // correct order
}

vector<int> mySort(vector<int> target, bool (*cmp)(int, int))
{
	vector<int> sorted(target);
	RadixSort(sorted);
	return sorted;
}

int main()
{
	int input_01[6] = {50, 52, 25, 27, 21, 40};
	vector<int> before01(input_01, input_01+6);
	vector<int> after01 = mySort(before01, compare);
	
	int input_02[6] = {10, 20, 30, 40, 50, 60};
	vector<int> before02(input_02, input_02+6);
	vector<int> after02 = mySort(before02, compare);
	
	int input_03[6] = {60, 50, 40, 30, 20, 10};
	vector<int> before03(input_03, input_03+6);
	vector<int> after03 = mySort(before03, compare);
	
	printResult(before01, after01, compare);
	printResult(before02, after02, compare);
	printResult(before03, after03, compare);
	return 0;
}