// CPP program to illustrate
// Implementation of clear() function

#include <iostream>
#include <vector>

using namespace std;

// Driver program
int main() {
	
	// Vector becomes 1, 4, 9, 16
	vector<int> myvector;
	myvector.push_back(1);
	myvector.push_back(4);
	myvector.push_back(9);
	myvector.push_back(16);
	
	// Vector becomes empty
	myvector.clear();
	
	// Printing the vector
	for (auto it = myvector.begin(); it != myvector.end(); ++it)
		cout << ' ' << *it;
	
	return 0;

} // End driver
