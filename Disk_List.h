/*
* Becerra Stephanie
*
*
*
* Feb 19, 2022
*/

#ifndef Disk_List.H

#define Disk_List.H



#include <iostream>
#include <string>
#include <iomanip>
#include <list>
#include <algorithm>

class DiskList
{
public:

	DiskList *next;
	DiskList *prev;
	int colorOfCircle;

	DiskList();

	void push( DiskList **start,int newData);
	void insertAfter(DiskList *prevNode, int newData);
	void append(DiskList **headRef, int newData);
};

#endif