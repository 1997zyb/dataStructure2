#include <iostream>
using namespace std;

//int removeDup(int* nums, int numsSize) {
//	if (numsSize == 0) {
//		return 0;
//	}
//	int i = 0, j = 1;
//	int dst = 0;
//	while (j < numsSize) {
//		if (nums[i] == nums[j]) {
//			++j;
//		}
//		else {
//			nums[dst] = nums[i];
//			++dst;
//			i = j;
//			++j;
//		}
//	}
//	nums[dst] = nums[i];
//	++dst;
//	return dst;
//}
//void printArr(int* arr, int len) {
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,2,3,4 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int dst = removeDup(arr, len);
//	printArr(arr, dst);
//}