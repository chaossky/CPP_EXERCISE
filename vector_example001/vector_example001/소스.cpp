#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	vector<double> temps;
	for (double temp; cin >> temp;)
		if(temp=='/' ) 
		{}else{ temps.push_back(temp); }
		
	vector<double>::iterator iter;

	cout<<"the input data are [";
	for (iter = temps.begin(); iter != temps.end(); ++iter) {
		cout << ' ' << *iter;
	}
	cout << "]" << '\n';


	double sum=0;
	for (int x : temps) { sum += x; }

	cout << "Average temperature is " << sum / temps.size() << "\n";

	std::sort(temps.begin(),temps.end());
	cout << "the sorted data are [";
	for (iter = temps.begin(); iter != temps.end(); ++iter) {
		cout << ' ' << *iter;
	}
	cout << "]" << '\n';

	cout << "Median tempearture is " << temps[temps.size() / 2] << "\n";


}