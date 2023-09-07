#include <module_2.hpp>

Module_2::Module_2(int a, int b)
    : m_a { a }
    , m_b { b }
    {
        cout << "Module_2 is created!" << endl;
    }

Module_2::~Module_2()
{
    cout << "Module_2 is destructed" << endl;
}

void Module_2::hello_world()
{
    cout << "Hello world from Module_2" << endl;
}
