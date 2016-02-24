/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: kkoc6943
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

class CTECList
{private:
	int  size;
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;
	public:

	CTECList();
	virtual ~CTECList();
	Type removeFromFront();
	Type removeFromEnd();
	int getSize();
	void addToFront(const Type& value);
	void addToEnd(const Type& value);
	void addAtIndex(int index, const Type& value);
	Type getFront();
	Type getEnd();
	Type getFronIndex(int index);
	Type remmoveFromIndex(int index);
	Type set(int index, const Type& value)
	};
