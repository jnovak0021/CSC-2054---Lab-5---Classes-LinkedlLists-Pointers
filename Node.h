#pragma once


//Node class
//function declerations and Member declerations of Node
class Node
{
public:
	//default constructor
	Node();

	//constructor of Node that takes in parameter value and next
	Node(int value, Node* next);

	//mutator function setNext for next Node pointer
	void setNext(Node* nextNode);

	//accessor function getNext for next Node pointer
	Node* getNext();

	//mutator function setValue to set new value of value
	void setValue(int valueIn);

	//accessor function getValue to return value of Node
	int getValue();



private:
	//private int member to store value of Node
	int value = 0;

	//private Node pointer to store next Node, initialized to 0;
	Node* next = 0;


};