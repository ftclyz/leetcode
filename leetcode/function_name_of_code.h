#include"pch.h"


//�������д������leetcode������ͨ�������ﲻ��д���Դ���
//�������󣬿�������leetcode.cpp�ļ��б�д����������ע��߽�Ŷ��

//1.λ����
/*
λ����������ã�
&   ������������λ��������Ϊ1���������0101 & 0100 = 0100   ����˵����������ȥ��������λĳЩλ��1������
|   ����������λ��������һ��Ϊ1���������0101 | 0100 = 0101 ����˵������������Ӷ�����λĳЩλ��1������
^   ����������λ��������ͬ���������0101 ^ 0100 = 0001      ���������������Ҫ�����ʣ�A^A=0 , A^0=A
    A << 1  ����һλ�൱�ڳ���2   A >> 1 ����һλ�൱�ڳ���2
*/


//ͳ�ƶ�������1�ĸ���  ��֪�ػ�
int count1(int num);

//ͳ�ƶ�������0�ĸ���  ��֪�ػ�
int count0(int num);

//�ж����ֵ���ż��     ��֪�ػ�
//����Ϊtrue��ż��Ϊfalse
bool judgeOddOrEven(int num);

//�õ�һ�������෴��   ��֪�ػ�
int oppositeNum(int num);  

//�ж��Ƿ���2�Ĵη�   ��֪�ػ�
//�Ƿ���true������false
bool judgeThePowerOfTwo(int num);


//������ֻ��һ���ظ�����   leetcode 136
//��ʹ�üӼ��˳����ӷ�     ��ָoffer 65
//��ĳ������ַ���       leetcode 1542
//...



//2.���������㷨��˼��(������partition����·�鲢����)
/*
ʵ���ϣ����ڹ鲢����Ϳ���������Ӧ��Ҳ��Ҫ���շǵݹ��������ʹ�ù鲢���߿�������ķ�����
partition ���Զ�λ������ĳ����������λ�ã�ǰn������С������ı�����
merge  ���Ժϲ������������飬ÿһ��merge���Ƕ�����ԵĽ���
��(���ȼ�����) ���Եõ�����ǰn��С/��Ķѣ���partitionһ��������������е�k��/С��Ԫ��
STL�е����ȼ����н��ڶ���һ����չ�ֳ���(�����Ҫ���Լ�д�ѣ���֪�ػᣬ���Ч��)
��Щ�п��������������������ｫ������չ��
*/

//�ݹ��������
//�ҵ�pivot��λ��
int partition(vector<int> &nums, int lo, int hi);
//�ݹ�����
void sortArray(vector<int>& nums, int lo, int hi);
//���ؽ��
vector<int> sortArray(vector<int>& nums);


//�ݹ�鲢����
vector<int> sortArray(vector<int>& nums);
void mergeSort(vector<int>& nums, int lo, int hi);
void merge(vector<int>& nums, int lo, int mid, int hi);

//������
vector<int> sortArray(vector<int>& nums);
void down(vector<int>& nums, int rank, int length);
void heapify(vector<int>& nums);


//��������  leetcode 912
//Ѱ�����������������λ��  leetcode 4    ���������ǲ������Ž�
//����֮��  ���������ǲ������Ž�
//�����е������ ������51   ���������������Ž�
//�����еĵ�k���Ԫ�� leetcode 215