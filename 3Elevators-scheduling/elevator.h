#include<iostream>
#include <fstream>  
using namespace std;
class Elevator {
public:
	int destination;
	int currentFloor;
	Elevator()
	{
		destination = 0;
		currentFloor = 1;
	}
	int getdestination()
	{
		return destination;
	}
	int getcurrentFloor()
	{
		return currentFloor;
	}
	void setdestination(int d)
	{
		destination = d;
	}
	void setcurrentFloor(int c)
	{
		currentFloor = c;
	}
};
int time1(int, int, int);//
int time2(int, int, int);//

