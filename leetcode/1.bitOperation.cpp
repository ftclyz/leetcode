#include"pch.h"


/*
λ����������ã�
&   ������������λ��������Ϊ1���������0101 & 0100 = 0100   ����˵����������ȥ��������λĳЩλ��1������
|   ����������λ��������һ��Ϊ1���������0101 | 0100 = 0101 ����˵������������Ӷ�����λĳЩλ��1������
^   ����������λ��������ͬ���������0101 ^ 0100 = 0001      ���������������Ҫ�����ʣ�A^A=0 , A^0=A
	A << 1  ����һλ�൱�ڳ���2   A >> 1 ����һλ�൱�ڳ���2
*/

//ͳ�ƶ�������1�ĸ���  ��֪�ػ�
int count1(int num) {
	int count = 0;
	while (num) {
		num &= (num - 1);
		count++;
	}
	return count;
}

//ͳ�ƶ�������0�ĸ���  ��֪�ػ�
int count0(int num) {
	int count = 0;
	while (num + 1) {
		num |= (num + 1);
		count++;
	}
	return count;
}

//�ж����ֵ���ż��     ��֪�ػ�
bool judgeOddOrEven(int num) {
	return abs(num) & 1;
}

//�õ�һ�������෴��   ��֪�ػ�
int oppositeNum(int num) {
	return ~num + 1;
}

//�ж��Ƿ���2�Ĵη�   ��֪�ػ�
bool judgeThePowerOfTwo(int num) {
	return num & (num - 1) == 0 ? true : false;
}

