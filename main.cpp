#include <iostream>
#define DIGIT 8

using namespace std;

int main()
{
	int TempArray[DIGIT] = { 0, };
	int ResultArray[DIGIT] = { 0, };

	int Input;
	int temp = 0;
	cin >> Input;

	while (Input > 0)
	{
		if (Input % 2 == 1)
		{
			TempArray[temp] = 1;
		}
		else
		{
			TempArray[temp] = 0;
		}
		Input = Input / 2;
		temp++;
	}

	// reverse to result array
	for (int i = 0; i < DIGIT; i++)
	{
		ResultArray[i] = TempArray[7 - i];
	}

	// print
	for (int i = 0; i < DIGIT; i++)
	{
		cout << ResultArray[i];
	}
	
	return 0;
}