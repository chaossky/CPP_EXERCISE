#include<iostream>
#include <bitset>
using namespace std;

//10진수를 2진수로 변환 하는 함수
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
