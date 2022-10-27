#include "Node.h"


//default constructor
Node::Node()
{
	
}

//constructor of Node that takes in parameter value and next
Node::Node(int value, Node* next)
{
	//set member value to param value
	this->value = value;

	//set member Node* next to parameter next
	this->next = next;
}

//mutator function setNext for next Node pointer
void Node::setNext(Node* nextNode)
{
	//set next to param
	next = nextNode;
}

//accessor function getNext for next Node pointer -- return next
Node* Node::getNext()
{
	return next;
}

//mutator function setValue to set new value of value
void Node::setValue(int valueIn)
{
	value = valueIn;
}

//accessor function getValue to return value of Node
int Node::getValue()
{
	return value;
}