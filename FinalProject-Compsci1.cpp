//File: FinalProject-Compsci1.cpp
//Name: Israel, Jason, Paul
//Date: 12/15/2018
//Course: CompSci 1 #02444-2463 (FA18-H)
//Description: This will be our final project for our compsci-1 class. It is an arcade battling game with similarities with Pokemon.
//Usage:  This program will ask the user for input to navigate menus and interact with gameplay.

#include "pch.h"
#include "Classes.h"
#include "Items.cpp"
#include "Windows.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool menuScreen() {
	string response;
	cout << right << setw(34) << "Welcome to [GAME TITLE]" << endl << "---------------------------------------------" << endl;
	cout << right << setw(20) << "1) Play" << right << setw(10) << "2) Quit" << endl;
	while (((response != "1") || (response != "2"))) {
		cin >> response;
		if (response == "1") {
			return false;
		}
		else if (response == "2") {
			return NULL;
		}
	 	
	}
}


int main()
{
	bool done = false;
	bool menu = true;
	bool play = false;
	bool gameover = false;


	while (!done) {
		while (menu) {
			menu = menuScreen();
			if (menu == NULL) { return 0; };
		}
	}
}
