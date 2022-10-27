#include "VerticalLinkedList.h"
#include <iostream>

using namespace std;


//decleration of constructor -- instantiates head to be linked to be linked list with 10 subsequent nodes of values 10...19
VerticalLinkedList::VerticalLinkedList()
{
	//create first node, and place it after had using setNext() 
	head = new Node(10, 0); 
	//set Node* current to point to head
	Node* current = head;

	//create 9 more nodes and connect them
	for (int i = 0; i < 9; i++)
	{
		//set current to point to new node with value i + 11 
		current->setNext(new Node(11 + i, 0));

		//traverse linkedList
		current = current->getNext();
	}
}

//decleration of print - print out value of nodes
void VerticalLinkedList::print() 
{
	//Node* to keep track of current node
	Node* current = head;

	cout << "List: ";

	//traverse LinkedList until null
	while(current != 0)
	{
		cout << current->getValue() << " ";
		//traverse to next node
		current = current->getNext();
	}
	cout << endl;
}

//increment function decleration
void VerticalLinkedList::increment() 
{
	//Node* current to point to head at first;
	Node* current = head;

	//transverse LinkedList while current isn't null
	while (current != 0)
	{
		current->setValue(current->getValue()+1);
		current = current->getNext();	//transverse LinkedList
	}
}


//overloaded =operator that returns reference of VerticalLinkedList object
const VerticalLinkedList & VerticalLinkedList::operator=(const VerticalLinkedList & rhs)
{
	//make sure two objects are not the same
	if(this != &rhs)
	{
		//set Node pointer to param head
		Node* currentrhs = rhs.head;

		//
		Node* current;

		//point head to new Node();
		head = new Node();

		//set value of head to value of rhs.head
		*(head) = *(rhs.head);

		//set current to point to this head
		current = head;

		//tranverse to node after param head
		currentrhs = currentrhs->getNext();

		while (currentrhs != 0)
		{
			//get value of Node pointer at currentRhs
			int value = currentrhs->getValue();

			//set Node after current to a new Node with value
			current->setNext(new Node(value, 0));

			//tranverse both VerticalLinkedLists
			current = current->getNext();
			currentrhs = currentrhs->getNext();
		}
	}
	//return reference to this object
	return *this;
}

//destruct the object and all members
VerticalLinkedList:: ~VerticalLinkedList()
{
	//Node* current to point to current node
	Node* current = head;
	//traverse lik=nked list and delete each member node
	while (current != 0)
	{
		//store current in temp pointer
		Node* temporary = current;
		//tranverse to next node;
		current = current->getNext();

		//delete node at temp
		delete temporary;
	}
}

//copy constructor to copy members of object param to this
VerticalLinkedList::VerticalLinkedList(const VerticalLinkedList& VLLC)
{	
	//create a Node* to store current of VLLC
	Node* currentVLLC = VLLC.head->getNext();
	
	head = new Node();
	//create copy of head of VLLC
	*head = *(VLLC.head);

	//Node * to keep track of current of this VerticalLinkedList object
	Node* currentThis = head;

	//fill in subsequent 9 node of this VerticalLinkedList with the node of the parameter VerticalLinkedList VLLC
	while (currentVLLC != 0)
	{
		//set currentThis.setNext() to current;

		int value = currentVLLC->getValue();
		currentThis->setNext(new Node(value, 0));
		
		//traverse both linked List objects
		currentThis = currentThis->getNext();
		currentVLLC  = currentVLLC->getNext();
	}
}

//decleration of delete function --  delete every 4th item(starting with the first item) -- delete last Node if 4 item doesn't exist
void VerticalLinkedList::deleteFunction()
{
	
	//Node* current to keep track of current
	Node* current = head;
	//Node* to keep track of previous node, at start, set to head
	Node* previous = head;

	//int count to keep track of what index the member is
	int count = 0;

	//transverse LinkedList while current isn't null
	while (current != 0)
	{	
		//if head is null, break loop
		if (head == 0)
			break;

		//if count %4 ==0th node, delete node and reconnect linked list
		if( count == 0 || (count) % 4 == 0)
		{

			//delete first node in linked list
			if (count == 0)
			{
				
				Node* temp = current;	//temp store value of head pointer
				//head = current->getNext();	//Point head to next value	
				
				//set head to point at next node
				head = head->getNext();
				
				current = current->getNext();	//set current to new head->getNext()
				previous = current; //set previous value to new head	//PROBLEM

				delete temp;

			}
			//delete 4th node
			else
			{
				//Node* temp = current;	//temp store node at current
				Node* temp = current;

				previous->setNext(current->getNext());		//recconect linked list with node deleted ommited
				current = current->getNext();	//transverse to next node of current
			}
		}

		//if no node was deleted tranverse list, if you reach end of linked list, delete last node
		else
		{
			previous = current;	//set previous to current to store previous value
			current = current->getNext();	//transverse LinkedList
		}

		count++;	//increment count
	}
}