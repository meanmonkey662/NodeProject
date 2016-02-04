/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: kkoc6943
 */

#include "CTECArray.h"
using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;

	//Defensive
	if(size <=0)
	{
		cerr << "That is not valid" << endl;
		return;
	}
	for(int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{	//Regular ArrayNodes are being made.
			ArrayNode<Type> nextNode;
			nextNode.setNext(head);
			this->head = &nextNode;
		}
		else
		{	//The first ArrayNode needs to be make;
			ArrayNode<Type> firstNode;
			this->head = &firstNode;
		}
	}
}

template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
		}
			delete deleteMe;
			deleteMe = head;
	}
	delete head;
}

template <class Type>
int CTECArray<Type> :: getSize()
{
	return this->size;
}

template <class Type>
Type* CTECArray<Type> :: get(int position)
{
	//We need to do bounds checking so we do not crash the program.
	if(position >= size || position < 0)
	{
		//I am out of bounds and need to do something about it.
		cerr << "position value is out of bounds :(" << endl;
		return nullptr;
	}
	else
	{
		//I am in bounds so I am inclusive
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
	}
}

template <class Type>
void CTECArray<Type> :: set(int position, Type value)
{
	if (position >= size || position < 0)
	{
		//I am out of bounds and need to do something about it.
		cerr << "position value is out of bounds :(" << endl;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot < position; spot++)
		{
			if (spot != position)
			{
				current = current->getNext();
			}
			else
			{
				current->setValue(value);
			}
		}
	}
}
