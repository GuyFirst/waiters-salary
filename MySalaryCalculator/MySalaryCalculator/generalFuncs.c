#include "includeAll.h"
#include <stdio.h>
#define STOP 0
void optionChoosing(int* option, char* waiterFileName)
{

    switch (*option) {
    case ADD_WAITER:
    {
        Waiter newWaiter = addAnewWaiter();
        addWaiterToFile(newWaiter, waiterFileName);
        break;
    }
    case REMOVE_WAITER:
       //call a function that removes a waiter from the list
        break;
    case 3:
        printf("You chose option 3\n");
        break;
    case 4:
        printf("You chose option 4\n");
        break;
    case 5:
        printf("You chose option 5\n");
        break;
    case STOP:
    {
        *option = STOP;
        break;
    }
    default:
        printf("Invalid option. Please choose a number between 1 and 5.\n");
        break;
    }


}
