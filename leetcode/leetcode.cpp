#include"pch.h"
#include"function_name_of_code.h"


int main() {
	unordered_map<int, int> map;

	map[1] = 1;

	map[2]--;

	if (map.find(3) == map.end()) cout << "3不存在";
}