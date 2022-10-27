#include "nodePrintFunction.h"
#include <iostream>

using namespace std;

void nodePrintFunction(Node* current)
{
	string nodeString = "";

	//while pointer is not null
	while (current != 0)
	{
		//print out value of node and traverse
		cout << current->getValue() << " ";
		current = current->getNext();
	}
}
