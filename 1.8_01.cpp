#include <iostream>
#include <windows.h>

void counting_function()
{
    static int static_var = 0;
    static_var++;
    std::cout << "Количество вызовов функции counting_function(): " << static_var << std::endl;
}

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }

    return 0;
}