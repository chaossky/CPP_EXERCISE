#include<iostream>
#include <bitset>
using namespace std;

//10������ 2������ ��ȯ �ϴ� �Լ�
int TenToBinary(int num) {
	int result = 0;
	for (int i = 1; num > 0; i *= 10) {
		int binary = num % 2;
		result += binary*i;
		num /= 2;
	}
	return result;
}
int main() {
	
	for (int j = 0; j < 256; ++j) {
		//cout<<j<<" => "<<TenToBinary(j)<<endl;
		cout << j << " => " << bitset<10>(j) << endl;
		
	}

		
	return 0;
}
