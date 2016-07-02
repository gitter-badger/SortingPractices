#include <vector>
#include "toolkit.h"
using namespace std;

#define SIZE static_cast<int>(data.size())

void InsertionSort1(vector<int> &data, bool (*COMPARE)(int, int));
void InsertionSort2(vector<int> &data, bool (*COMPARE)(int, int));
void BubbleSort    (vector<int> &data, bool (*COMPARE)(int, int));