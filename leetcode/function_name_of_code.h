#include"pch.h"


//几乎所有代码均在leetcode上运行通过，这里不在写测试代码
//如有困惑，可自行在leetcode.cpp文件中编写测试用例，注意边界哦！

//1.位运算
/*
位运算符的作用：
&   仅保留二进制位上两数都为1的情况，如0101 & 0100 = 0100   所以说，与运算有去除二进制位某些位上1的作用
|   保留二进制位上两数有一边为1的情况，如0101 | 0100 = 0101 所以说，或运算有添加二进制位某些位上1的作用
^   保留二进制位上两数不同的情况，如0101 ^ 0100 = 0001      异或运算有两个重要的性质：A^A=0 , A^0=A
    A << 1  左移一位相当于乘以2   A >> 1 右移一位相当于除以2
*/


//统计二进制中1的个数  必知必会
int count1(int num);

//统计二进制中0的个数  必知必会
int count0(int num);

//判断数字的奇偶性     必知必会
//奇数为true，偶数为false
bool judgeOddOrEven(int num);

//得到一个数的相反数   必知必会
int oppositeNum(int num);  

//判断是否是2的次方   必知必会
//是返回true，否则false
bool judgeThePowerOfTwo(int num);


//数组中只有一个重复数字   leetcode 136
//不使用加减乘除做加法     剑指offer 65
//最长的超赞子字符串       leetcode 1542
//...



//2.各类排序算法的思考(尤其是partition、两路归并、堆)
/*
实际上，对于归并排序和快速排序，你应该也需要掌握非递归和链表中使用归并或者快速排序的方法。
partition 可以定位数组中某个数的排序位置，前n个比它小，后面的比它大
merge  可以合并两个有序数组，每一次merge都是对逆序对的矫正
堆(优先级队列) 可以得到数组前n个小/大的堆，和partition一样可以求解数组中第k大/小的元素
STL中的优先级队列将在队列一节中展现出来(如果不要求自己写堆，必知必会，提高效率)
这些有可能在面试中遇到，这里将不再拓展。
*/

//递归快速排序
//找到pivot的位置
int partition(vector<int> &nums, int lo, int hi);
//递归排序
void sortArray(vector<int>& nums, int lo, int hi);
//返回结果
vector<int> sortArray(vector<int>& nums);


//递归归并排序
vector<int> sortArray(vector<int>& nums);
void mergeSort(vector<int>& nums, int lo, int hi);
void merge(vector<int>& nums, int lo, int mid, int hi);

//堆排序
vector<int> sortArray(vector<int>& nums);
void down(vector<int>& nums, int rank, int length);
void heapify(vector<int>& nums);


//排序数组  leetcode 912
//寻找两个正序数组的中位数  leetcode 4    可以做但是不是最优解
//两数之和  可以做但是不是最优解
//数组中的逆序对 面试题51   可以做但不是最优解
//数组中的第k大的元素 leetcode 215


//3.数组或者链表中从后往前思考问题到双指针、前缀和、原地哈希


//颜色分类 leetcode 75   双指针
//两数之和 leetcode 1   哈希(unordered_map)
//两数之和2 leetcode 167 双指针
//三数之和 leetcode  排序+双指针（转换为两数之和）
//缺失的第一个正数 leetcode 41  原地哈希


//双指针标准模板
//leetcode 167
//两端同时进行，小于目标值左侧移动，否则右侧移动，重点是排序数组。
//双指针还可以解决把数组划分为三部分的题目，比如leetcode 75  颜色分类
vector<int> twoSum(vector<int>& numbers, int target);

//原地哈希
/*
 缺失的第一个正数 leetcode 41
 arr[i]  1 2 3 5 6   ---->   -1 -2 -3 5 6    
 rank   0 1 2 3 4   ---->    0  1  2  3 4
 需要注意的是，原值可能为负数，为了统一并确保其也为负数，可遍历一遍将<=0数置为arr.size()+1, -abs(arr[arr[i]])
 同时要注意数组下标不能越界，if(arr[i]<arr.size()),因为缺失的第一个正整数必然在1~arr.size()中产生，有可能是最后一个！
*/


//前缀和
//剑指offer 66 构建乘积数组

vector<int> constructArr(vector<int>& a);



//4.滑动窗口
/*
滑动窗口基本模板     一般这么写，但是不一定这没写
    int left = 0;
	int right = 0;
	while (right < sLen) {
		if ( 在右移的过程中检测是否满足条件 ) {
		// 对状态做修改，好让程序在后面检测到满足条件
		}
		// 右边界右移 1 格
		right++;
		while ( 满足条件 ) {
			// 走到这里是满足条件的，左边界逐渐逐渐左移，可以取最小值
			if ( 在左移的过程中检测是否不满足条件 ) {
				// 对状态做修改，好让程序在后面检测到不满足条件
			}
			// 左边界左移 1 格
			left++;
		}
		// 走到这里是不满足条件的，右边界逐渐右移，可以取最大值
		}
*/

//leetcode 239 滑动窗口的最大值
//leetcode 209 长度最小的数组
//leetcode 3   无重复子串

//左移的条件一定要谨慎，这里就不做题了，不具有普遍性。
//总是写错怎么办？吾亦无他,唯手熟尔
