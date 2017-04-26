// function template
#include <iostream>
using namespace std;

//ÅÛÇÃ¸´
template <class T>
T sum(T a, T b)
{
	T result;
	result = a + b;
	return result;
}

int main() {
	int i = 5, j = 6, k,l;
	double f = 2.0, g = 0.5, h,cc;
	k = sum<int>(i, j);
	h = sum<double>(f, g);
	l = sum<int>(34, 56);
	cc = sum<double>(5.7, 6.990);
	cout << k << '\n';
	cout << h << '\n';
	cout << l << '\n';
	cout << cc << '\n';
	return 0;
}