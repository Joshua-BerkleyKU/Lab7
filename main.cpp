/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "queuetest.h"

int main()
{
	Queue q;
	Queuetest qt;
	qt.runtests();
	return(0);
}
