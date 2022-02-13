/*
* Becerra Stephanie
*
*
*
* Feb 19, 2022
*/

#include "Disk_List.h"

#include <iostream>

using namespace std;

DiskList::DiskList()
{

}


void DiskList::push(DiskList **start,int newData)
{
	DiskList* newDisk = new DiskList();
	newDisk->colorOfCircle = newData;

	newDisk->next = *start;
	newDisk->prev = NULL;

	if (*start != NULL)
	{
		(*start)->prev = newDisk;
	}
	
	*start = newDisk;
}

void DiskList::insertAfter(DiskList* prevNode, int newData)
{
    if (prevNode == NULL)
    {
        cout << "the given previous node cannot be NULL";
        return;
    }

    DiskList* newNode = new DiskList();

    newNode->colorOfCircle = newData;

    newNode->next = prevNode->next;

    prevNode->next = newNode;

    newNode->prev = prevNode;

    if (newNode->next != NULL)
        newNode->next->prev = newNode;
}

void DiskList::append(DiskList** headRef, int newData)
{
    DiskList* newNode = new DiskList();

    DiskList* last = *headRef; 

    
    newNode->colorOfCircle = newData;

    newNode->next = NULL;

    if (*headRef == NULL)
    {
        newNode->prev = NULL;
        *headRef = newNode;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = newNode;

    newNode->prev = last;

    return;
}
