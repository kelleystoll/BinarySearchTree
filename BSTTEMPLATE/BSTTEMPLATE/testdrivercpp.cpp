// Kelley Stoll 
// Test Driver for BST template
#include <iostream>
#include "BSTtemp.h"
using namespace std;


void PrintMenu(); // Creates the menu

int main()
{

	char answer; // Used to run the program again
	int grade;
	char choice;
	int element;
	TreeType<int> mytree;

	cout << "*****Welcome to the Binary Search Tree Program!!***** \n";
	cout << "This program will keep track of grades for professors and teachers.\n\n";

	do
	{
		cout << "Enter integers to represent grades.\n";
		cin >> grade;
		mytree.PutItem(grade);
		cout << "Would you like to enter another? Y/N\n ";
		cin >> answer;

	} while (answer == 'Y' || answer == 'y');

	system("CLS");

	do
	{

		PrintMenu();
		cout << "Enter choice: ";
		cin >> choice;

		switch (choice)
		{

		case 'P': // Print the tree
			system("CLS");
			cout << "Current Tree:\n\n";
			mytree.print();

			break;

		case 'C': // Empty/clear the tree
			system("CLS");
			cout << "Current Tree:\n\n";
			mytree.print();
			if (mytree.IsEmpty())
				cout << "There is nothing to clear!";
			else
			{
				cout << "Updated Tree:\n\n";
				mytree.MakeEmpty();
			}

			break;

		case 'E': // Boolean function if tree is empty
			system("CLS");
			if (mytree.IsEmpty())
				cout << "This tree is empty!\n";
			else
				cout << "This tree is not empty!\n";
			break;

		case 'F': // Boolean function if tree is full
			system("CLS");
			if (mytree.IsFull())
				cout << " This tree is full!\n";
			else
				cout << "This tree is not full!\n";
			break;

		case 'S': // Return the size of the tree
			system("CLS");
			cout << "Current Tree:\n\n";
			mytree.print();
			cout << "\nThe size of this Binary Search Tree is: ";
			cout << mytree.LengthIs() << "." << endl << endl;
			break;


		case 'L': // Look to see if element is in tree

			do
			{
				system("CLS");
				cout << "Current Tree:\n\n";
				mytree.print();

				cout << "\n\nWhat element are you looking for?\n";
				cin >> element;

				if (mytree.GetItem(element))
					cout << "\n\nElement is in the Tree.\n\n";
				else
					cout << "\n\nElement is not in the Tree.\n\n";

				cout << "Would you like to look for another element? Y/N\n";
				cin >> answer;

			} while (answer == 'y' || answer == 'Y');
			system("CLS");
			break;


		case 'R': // Retrieve root data of tree
			system("CLS");
			cout << "Current Tree:\n\n";
			mytree.print();
			cout << "\nThe root of the Tree is: " << mytree.getRootData() << "." << endl;

			break;

		case 'A': // Add an element into the tree

			do
			{
				system("CLS");
				cout << "Current Tree:\n\n";
				mytree.print();
				cout << "\n\nEnter integers to add.\n";
				cin >> grade;
				mytree.PutItem(grade);
				cout << "\nUpdated Tree:\n\n";
				mytree.print();
				cout << "\nYou have added element " << grade << " into the Tree!\n";
				cout << "Would you like to enter another? Y/N\n ";

				cin >> answer;
			} while (answer == 'Y' || answer == 'y');
			system("CLS");
			break;

		case 'D': // Delete element in tree
			do
			{
				system("CLS");
				cout << "Current Tree:\n\n";
				mytree.print();
				cout << "\n\nEnter grade you'd like to delete.\n";
				cin >> grade;
				mytree.DeleteItem(grade);
				cout << "Updated Tree:\n\n";
				mytree.print();
				cout << "\n\nYou have deleted " << grade << " from the tree!\n\n";
				cout << "\nWould you like to enter another? Y/N\n ";

				cin >> answer;
			} while (answer == 'Y' || answer == 'y');
			system("CLS");
			break;

		case 'Q': // Exit the program
			system("CLS");
			cout << "Thank you for using the Binary Search Tree Program!\n";
			cout << "Press any key to exit.\n";
			break;

		default:
			system("CLS");
			cout << choice << " is invalid." << endl;

		}

	} while ((choice != 'Q'));


	cin.get();
	cin.get();
	return 0;

}