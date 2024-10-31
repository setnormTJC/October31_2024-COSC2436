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
	/*ordered*/map<int, string> halloweenCostumeCoolnessMap; //coolness on a scale of 1 - 10 
	
	halloweenCostumeCoolnessMap.insert({ 1, "He-man" });
	halloweenCostumeCoolnessMap.insert({ 10, "Skeleton" });
	halloweenCostumeCoolnessMap.insert({ 5, "Clown" });


	cout << "What makes this an 'ordered' map? \n";

	for (auto& thePair : halloweenCostumeCoolnessMap)
	{
		cout << thePair.first << "\t" << thePair.second << "\n";
	}

	int searchKey = 9; 

	if (halloweenCostumeCoolnessMap.find(searchKey) != halloweenCostumeCoolnessMap.end())
	{
		cout << "What is the corresponding value for key = 10? " << halloweenCostumeCoolnessMap[searchKey]
			<< "\n";
	}

	else
	{
		cout << searchKey << " NOT found!\n";
	}

}
