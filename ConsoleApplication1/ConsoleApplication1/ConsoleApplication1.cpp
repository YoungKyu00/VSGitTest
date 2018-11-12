// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

