// SimpleArraySum.cpp 

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n(0), num(0), sum(0);
	cin >> n;
	vector<int> vInt;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		vInt.push_back(num);
	}

	for (int i = 0; i < n; i++)
	{
		sum = sum + vInt[i];
	}
	cout << sum << endl;

	return 0;
}

