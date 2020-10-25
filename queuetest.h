
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
        void test1();//seeing if a new queue is emptey
        void test2();//seeing if after adding a thing is the queue says if it's empety
        void test3();//adding things to a queue and then removing them from the queue and then seeing if it is empety
        void test4();//adding to the queue and then deleting it and seeing if it it is empety (failed)
        void test5();//seeing if enqueue adds to the back of the queue (failed)
        void test6();//seeing if dequeue only removes one node from the queue (failed - because enqueue adds to the front)
        void test7();//seeing if peekFront looks at the front (failed  because enqueue adds to the front)


};
#endif
