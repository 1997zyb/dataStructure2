#include <iostream>
using namespace std;


/*

int nums1Size,int nums2Size,


*/
void merge(int* nums1, int m, int* nums2, int n) {
	int end1 = m - 1, end2 = n - 1;
	int end = m + n - 1;
	while (end1 >= 0 && end2 >= 0)
	{
		if (nums1[end1] > nums2[end2]) {
			nums1[end--] = nums1[end1--]; // Ë­´óÈÓË­
		}
		else {
			nums1[end--] = nums2[end2--]; // Ë­´óÈÓË­
		}
	}
	while (end2 >= 0) {
		nums1[end--] = nums2[end2--];
	}
}
void printArr(int* arr, int len) {
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}
int main() {
	int arr1[] = { 1,3,5,7,9,0,0,0,0 };
	int arr2[] = { 2,4,6,8 };
	merge(arr1, 5, arr2, 4);
	int len = sizeof(arr1) / sizeof(arr1[0]);
	printArr(arr1, len);
}