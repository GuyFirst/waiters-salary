#define _CRT_SECURE_NO_WARNINGS
#include "waiters.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "includeAll.h"
#define MAX_NAME_SIZE 30
#define END_OF_FIRST_NAME strlen(firstName)
#define END_OF_LAST_NAME strlen(lastName)

WaiterList makeEmptylist()
{
	WaiterList lst;
	lst.head = lst.head = NULL;
	return lst;
}

WaiterListNode* createListNode(Waiter data, WaiterListNode* next)
{
	WaiterListNode* node = (WaiterListNode*)malloc(sizeof(WaiterListNode));


	return ;
}

void checkAllocaiton(void* ptr)
{
	if (ptr == NULL)
	{
		printf("Failed to allocate memory");
		exit(1);
	}

}

void insertNodeToEndList(WaiterList* lst, WaiterListNode* newTail)
{
	if (isEmtyList(*lst)) //the list is empty
		lst->head = lst->tail = newTail;

	else
	{
		lst->tail->next = newTail;
		lst->tail = newTail;
	}

	return;
}

void insertNodeToStartList(WaiterList* lst, WaiterListNode* newHead)
{
	if (isEmtyList(*lst))
	{
		lst->head = lst->tail = newHead;
	}

	else
	{
		newHead->next = lst->head;
		lst->head = newHead;
	}
	return;
}


bool isEmtyList (WaiterList lst)
{
	return (lst.head == NULL);
}



Waiter addAnewWaiter()
{
	Waiter newWaiter;
	int indicator = 0;
	printf("Please enter the waiter first name:");
	char* firstName = (char*)malloc(sizeof(char) * MAX_NAME_SIZE);
	checkAllocaiton(firstName);
	scanf("%s", firstName);
	firstName[END_OF_FIRST_NAME] = '\0';
	newWaiter.firstName = firstName;

	printf("Please enter the waiter Last name:");
	char* lastName = (char*)malloc(sizeof(char) * MAX_NAME_SIZE);
	checkAllocaiton(lastName);
	scanf("%s", lastName);
	firstName[END_OF_LAST_NAME] = '\0';
	newWaiter.lastName = lastName;

	checkingTests(&newWaiter);

	calcSalaryPrecentage(&newWaiter);
	
	return newWaiter;
	

}

void checkingTests(Waiter* newWaiter)
{
	char testType[3][MAX_NAME_SIZE] = { "menu", "wine", "alcohol" };
	int indicator = 0;
	BYTE test = 0x00;
	for (int i = 0; i < 3; i++)
	{
		printf("Did %s passed the %s test? Enter 1 for yes or 0 for no ", (*newWaiter).firstName, testType[i]);
		scanf("%d", &indicator);

		if (indicator)
		{
			if (i == 0)
			{
				test |= 1;
			}
			if (i == 1)
			{
				test |= 1 << 1;
			}
			if (i == 2)
			{
				test |= 1 << 2;
			}
		}
	}
	(*newWaiter).Tests = test;

	return;
}

void calcSalaryPrecentage(Waiter* newWaiter)
{
	BYTE mask = 7;
	// trainee 
	if (!(*newWaiter).Tests)
	{
		(*newWaiter).tipsSalaryPrecentage = 0;
		printf("%s is a trainee, his salary precentage is %d\n", newWaiter->firstName, newWaiter->tipsSalaryPrecentage);
	}

	// all the tests passed 
	else if ((*newWaiter).Tests == 7)
	{
		(*newWaiter).tipsSalaryPrecentage = 100;
		printf("%s have completed all his tests, his salary precentage is %d\n", newWaiter->firstName, newWaiter->tipsSalaryPrecentage);
	}

	else //(passed the menu test but not the alcohol or not the wine)
	{
		(*newWaiter).tipsSalaryPrecentage = 70;
		printf("%s's salary precentage is %d\n", newWaiter->firstName, newWaiter->tipsSalaryPrecentage);
	}

	return;
}


void addWaiterToFile(Waiter newWaiter)
{

	return;
}




/*void mergeSortWaiterArr(Waiter* arr, int size)
{
	mergeSortWaiterArrRec(arr, 0, size - 1);
}


void mergeSortWaiterArrRec(Waiter* arr, int left, int right)
{
	if (left < right)
	{
		int mid = left + (right - left) / 2;

		mergeSortWaiterArrRec(arr, left, mid);
		mergeSortWaiterArrRec(arr, mid + 1, right);

		mergeSortedWaiterArrays(arr, left, mid, right);
	}
}

void mergeSortedWaiterArrays(Waiter* arr, int left, int mid, int right)
{
	return;
}


void arrangeWaiterArrAlphabeticallyLastName(Waiter* arr, int size)
{
	mergeSortWaiterArr(arr, size);
	return;
}*/