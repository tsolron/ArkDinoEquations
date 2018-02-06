#include<iostream>
#include<fstream>
#include<string>
#include<math.h>
#include<array>

using namespace std;

/*
DESIRED RESULTS:
* Maturation % (x) at which it will raise to juve without losing food, time from 0%->x%
** Considering spoiling, weight, etc...
*** Assume worst-case (first spoil for food stacks is immediately)
* With Trough (Tr), how many food items / stacks of food items for 10%->100%, 0%->100%
* 
*/

/*
STRUCTURE:
* One function / equation
* 
*/

int main(void) {
	cout << "ABC" << endl;

	/*
	creaturedata.agespeed
	creaturedata.agespeedmult
	creaturedata.basefoodrate
	creaturedata.babyfoodrate
	creaturedata.extrababyfoodrate
	$scope.settings.maturationspeed
	$scope.settings.consumptionspeed
	$scope.settings.baseminfoodrate
	*/

	/*
	creature.maturationtime = 1 / creaturedata.agespeed / creaturedata.agespeedmult / $scope.settings.maturationspeed;
	creature.babytime = creature.maturationtime / 10;

	creature.maxfoodrate=creaturedata.basefoodrate*creaturedata.babyfoodrate*creaturedata.extrababyfoodrate*$scope.settings.consumptionspeed;
	creature.minfoodrate=$scope.settings.baseminfoodrate*creaturedata.babyfoodrate*creaturedata.extrababyfoodrate*$scope.settings.consumptionspeed;
	creature.foodratedecay=(creature.maxfoodrate-creature.minfoodrate)/creature.maturationtime;
	*/

	string junk;
	cin >> junk;
	return 0;
}