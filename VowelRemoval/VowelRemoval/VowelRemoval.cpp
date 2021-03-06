/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: VowelRemoval
 * This program prompts the user to input a string, then uses substr
 * to remove all the vowels from the string. After removing all the
 * vowels, the program outputs the string.
 */

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char chrVowel)
{
	switch (toupper(chrVowel))
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'Y':
		return true;
	default:
		return false;
	}
}

string substr(string strInput)
{
	int intPosition = 0;
	char chrCurrent;

	do
	{
		chrCurrent = strInput.at(intPosition);

		if (isVowel(chrCurrent))
		{
			strInput = strInput.substr(0, intPosition) + strInput.substr(intPosition + 1);
		}
		else
		{
			intPosition++;
		}
	}
	while (intPosition < strInput.length());

	return strInput;
}

int main()
{
	string strInput;
	string strOutput;

	cout << " " << endl;
	cout << "Welcome to the Vowel Removal Program." << endl;
	cout << " " << endl;
	cout << "This program removes vowels from a word you've entered " << endl;
	cout << "and displays the results. The vowels are A, E, I, O, U, " << endl;
	cout << "and Y." << endl;
	cout << " " << endl;
	
	cout << "Please enter a word: ";
	cin >> strInput;

	strOutput = substr(strInput);

	cout << " " << endl;
	cout << "The word without vowels: " << strOutput << endl;
	cout << " " << endl;

    return 0;
}