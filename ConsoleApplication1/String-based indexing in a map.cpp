// October31-another example of a map object.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<map> 

//#include<unordered_map>

using std::map;
using std::string;
using std::cout;

int main()
{
	/*ordered*/map<string, string> halloweenCostumeCoolnessMap; //coolness on a scale of 1 - 10 

	halloweenCostumeCoolnessMap.insert({ "Poor", "He-man"});
	halloweenCostumeCoolnessMap.insert({ "Mid", "Skeleton"});
	halloweenCostumeCoolnessMap.insert({ "On fleek", "Clown"});


	cout << "What makes this an 'ordered' map? \n";

	for (auto& thePair : halloweenCostumeCoolnessMap)
	{
		cout << thePair.first << "\t" << thePair.second << "\n";
	}

	string searchKey = "Mid";

	if (halloweenCostumeCoolnessMap.find(searchKey) != halloweenCostumeCoolnessMap.end())
	{
		cout << "What is the corresponding value for key =  " 
			<< searchKey << " "
			//<< halloweenCostumeCoolnessMap[searchKey] //alternative to at
			<< halloweenCostumeCoolnessMap.at(searchKey)
			<< "\n";
	}

	else
	{
		cout << searchKey << " NOT found!\n";
	}

}
