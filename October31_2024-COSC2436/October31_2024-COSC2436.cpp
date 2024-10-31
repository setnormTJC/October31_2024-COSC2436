// October31_2024-COSC2436.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<map> 
#include <vector>

using std::map; 


struct LatLonPoint
{
	int lat; 
	int longitude; 

	bool operator < (const LatLonPoint& otherPoint) const
	{
		return this->lat < otherPoint.lat; 
	}
};

using std::cout; 

int main()
{
	LatLonPoint ourLocation; 
	ourLocation.lat = 32; 
	ourLocation.longitude = -95; 


	map<LatLonPoint, std::string> mapOfTheWorld =
	{
		{ourLocation,				"The Pirtle building at TJC in Tyler, TX"},
		{LatLonPoint{35, 138},		"Mt. Fuji"}
	};

	//std::vector<LatLonPoint> latLonPoints = { ourLocation,{LatLonPoint{35, 138} };
	//std::vector<string> locationNames = { "Pirtle", "Mt. Fuji" }; 

	mapOfTheWorld.insert({ LatLonPoint{40, -75}, "Somewhere in New York" });
	
	//let's print the contents of the map
	for (auto& thePair : mapOfTheWorld)
	{
		cout << thePair.second <<" has these coordinates: "
			<< thePair.first.lat << ","
			<< thePair.first.longitude << "\n";
	}

}
