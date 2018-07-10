// Kundan Krishna, Copy Right  2017 - github id -krishnakundan1980
//test1.cpp : Defines the entry point for the console application.
// Example code demonstrating 
// 1. template class definition, 2. vector list of objects with iteration operation 

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

//Template class
template <class T>
class mypair {
	T values[2];
public:
	mypair(T first, T second)
	{
		values[0] = first; values[1] = second;
	}
	T getmax();
};

template <class T>
T mypair<T>::getmax()
{
	T retval;
	retval = a>b ? a : b;
	return retval;
}

class InstanceCounter
{
public:
	InstanceCounter()
	{ 
		InstanceNumber++; 
		ObjNum = InstanceNumber;
	}

	~InstanceCounter() {}
	
	static int InstanceNumber;
	int GetObjectNumber() {
		return ObjNum;
	}

private:
	int ObjNum;

};

// Initialize static member of class AA
int InstanceCounter::InstanceNumber = 0;

int main()
{
	vector<InstanceCounter> vecOfInstanceCounterObjects;
	for (int ii = 0;ii < 100;ii++)
	{
		InstanceCounter obj;
		vecOfInstanceCounterObjects.push_back(obj);
	}

	//Method one using iterator
	vector<InstanceCounter>::iterator itr = vecOfInstanceCounterObjects.begin();
	while (itr != vecOfInstanceCounterObjects.end())
	{
		cout << itr->GetObjectNumber() << ",";
		itr++;
	}
	cout << endl;
	//method two using for loop
	for (int counter = 0; counter < vecOfInstanceCounterObjects.size(); counter++)
	{
		cout << vecOfInstanceCounterObjects[counter].GetObjectNumber() << ",";
	}
	cout << endl;

	int iCount = 0;
	cout << "Enter any key to terminate...";
	cin >> iCount;

    return 0;
}

