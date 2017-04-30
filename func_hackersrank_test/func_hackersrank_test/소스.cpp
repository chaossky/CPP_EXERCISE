#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
	int max_num;
	max_num = (a > b) ? a : b;
	max_num = (max_num > c) ? max_num : c;
	max_num = (max_num > d) ? max_num : d;
	return max_num;
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);

	return 0;
}

