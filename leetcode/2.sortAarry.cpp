#include"pch.h"
#include"function_name_of_code.h"


//2.各类排序算法的思考(尤其是partition、两路归并、堆)
//实际上，对于归并排序和快速排序，你应该也需要掌握非递归和链表中使用归并或者快速排序的方法。
//这些有可能在面试中遇到，这里将不再拓展。

//递归快速排序
int partition(vector<int> &nums, int lo, int hi) {
	int end = lo;
	int randomNum = lo + rand() % (hi - lo);
	swap(nums[lo], nums[randomNum]);
	int pivot = nums[lo];

	for (int k = lo + 1; k <= hi; k++) {
		if (pivot > nums[k]) {
			swap(nums[++end], nums[k]);
		}
	}
	swap(nums[lo], nums[end]);

	return end;
}
void sortArray(vector<int>& nums, int lo, int hi) {
	if (lo < hi) {
		int mid = partition(nums, lo, hi);
		sortArray(nums, lo, mid);
		sortArray(nums, mid + 1, hi);
	}
}
vector<int> sortArray(vector<int>& nums) {

	sortArray(nums, 0, nums.size() - 1);
	return nums;

}

//


//递归归并排序
/*
vector<int> sortArray(vector<int>& nums) {
	if (nums.size() <= 1) return nums;

	mergeSort(nums, 0, nums.size() - 1);

	return nums;
}

void mergeSort(vector<int>& nums, int lo, int hi) {
	if (lo < hi) {
		int mid = lo + (hi - lo) / 2;
		mergeSort(nums, lo, mid);
		mergeSort(nums, mid + 1, hi);
		merge(nums, lo, mid, hi);
	}
}

void merge(vector<int>& nums, int lo, int mid, int hi) {

	int leftLen = mid - lo + 1;
	int rightLen = hi - mid;

	vector<int> left(leftLen);
	vector<int> right(rightLen);

	for (int i = 0; i < leftLen; i++) {
		left[i] = nums[lo + i];
	}

	for (int j = 0; j < rightLen; j++) {
		right[j] = nums[mid + j + 1];
	}

	int l = 0;
	int r = 0;
	int t = lo;

	while (l < leftLen && r < rightLen) {
		if (left[l] <= right[r]) {
			nums[t] = left[l];
			t++;
			l++;
		}
		else {
			nums[t] = right[r];
			t++;
			r++;
		}
	}

	for (; l < leftLen; l++) {
		nums[t++] = left[l];
	}

	for (; r < rightLen; r++) {
		nums[t++] = right[r];
	}
}
*/

//堆排序
/*
vector<int> sortArray(vector<int>& nums) {
	heapify(nums);
	int len = nums.size();
	for (int i = len - 1; i >= 1; i--) {
		swap(nums[0], nums[i]);
		down(nums, 0, i);
	}

	return nums;
}

void down(vector<int>& nums, int rank, int length) {

	int left = 2 * rank + 1;

	while (left < length) {
		if (left + 1 < length && nums[left + 1] > nums[left]) {
			left = left + 1;
		}
		if (nums[rank] >= nums[left]) break;
		else {
			swap(nums[rank], nums[left]);
			rank = left;
			left = left * 2 + 1;
		}
	}

}
void heapify(vector<int>& nums) {
	int len = nums.size();
	for (int i = len / 2; i >= 0; i--) {
		down(nums, i, len);
	}
}
*/
