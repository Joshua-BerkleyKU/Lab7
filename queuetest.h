#ifndef QUEUETEST_H
#define QUEUETEST_H

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <random>
#include "Queue.h"
#include "Node.h"

class queuetest : public Queue
{

private:
    bool failed = false;
    
public:
    queuetest();
    void runtests();
    void haspassed();
    bool test1();
    bool test2();
    bool test3();
    bool test4();
    bool test5();
    bool test6();
    bool test7();


};


