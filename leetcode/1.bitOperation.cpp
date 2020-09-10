#include"pch.h"


/*
位运算符的作用：
&   仅保留二进制位上两数都为1的情况，如0101 & 0100 = 0100   所以说，与运算有去除二进制位某些位上1的作用
|   保留二进制位上两数有一边为1的情况，如0101 | 0100 = 0101 所以说，或运算有添加二进制位某些位上1的作用
^   保留二进制位上两数不同的情况，如0101 ^ 0100 = 0001      异或运算有两个重要的性质：A^A=0 , A^0=A
	A << 1  左移一位相当于乘以2   A >> 1 右移一位相当于除以2
*/

//统计二进制中1的个数  必知必会
int count1(int num) {
	int count = 0;
	while (num) {
		num &= (num - 1);
		count++;
	}
	return count;
}

//统计二进制中0的个数  必知必会
int count0(int num) {
	int count = 0;
	while (num + 1) {
		num |= (num + 1);
		count++;
	}
	return count;
}

//判断数字的奇偶性     必知必会
bool judgeOddOrEven(int num) {
	return abs(num) & 1;
}

//得到一个数的相反数   必知必会
int oppositeNum(int num) {
	return ~num + 1;
}

//判断是否是2的次方   必知必会
bool judgeThePowerOfTwo(int num) {
	return num & (num - 1) == 0 ? true : false;
}

