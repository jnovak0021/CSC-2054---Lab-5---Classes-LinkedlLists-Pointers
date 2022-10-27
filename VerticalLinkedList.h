#pragma once
#include "Node.h"


//class VerticalLinkedList and function Declerations of class
class VerticalLinkedList
{
public:
	//decleration of constructor -- instantiates head to be linked to be linked list with 10 subsequent nodes of values 10...19
	VerticalLinkedList();

	//decleration of print - print out value of nodes
	void print();

	//decleration of constructore
	~VerticalLinkedList();

	//increment function decleration
	void increment();

	//decleration of a copy constructor
	VerticalLinkedList( const VerticalLinkedList  & VLLC);

	//decleration of an overloaded =operator of VerticalLinkedList
	const VerticalLinkedList & operator=(const VerticalLinkedList& rhs);


	//decleration of delete function --  delete every 4th item(starting with the first item)
	void deleteFunction();
private:
	//Node Pointer head to point to node
	Node* head = 0;

};