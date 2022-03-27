#include <iostream>
#include"bankingFunction.h"

int shw = 6;

void showAllTheFunctions();
void whatDoYouWantToDo(int a);
void whatDoYouWantToDoMoney(int a);

int main()
{
	showAllTheFunctions();
	return 0;
}

void showAllTheFunctions() {
	int firstRoundOfChoice;
	std::cout << "What would you like to do?\n";
	std::cout << "1. Money mangagement\n";
	std::cout << "2. Travel\n";
	std::cout << "3. Social\n";
	std::cout << "4.Education\n";
	std::cin >> firstRoundOfChoice;
	whatDoYouWantToDo(firstRoundOfChoice);
}

void whatDoYouWantToDo(int a) {
	int b;
	switch (a) {
	case 1:
		std::cout << "1. Manage bank\n";
		std::cout << "2. checkWallet\n";
		std::cout << "3. Manage Stocks\n";
		std::cin >> b;
		break;
	case 2:
		std::cout << "4. Ride the bus\n";
		std::cout << "5. Take a plane\n";
		std::cout << "6. Take a boat\n";
		std::cin >> b;
		break;
	}
	whatDoYouWantToDoMoney(b);
}

void whatDoYouWantToDoMoney(int c) {
	switch (c){
	case 1:
		showOptions();
		break;
	case 2:
		break;
	case 3:
		break;
	}
}