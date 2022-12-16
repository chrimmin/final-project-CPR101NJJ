/*
Author: Christopher Morano, Email: cmorano@myseneca.ca, ID: 104207220, Date written: 2022-12-02, Course: CPR101.NJJ, Project: final group project
converting.c : CP4PFinalProject
Purpose: this program will ask the user to input a string, 
it will then save that input too a string variable and then convert it to an integer, 
it will infinitely loop asking for input until the user inputs the letter 'q'
*/

#define _CRT_SECURE_NO_WARNINGS		// prevents warnings when using read commands
#define BUFFER_SIZE 80		// keeps data before its processed
#include "converting.h"		// header file the includes all of the necesary function declartions for the program to run
/*
Purpose: the function converting is used to hold all the coding required to convert a inputted string to a integer/double/ and print it out to the user until the user decides to quit
*/

void converting(void)
{
	/*version 1 ====================================================*/
	printf("**** Start of Converting Strings to int Demo ***\n");
	char	intString[BUFFER_SIZE];		// intString contains the users input that will be converted into an integer
	int		intNumber;		// intNumber holds the users input after it is converted from a string to a integer
	do {
		printf("Type an int numeric string (q - to quit):\n");
		fgets(intString, BUFFER_SIZE, stdin);		// gets the users input
		intString[strlen(intString) - 1] = '\0';		//
		if (strcmp(intString, "q") != 0) {		// if statement to detect if the inputted letter is q, if the inputted value is not q it will continue to convert the string to int
			intNumber = atoi(intString);		// converts intString into a integer value, and saves it as an integer in the variable intNumber
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0);		// do-while loop that runs until user enters the letter q
	printf("*** End of Converting Strings to int Demo ***\n\n"); 
	
	//V2
	printf("*** Start of Converting Strings to double Demo ***\n");
	char	doubleString[BUFFER_SIZE];		//doubleString is a string variable that will hold the users inputted characters until they are converted into a double value
	double	doubleNumber;		// stores the users input after its been converted from a string value to a double value
	do
	{
		printf("Type the double numeric string (q - to quite):\n");
		fgets(doubleString, BUFFER_SIZE, stdin);		// prompts the user for input		
		doubleString[strlen(doubleString) - 1] = '\0';		// ends the string by reading the string length and setting it to null
		if ((strcmp(doubleString, "q") != 0))		// will run the conversion process aslong as the users input is not equal to 'q'
		{
			doubleNumber = atof(doubleString);		// converts the users input from a string to a double, saved as doubleNumber
			printf("converted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0);		// do-while loop that will continue to run until user enters the letter 'q'
	printf("*** End of Converting Strings to double demo***\n\n");

	//V3
	printf("*** Start of Converting Strings to double Demo ***\n");
	char	longString[BUFFER_SIZE];		//longString is a string variable that will hold the users inputted characters until they are converted into a long value
	double	longNumber;		// stores the users input after its been converted from a string value to a long value
	do
	{
		printf("Type the long numeric string (q - to quite):\n");
		fgets(longString, BUFFER_SIZE, stdin);		// prompts the user for input		
		longString[strlen(longString) - 1] = '\0';		// ends the string by reading the string length and setting it to null
		if ((strcmp(longString, "q") != 0))		// will run the conversion process aslong as the users input is not equal to 'q'
		{
			longNumber = atof(longString);		// converts the users input from a string to a long, saved as longNumber
			printf("converted number is %f\n", longNumber);
		}
	} while (strcmp(longString, "q") != 0);		// do-while loop that will continue to run until user enters the letter 'q'
	printf("*** End of Converting Strings to long demo***\n\n");
}