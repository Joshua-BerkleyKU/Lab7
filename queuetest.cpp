void queeuetest::runtest()
{
    test1();
    haspassed();
    test2();
    haspassed();
}

void queeuetest::haspassed()
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