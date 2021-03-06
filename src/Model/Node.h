/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: kkoc6943
 */

#ifndef MODEL_NODE_H_
#define MODEL_NODE_H_
#include <iostream>

template <class Type>
class Node
{
private:
	Type value; //What is stored in the Node.
	Node * pointers; //Reference to the array of nodes this is connected to.
public:
	Node();
	Node(const Type& value); //Creates with a starting value.
	virtual ~Node();
	Type getValue();
	void setValue(const Type& value);
	Node * getPointers();
};

#endif /* MODEL_NODE_H_ */
