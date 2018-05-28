#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>


using namespace std;

int findDigit(int num, int nth) {
	if (nth <= 0)
		return -1;
	else
	{
		string str;
		str = to_string(num);
		int len = str.length();
		if (nth > len)
			return 0;
		else
		{
			int g = 1;
			while (nth - 1 != 0)
			{
				g *= 10;
				nth--;
			}
		
			int k = int(num / g);
			return k;
		}
	}
}


int main()
{
	int num;
	cin >> num;
	int nth;
	cin >> nth;

	int h = findDigit(num, nth);
	cout << h;
	return 0;
}