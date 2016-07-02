#include <vector>
#include "toolkit.h"
using namespace std;

#define SIZE static_cast<int>(array.size())

void BubbleSort(vector<int> &array, bool (*COMPARE)(int, int));