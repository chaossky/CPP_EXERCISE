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
	//�ݺ��ڸ� �����ϰ� �̸� ���ؼ� �����غ���.
	//�� �̶� ������ �ε����� 0 ���� �����ϹǷ� n�� �Է��ϸ�
	//���ͳ��� n+1�� ������ ���� ��µȴ�.

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
		//cout <<" "<<*it1<<"��° �迭�� ���Ҵ� " <<first_vector.at(*it1) << endl;
		cout <<it1-first_vector.begin() <<"  "<< *it1 << endl;
	}

}