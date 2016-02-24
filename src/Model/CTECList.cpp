/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: kkoc6943
 */

#include "CTECList.h"
#include <iostream>

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
	assert(this->size > 0);

	//Declare an variable of the type to return
	Type thingToRemove;
	//Create a pointer to what is after head.
	ArrayNode * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//Get what head is holding!
	thingToRemove = this->head->getValue();
	//Delete what head is pointing to.
	delete this->head;
	//set head to the new head
	this->head = newHead;

	return thingToRemove;
}
