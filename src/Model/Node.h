/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: kkoc6943
 */

#ifndef MODEL_NODE_H_
#define MODEL_NODE_H_

template <class Type>
class Node
{
private:
	Type value; //What is stored in the Node.
	Node * pointers; //Reference to the array of nodes this is connected to.
public:
	Node();
	virtual ~Node();
};

#endif /* MODEL_NODE_H_ */
