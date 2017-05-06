#include<iostream>
template <typename T1,typename T2>
T1 max(T1 a, T2 b) {
	return a > b ? a : b;
}
int main() {
	std::cout << max(3, 7) << std::endl;
	std::cout << max(3.0, 2.7) << std::endl;
	std::cout << max(3.0, 7) << std::endl;
	std::cout << max(1,0.99) << std::endl;


}