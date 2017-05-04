#include<iostream>
#include<vector>
using namespace std;

int main() {
	//making a vector whose name is first_vector 
	vector<int> first_vector;

	//assign its size and element using 'push_back()'method.
	
	//first_vector.assign(7, 15);

	//assing each element using 'push_back()' method.
	//first_vector.push_back(10);
	//first_vector.push_back(20);
	//first_vector.push_back(30);

	// assign each element using for statement and 'push_back()' method.
	for (int a = 0; a < 15; a++) {
		first_vector.push_back(a * 10);
	}

	// print size of this vector.
	cout <<"The size of this vector is "<<first_vector.size()<< endl;
	//반복자를 생성하고 이를 통해서 접근해본다.
	//단 이때 벡터의 인덱스는 0 부터 시작하므로 n을 입력하면
	//벡터내의 n+1의 원소의 값이 출력된다.

	// random access with index number 
	//cout << first_vector[10] << endl;	
	
	/*
	iterator operation like arithmetic.
	after operation it moves from beginning which index is zero(0)
	then it moves to 3rd element
	the value is accessed using pointer of iterator

	iterator01 += 2;
	cout << "the value of elements after operation ";
	cout << *iterator01 << endl;
	*/

	// print vector using iterator

//	vector<int>::iterator it1 = first_vector.begin();
	for(vector<int>::iterator it1=first_vector.begin();it1 !=first_vector.end();++it1) {
		//cout <<" "<<*it1<<"번째 배열의 원소는 " <<first_vector.at(*it1) << endl;
		cout <<it1-first_vector.begin() <<"  "<< *it1 << endl;
	}

}