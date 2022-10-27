#include <iostream>
#include "Node.h"
#include "nodePrintFunction.h"
#include "VerticalLinkedList.h"

using namespace std;





int main()
{
//create 5 nodes 
	
	Node* n1 = new Node(-5, 0);

	Node* n2 = new Node(5, 0);

	//link n1 to n2 using setNext
	n1->setNext(n2);

	Node* n3 = new Node(15, 0);

	//link n2 to n3 using setNext
	n2->setNext(n3);

	Node* n4 = new Node(25, 0);

	//link n3 to n4 using setNext
	n3->setNext(n4);

	Node* n5 = new Node(35, 0);

	//link n4 to n5
	n4->setNext(n5);

	n5->setNext(0);

	nodePrintFunction(n1);
	
	

	////delete node once done

	cout << endl << "PART 2" << endl;

	//create VerticalLinkedList object
	VerticalLinkedList list1;

	//print out list
	list1.print();

	cout << endl;

	//incremement list
	list1.increment();

	//print out list1
	list1.print();

	cout << endl;

	//second VerticalLinkedList object using copy constructor
	VerticalLinkedList list2(list1);

	//increment list1
	list1.increment();

	//print out both lists
	list1.print();
	list2.print();

	cout << endl;

	//3rd linked list object, set equal to list1 using overloaded = operator'
	VerticalLinkedList list3;
	list3 = list1;

	//increment third list
	list3.increment();

	//print out all three list
	list1.print();
	list2.print();
	list3.print();

	cout << endl;

	//increment all three lists
	list1.increment();
	list2.increment();
	list3.increment();

	//print out all three list
	list1.print();
	list2.print();
	list3.print();

	cout << endl;

	//call deleteFunction 6 times on list 1 and print out each time
	list1.deleteFunction();
	list1.print();
	list1.deleteFunction();
	list1.print();
	list1.deleteFunction();
	list1.print();
	list1.deleteFunction();
	list1.print();
	list1.deleteFunction();
	list1.print();
	list1.deleteFunction();
	list1.print();
}

