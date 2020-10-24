
#ifndef QUEUETEST_H
#define QUEUETEST_H

#include <iostream>
#include <string>
#include "Queue.h"
#include "Node.h"

class Queuetest : public Queue
{

    private:
        bool failed = false;
        
    public:
        Queuetest() {};
        void runtests();
        void haspassed();
        void test1();
        void test2();
        void test3();
        void test4();
        void test5();
        void test6();
        void test7();


};
#endif

