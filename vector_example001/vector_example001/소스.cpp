//include iostream , vector and algorithm
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	//declare vector named temps
	vector<double> temps;

	//input vector elements
	for (double temp; cin >> temp;)
		if(temp=='/' ) // if '/' is input it terminates input.
		{}else{ temps.push_back(temp); }
	
	//use iterator to check the vector elements
	vector<double>::iterator iter;

	cout<<"the input data are [";
	for (iter = temps.begin(); iter != temps.end(); ++iter) {
		cout << ' ' << *iter;
	}
	cout << "]" << '\n';

	//summation of elements
	double sum=0;
	for (int x : temps) { sum += x; }

	//calculate average value
	cout << "Average temperature is " << sum / temps.size() << "\n";

	//sort the elements in vector
	std::sort(temps.begin(),temps.end());

	//print the sorted vector
	cout << "the sorted data are [";
	for (iter = temps.begin(); iter != temps.end(); ++iter) {
		cout << ' ' << *iter;
	}
	cout << "]" << '\n';

	//calculate median value
	cout << "Median tempearture is " << temps[temps.size() / 2] << "\n";

	return 0;
}