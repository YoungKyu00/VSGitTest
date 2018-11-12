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

	cout << "람다 팩토리얼 테스트입니다." << endl;
	cout << "gg";
	cout << factorial(5) << endl;
	
	cout << "나는 동학입니다 ㅎㅎ" << endl;
	cout << "Test1" << endl;
    return 0;
}

