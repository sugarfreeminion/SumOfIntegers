/*
 * Program Name:	SumOfIntegers
 * Description:		Reads a file containing a single integer on each line. 
 *					Sums all the integers and prints that out.
 */ 

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
	ifstream inputFile(argv[1]);
	
	string input;
	
	unsigned int operand = 0;
	unsigned int sum = 0;

	if(inputFile.is_open() == false)
	{
		cout << "File open error" << endl;
	}
	else
	{
		while(getline(inputFile,input))
		{
			operand = atoi(input.c_str());
			
			sum += operand;
		}
		
		cout << sum << endl;
	}
	
	return 0;
}