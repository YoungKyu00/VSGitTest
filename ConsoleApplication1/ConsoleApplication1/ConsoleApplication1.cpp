// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <functional>

using namespace std;

int main()
{
	function<int(int)> factorial = [&factorial](int n) {
		if (n == 0) return 1;
		else return n * factorial(n - 1);
	};


	cout << factorial(5) << endl;

    return 0;
}

