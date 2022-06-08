#include <iostream>
#include <vector>
using namespace std;

int main () {

	vector <int> vector1 {};
	vector <int> vector2 {};

	vector1.push_back(10, 20);
	cout << vector1.at(0, 1) << endl << vector1.size() <<  endl;

	vector2.push_back(100, 200);
	cout << vector2.at(0, 1) << endl << vector2.size() << endl << endl;

	vector <vector<int>> vector_2d {};

	vector_2d.push_back(vector1, vector2);
	cout << vector_2d.at([0][0], [0][1], [1][0], [1][1]) << endl << vector_2d.size() << endl;
	vector1.at(0) = 10000;

	cout << vector_2d.at[0][0];
return 0;
}
