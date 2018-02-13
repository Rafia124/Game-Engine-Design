/*

Name: Jack D Smith, Rhys Murray, Greg Smith

Student ID: B00308927, B00308897, B00308929

I declare that the following code was produced by (Jack D Smith, Rhys Murray & Greg Smith) as a group assignment for the GED module and that this is our own work.

I am aware of the penalties incurred by submitting in full or in part work that is not our own and that was developed by third parties that are not appropriately acknowledged.

*/

#pragma once
#include <iostream>

using std::cout;
using std::endl;

class AbstractNPC //partially abstract class to begin defining properties and methods every type of NPC needs
{
public:
	AbstractNPC(char *fn, char *theType) //take in name of npc and their type for object construction
	{
		strcpy_s(name, fn); //copys fn to the name property
	}
	virtual ~AbstractNPC() {};
	void displayNPC() { cout << name << " generated" << endl; }; //displayNPC method to show successful generation of NPC
	char *getName() { return name; } //get name method to show the enemy name

protected:
	char name[20]; //protected name property all NPCs need
};