#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using std::endl;
using std::cout;
using std::string;

#include "header.h"

int main(void)
{

	Solution test;

	string a = "1";
	string b = "111";
	
	string result = test.addBinary(a, b);

	cout << result << endl;

	return 0;
}
