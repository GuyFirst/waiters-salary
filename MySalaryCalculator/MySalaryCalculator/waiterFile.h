#pragma once

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
// 2.5. int "waiter salary precentage": int that represent the tips salary precentage for that waiter 
//												  0 -  a trainee
//												  70 - a waiter that haven't completed any tests
//											      90 - a waiter that passed only the food test
//											      100 - a waiter that completes all the 3 tests (food, wine, alcohol)
// 
// 2.6 bool "food test" :               bool that represent if the waiter passed the food test
// 2.7 bool "wine test" :               bool that represent if the waiter passed the wine test
// 2.8 bool "alcohol test":             bool that represent if the waiter passed the alcohol test

typedef struct waiter
{
	int w;
}Waiter;

void addWaiterToFile(Waiter newWaiter);
