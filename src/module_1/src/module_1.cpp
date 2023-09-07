#include <module_1.hpp>

Module_1::Module_1(int a, int b)
    : m_a { a }
    , m_b { b }
    {
        cout << "Module_1 is created!" << endl;
    }

Module_1::~Module_1()
{
    cout << "Module_1 is destructed" << endl;
}

void Module_1::hello_world()
{
    cout << "Hello world from Module_1" << endl;
}
