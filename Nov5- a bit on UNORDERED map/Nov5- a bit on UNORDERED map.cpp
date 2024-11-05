// Nov5- a bit on UNORDERED map.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<unordered_map>

using std::cout; 
using std::string; 
using std::unordered_map;

int main()
{
	unordered_map<string, double> productPriceMap;
	productPriceMap.insert({ "Shoes", 51.31 });
	//productPriceMap.insert({ "Shoes", 51.31 }); //no duplicate keys!
	productPriceMap.insert({ "Fridge filter", 39.89 });
	productPriceMap.insert({ "Thing", 11.99 });
	productPriceMap.insert({ "Mousepad", 74.00 });
	productPriceMap.insert({ "Soap - ivory soap - 6 ct", 3.99 });

	//std::vector<string> fakeProductNames = {"A", "B", "C", "D", "E", "F"}
	//for ()

	for (auto& thePair : productPriceMap)
	{
		cout << thePair.first << " cost " << thePair.second << "\n";
	}



	//A good question: can the same item be inserted twice? 


}
