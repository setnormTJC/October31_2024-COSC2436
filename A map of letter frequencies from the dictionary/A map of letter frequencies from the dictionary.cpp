// A map of letter frequencies from the dictionary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<map> 

#include<fstream> 

//#include<unordered_map>

using std::map;
using std::string;
using std::cout;
using std::ifstream; 


int main()
{
	ifstream fin{"babyTextFile.txt"};
	if (!fin.is_open())
	{
		cout << "FNFE\n";
		return 1;
	}

	map<char, int> letterFrequencyMap =
	{
		{'a', 0},
		{'b', 0},
		{'c', 0},
		{'d', 0},
		{'e', 0},
		{'f', 0},
		{'g', 0},
		{'h', 0},
		{'i', 0},
		{'j', 0},
		{'k', 0}
	};


	char currentChar;
	while (fin >> currentChar)
	{
 
		//fin >> currentChar; 
		//cout << currentChar << "\n";

		//if (isalpha(currentChar)) //disregard end of file character
		//{
			letterFrequencyMap[currentChar]++;
		//}

		//letterFrequencyMap.at(currentChar)++; 
	}


	for (auto& thePair : letterFrequencyMap)
	{
		cout << thePair.first << " has occurred this many times: " << thePair.second << "\n";
	}






	fin.close(); 
}
