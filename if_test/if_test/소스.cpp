#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	// Complete the code.
	int a, b;
	cin >> a >> b;
	cout << a << "~~~" << b<<endl;
//	string str;
	//str = "one";
	//cout << str;

for (int temp = a; temp<=b+1; temp++)
{
//	cout << temp<<endl;
	
string str;
if (temp == 1) str = "one\n";
else if (temp == 2) str = "two\n";
else if (temp == 3) str = "three\n";
else if (temp == 4) str = "four\n";
else if (temp == 5) str = "five\n";
else if (temp == 6) str = "six\n";
else if (temp == 7) str = "seven\n";
else if (temp == 8) str = "eight\n";
else if (temp == 9) str = "nine\n";
else if (temp > 9) {
	if (temp %2 == 0) { str = "even\n"; }
	else if (temp % 2 == 1) { str = "odd\n"; }
}

//cout << temp<<"\t"<<temp%2;

cout<<str;

}

	
	return 0;
}
