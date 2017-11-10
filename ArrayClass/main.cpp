#include<iostream>
#include<string>
#include"main.h"

using namespace std;



void main()
{
	Array<string> arr;

	char input[40] = { 0, };

	

	for (int i = 0; i < 6; i++)
	{
		cin.getline(input, 40, '\n');
		arr.Add(input);

		
	}
	for (int i = 0; i < 6; i++)
	{
		cout << arr.m_buf[i] << endl;
	}


}