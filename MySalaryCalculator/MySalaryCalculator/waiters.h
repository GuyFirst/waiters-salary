#pragma once
#include <stdbool.h>
#include "includeAll.h"

//////////STRUCTS////////////////

typedef struct _waiter{
	char* firstName;
	char* lastName;
	int tipsSalaryPrecentage;
	BYTE Tests;

}Waiter;

typedef struct waiter_list_node {

	Waiter* waiter;
	struct waiter_list_node* next;

}WaiterListNode;

typedef struct waiter_list {

	WaiterListNode* head;
	WaiterListNode* tail;
}WaiterList;



/////////////////////////FUNCTION DECLARATION//////////////////////////////////////////////

// LISTS //
WaiterList      makeEmptylist();

bool            isEmtyList(WaiterList lst);

WaiterListNode* createListNode(Waiter data, WaiterListNode* next);

void            insertNodeToEndList(WaiterList* lst, WaiterListNode* newTail);

void            insertNodeToStartList(WaiterList* lst, WaiterListNode* newHead);

void            arrangeWaiterArrAlphabeticallyLastName(Waiter* arr, int size);

// ARRAY OF WAITERS //

void            mergeSortWaiterArr(Waiter* arr, int left);

void            mergeSortWaiterArrRec(Waiter* arr, int left, int right);

void            mergeSortedWaiterArrays(Waiter* arr, int left, int mid, int right);


// OTHER //

Waiter          addAnewWaiter();
void            checkingTests(Waiter* newWaiter);
void            calcSalaryPrecentage(Waiter* newWaiter);


///// FILES ///////

// how to read and write info from the file:
// 
// 1. int "waiter numbers": The file starts with an int that represents the number of waiters that stored in the file, let the number be n.
// 
// 
// 2. read the n waiters by the following order:
// 
// 2.1. int "waiter first name length": int that represents first name length - let that number be l1.
// 2.2. string "waiter first name":     l1 number of chars that rpresents the first name (with no \0).
// 2.3. int "waiter last name length":  int that represents first name length - let that number be l2.
// 2.4. string "waiter first name":     l2 number of chars that rpresents the first name (with no \0).
// 2.5. unsigned char "tests":          unsigned char that coded by bits to represent how many tests the waiter have completed
// 
//        0000 0000 - trainee (none tests have been completed)
//        0000 0001 - only the menu test have been completed
//        0000 0111 - completed every test (7 in binary)
//        0000 0011 - completed the menu and the wine tests (3 in binary)
//        0000 0101 - completed the menu and the alcohol tests (5 in binary)
// 
//        notice - the waiter can not completed the wine or alcohol test before completing the menu test
// 
// 
// 2.6. int "waiter salary precentage": int that represent the tips salary precentage for that waiter 
//												  0 -  a trainee
//												  70 - a waiter that haven't completed any tests
//											      90 - a waiter that passed only the menu test
//											      100 - a waiter that completes all the 3 tests (menu, wine, alcohol)
// 
//


void addWaiterToFile(Waiter newWaiter);

