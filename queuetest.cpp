#include "queuetest.h"

void Queuetest::runtests()
{
    test1();
    haspassed();
    test2();
    haspassed();
    test3();
    haspassed();
    test4();
    haspassed();
    test5();
    haspassed();
    test6();
    haspassed();
    test7();
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

void Queuetest::test1()
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
    //std::cout << failed << '\n';
    //delete t; 
}

void Queuetest::test2()
{
    std::cout << "test 2 seeing if after adding a thing is the queue says if it's empety " << '\n';
    Queuetest t;
    t.enqueue(1);
    bool temp = t.isEmpty();
    if (temp == false)
    {
       failed = false;
    }
    else
    {
        failed = true;
    }
    
    //delete t; 
    //std::cout << failed << '\n';
}


void Queuetest::test3()
{
    std::cout << "test 3 adding things to a queue and then removing them from the queue and then seeing if it is empety" << '\n';
    Queuetest t;
    t.enqueue(1);
    t.enqueue(2);
    t.enqueue(3);
    t.enqueue(4);
    t.enqueue(5);
    t.dequeue();
    t.dequeue();
    t.dequeue();
    t.dequeue();
    t.dequeue();
  
    bool temp = t.isEmpty();
    if (temp == true)
    {
       failed = false;
    }
    else
    {
        failed = true;
    }
    //delete t;
    //std::cout << failed << '\n';
}

void Queuetest::test4()
{
  std::cout << "test 4 adding to the queue and then deleting it and seeing if it it is empety" << '\n';

  Queuetest t;
  t.enqueue(1);
  t.enqueue(2);
  t.enqueue(3);
  t.enqueue(4);
  t.enqueue(5);

  t.~Queuetest();
  
  bool temp = t.isEmpty();
  if (temp == true)
  {
    failed = false;
  }
  else
  {
    failed = true;
  }
}

void Queuetest::test5()
{
  std::cout << "test 5 seeing if enqueue adds to the back of the queue" << '\n';

  Queuetest t;
  t.enqueue(1);
  t.enqueue(2);
  t.enqueue(3);
  t.enqueue(4);
  t.enqueue(5);

  int temp = t.peekFront();
  if(temp == 1)
  {
    failed = false;
  }
  else
  {
    failed = true;
  }
}

void Queuetest::test6()
{
  std::cout << "test 6 seeing if dequeue only removes one node from the queue" << '\n';

  Queuetest t;
  t.enqueue(1);
  t.enqueue(2);
  t.enqueue(3);
  t.enqueue(4);
  t.enqueue(5);

  t.dequeue();
  t.dequeue();
  t.dequeue();

  int temp = t.peekFront();
  if(temp == 4)
  {
    failed = false;
  }
  else
  {
    failed = true;
  }
}

void Queuetest::test7()
{
  std::cout << "test 7 seeing if peekFront looks at the front" << '\n';

  Queuetest t;
  t.enqueue(1);
  t.enqueue(2);
  t.enqueue(3);
  t.enqueue(4);
  t.enqueue(5);

  int temp = t.peekFront();
  if(temp == 1)
  {
    failed = false;
  }
  else
  {
    failed = true;
  }
}