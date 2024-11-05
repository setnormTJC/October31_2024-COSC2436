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



//struct StateRecord
//{
//	string stateName; 
//	string whoTheyVotedFor; //Harris, Trump, independent, WRITE-in? 
//};
//
//map<StateRecord, int> electoralMap
//=
//{
//	{StateRecord{"Texas", "Trump"}, 40},
//	{StateRecord{"New York", "Harris"}, 32},
//};


//string determineWinner(std::map<StateRecord, int> electoralMap)
//{
//	int numberOfTrumpVotes = 0; 
//	int numberOfHarrisVotes = 0;
//
//	for (auto& thePair : electoralMap)
//	{
//		if (thePair.first.whoTheyVotedFor == "trump")
//		{
//			numberOfTrumpVotes += thePair.second; //... continue with this function definition if interested.,,
//		}
//	}
//}

map<int, int> nSquaredMap =
{
	{2, 4},
	{4, 16},
	{8, 64},
};

int main()
{
	//ifstream fin{"babyTextFile.txt"};
	ifstream fin{ "popularWords.txt" };

	if (!fin.is_open())
	{
		cout << "FNFE\n";
		return 1;
	}

	map<char, int> letterFrequencyMap;// = {{}}

	//why not put int first then char? Is it arbitrary? 
	for (char letter = 'a'; letter <= 'z'; ++letter)
	{
		letterFrequencyMap.insert({ letter, 0 });
	};

	char currentChar;
	while (fin >> currentChar)
	{
		letterFrequencyMap[currentChar]++;
	}

	for (auto& thePair : letterFrequencyMap)
	{
		cout << thePair.first << " has occurred this many times: " << thePair.second << "\n";
	}

	fin.close(); 
}
