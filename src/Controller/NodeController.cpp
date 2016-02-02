/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: kkoc6943
 */

#include "NodeController.h"

#include <string>
#include <iostream>

using namespace std;

NodeController::NodeController()
{
	stringNode.setValue("asdada");
	intNode.setValue(999);

	stringArrayNode.setValue("Words in here");
	otherArrayNode.setValue("linked node");
	stringArrayNode.setNext(&otherArrayNode);
}

NodeController::~NodeController()
{
	// TODO Auto-generated destructor stub
}

void NodeController :: start()
{
	cout << "The contents of the stringNode are " << stringNode.getValue() << endl;
	cout << "The contents of the stringArrayNode are: " << stringArrayNode.getValue() << endl;
	cout << "This is connected to the stringArrayNode" << (*stringArrayNode.getNext()).getValue() << endl;
}
