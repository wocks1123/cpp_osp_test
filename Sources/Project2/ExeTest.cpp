#include "Project1/Test.hpp"
#include "Project2/ExeTest.hpp"



void PrintHello()
{
    printf("Hello World!\n");
}

int main()
{
    int a = Add(1, 2);
    printf("%d\n", a);
    PrintHello();
    return 0;
}