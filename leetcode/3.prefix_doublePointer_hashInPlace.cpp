#include"pch.h"


//˫ָ���׼ģ��
//leetcode 167
//����ͬʱ���У�С��Ŀ��ֵ����ƶ��������Ҳ��ƶ����ص����������顣
//˫ָ�뻹���Խ�������黮��Ϊ�����ֵ���Ŀ������leetcode 75  ��ɫ����
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


//ǰ׺��

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