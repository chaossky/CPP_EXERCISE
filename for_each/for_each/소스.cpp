#include <vector>
#include <algorithm>
#include <iostream>

//����ü Sum
struct Sum {
	Sum() { sum = 0; }
	void operator()(int n) { sum += n; }

	int sum;
};

int main()
{
	std::vector<int> nums{ 3, 4, 2, 9, 15, 267 };

	std::cout << "before:";
	for (auto n : nums) {
		std::cout << ' ' << n;
	}
	std::cout << '\n';

	std::for_each(nums.begin(), nums.end(), [](int &n) { n++; });
	
	// �� ���ڸ��� Sum::operator()�� ȣ��
	Sum s = std::for_each(nums.begin(), nums.end(), Sum());
	std::cout << '\n';

	std::cout << "after: ";
	for (auto n : nums) {
		std::cout << ' ' << n;
	}
	std::cout << '\n';
	std::cout << "sum: " << s.sum << '\n';

	std::for_each(std::begin(nums), std::end(nums), [&](const int &i) {std::cout << "[" << i << "]"; });
	std::cout << '\n';
	std::cout << "===========" << std::endl;
	
	//create vector v
	std::vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//print the element 
	//C++11���� ����
	std::cout << "[";
	std::for_each(std::begin(v), std::end(v), [&](const int &i) { std::cout << i<<" "; });
	
	std::cout << "]"<<std::endl;
	//�����Ϸ��� �߷��� ���� �Ķ������ �ڷ����� ������ �ڵ�
	//C++14���� ������ ���ڿ� auto ����
	std::for_each(v.begin(), v.end(), [](auto n) { std::cout<<"<" << n<<">"; });
	
	std::cout << std::endl;
	// "Range-based for loop" 
	for (auto n : v) std::cout << n<<",";

	std::cout<< std::endl;

}