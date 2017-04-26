// declaring functions prototypes
#include <iostream>
using namespace std;

void odd(int x);
void even(int x);

int main()
{
	int i;
	do {
		cout << "숫자를 입력하세요 (0을 입력하시면 종료합니다.): ";
		cin >> i;
		odd(i);
	} while (i != 0);
	return 0;
}

void odd(int x)
{
	if ((x % 2) != 0) cout << "홀수 입니다.\n";
	else even(x);
}

void even(int x)
{
	if ((x % 2) == 0) cout << "짝수입니다.\n";
	else odd(x);
}