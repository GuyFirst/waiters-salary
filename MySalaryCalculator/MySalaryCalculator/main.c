#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "includeAll.h"
#define STOP 0




void main(int argc, char* argv[])
{
	/*WaiterList lst = readAllWaitersFromWaiterFile(argv[1]);*/
	int option = 1;
	while (option != STOP)
	{
		printf("please choose an option:\n\n");
		printf("1. Add a new waiter\n");
		printf("2. Remove a waiter from the team.\n");

		scanf("%d", &option);
		optionChoosing(&option, argv[1]);

	}


}

