#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

void SWAP(int &A, int &B);
string toString(vector<int> target, string split);
void printResult(vector<int> before, vector<int> after, bool (*cmp)(int, int));