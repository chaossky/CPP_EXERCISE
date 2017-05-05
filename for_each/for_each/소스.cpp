#include <vector>
#include <algorithm>
#include <iostream>

//구조체 Sum
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
	
	// 각 숫자마다 Sum::operator()를 호출
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
	//C++11부터 지원
	std::cout << "[";
	std::for_each(std::begin(v), std::end(v), [&](const int &i) { std::cout << i<<" "; });
	
	std::cout << "]"<<std::endl;
	//컴파일러의 추론을 통해 파라미터의 자료형을 생략한 코드
	//C++14부터 람다의 인자에 auto 가능
	std::for_each(v.begin(), v.end(), [](auto n) { std::cout<<"<" << n<<">"; });
	
	std::cout << std::endl;
	// "Range-based for loop" 
	for (auto n : v) std::cout << n<<",";

	std::cout<< std::endl;

}