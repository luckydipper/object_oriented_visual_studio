#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
void special_sort(std::vector<int>& v);
void print(const std::vector<int>& a);
void rotate(std::vector<int>& v);
bool balanced(const std::vector<int>& v);
bool has_duplicates(const std::vector<int>& v);
bool is_ascending(std::vector<int>& v);

int main() {
	std::vector<int> example = { 3, 6, 7, 12, 27};
	bool a = is_ascending(example);
	std::cout << a;
	//print(example);
}


bool is_ascending(std::vector<int>& v) {
	int size = v.size();

	for (size_t i = 0; i < size - 1; i++)
	{
		if (v[i] > v[i + 1])
			return false;
		
	}
	return true;
}

bool has_duplicates(const std::vector<int>& v) 
{
	int size = v.size();

	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = i+1; k < size; k++)
		{
			if (v[i] == v[k])
				return true;
		}
	}
	return false;
}


bool balanced(const std::vector<int>& v) {
	if (v.empty())
		return true;

	int even_count = 0, odd_count = 0;

	for (int elem : v)
	{
		if (elem % 2) odd_count++;
		else even_count++;
	};

	if (even_count == odd_count)
		return true;
	else 
		return false;
	
}


void rotate(std::vector<int>& v) {
	int last_value = v[v.size() - 1];
	v.pop_back();
	v.insert(v.begin(), last_value);
}


void special_sort(std::vector<int>& v) {
	std::vector<int> even;
	std::vector<int> odd;
	
	for (int elem : v){
		if (elem % 2)
			odd.push_back(elem);
		else
			even.push_back(elem);
	};
	std::sort(even.begin(), even.end());
	std::sort(odd.begin(), odd.end());
	even.insert(even.end(), odd.begin(), odd.end());
	v = even;
}

void print(const std::vector<int>& a) {
	for (int elem : a)
		std::cout << elem;
}