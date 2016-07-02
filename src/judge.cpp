#include <cstdio>
#include <vector>
#include <algorithm>
#include "../inc/algorithms.h"
using namespace std;

bool compare(int A, int B)
{
	return A/10 < B/10;
}

vector<int> mySort(vector<int> target, bool (*cmp)(int, int))
{
	vector<int> sorted(target);
	BubbleSort(sorted, cmp);
	return sorted;
}

int main()
{
	int input_01[5] = {50, 40, 20, 30, 10};
	vector<int> before(input_01, input_01+5);
	
	vector<int> after = mySort(before, compare);
	
	printResult(before, after, compare);
	return 0;
}