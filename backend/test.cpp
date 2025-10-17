/**
 * @mainpage My Project Documentation
 *
 * This is an introduction to my project.
 * It describes the purpose, features, and usage instructions.
 */

#include <iostream>

#include "test.h"

/**
 * @brief foo
 * @authors Sevastian Oblyashevskii
 * @version 1.0
 * 
 * Just a dumb function
 * @param bar value to increment
 * @return incremented value
*/
int foo(int bar)
{
    return ++bar;
}

template<typename T>
void decrement(T& value)
{
    --value;
}

int main()
{
    auto bar = foo(3);
}