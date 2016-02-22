/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: kkoc6943
 */

#include "CTECList.h"

template<class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}

template<class Type>
CTECList::~CTECList()
{
	// TODO Auto-generated destructor stub
}

template<class Type>
Type CTECList<Type> :: removeFromFront()
{
	//find the next spot.
	ArrayNode * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//remove head
	delete head;
	//move head to next spot.
	head = newHead;
}
