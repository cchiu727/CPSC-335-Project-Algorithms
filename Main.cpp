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

main()
{
    DiskList* head = NULL;

    // Insert 6. So linked list becomes 6->NULL
    push(*head, 6);

    // Insert 7 at the beginning. So
    // linked list becomes 7->6->NULL
    push(&head, 7);

    // Insert 1 at the beginning. So
    // linked list becomes 1->7->6->NULL
    push(&head, 1);

    // Insert 4 at the end. So linked
    // list becomes 1->7->6->4->NULL
    append(&head, 4);

    // Insert 8, after 7. So linked
    // list becomes 1->7->8->6->4->NULL
    insertAfter(head->next, 8);

    cout << "Created DLL is: "<< endl;
    //write a loop to print every thing in list)

    return 0;
}