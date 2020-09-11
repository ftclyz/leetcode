#include"pch.h"


//双指针标准模板
//leetcode 167
//两端同时进行，小于目标值左侧移动，否则右侧移动，重点是排序数组。
//双指针还可以解决把数组划分为三部分的题目，比如leetcode 75  颜色分类
vector<int> twoSum(vector<int>& numbers, int target) {

	int left = 0;
	int right = numbers.size() - 1;
	vector<int> ret;

	while (left < right) {
		if (numbers[left] + numbers[right] < target)
			left++;
		else if (numbers[left] + numbers[right] > target)
			right--;
		else {
			ret.push_back(++left);
			ret.push_back(++right);
			break;
		}
	}

	return ret;
}


//前缀和

vector<int> constructArr(vector<int>& a) {

	if (a.empty()) return {};

	vector<int> left(a.size());
	vector<int> right(a.size());

	left[0] = 1;
	for (int i = 1; i < a.size(); i++) {
		left[i] = left[i - 1] * a[i - 1];
	}

	right[a.size() - 1] = 1;
	for (int j = a.size() - 2; j >= 0; j--) {
		right[j] = right[j + 1] * a[j + 1];
	}

	for (int k = 0; k < a.size(); k++) {
		a[k] = left[k] * right[k];
	}

	return a;
}