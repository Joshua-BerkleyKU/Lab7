#include "queuetest.h"

void Queuetest::runtest()
{
    test1();
    haspassed();
    test2();
    haspassed();
}

void Queuetest::haspassed()
{
    if (failed == true)
    {
        std::cout << "the test has failed " << '\n'; 
        failed = false;
    }
    else
    {
        std::cout << "the test did not fail " << '\n'; 
    }
    
}

bool Queuetest::test1()
{
    std::cout << "test 1 seeing if a new queue is emptey " << '\n';
    Queuetest t;
    bool temp = t.isEmpty();
    if (temp == true)
    {
       failed = false;
    }
    else
    {
        failed = true;
    }
    
    return(failed)
}

bool Queuetest::test2()
{
    std::cout << "test 2 adding things to a queue and the deleting the queue " << '\n';
    Queuetest t;
    t.enqueue(1);
    t.enqueue(2);
    t.enqueue(3);
    t.enqueue(4);
    t.enqueue(5);
    t.~Queue();

    bool temp = t.isEmpty();
    if (temp == true)
    {
       failed = false;
    }
    else
    {
        failed = true;
    }
    
    return(failed)
}