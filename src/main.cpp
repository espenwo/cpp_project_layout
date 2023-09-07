#include <iostream>
#include <memory>
#include <module_1.hpp>
#include <module_2.hpp>

using std::cout;
using std::endl;

int main()
{
    cout << "Running main .... " << endl;

    {
        cout << "Initiating within first context" << endl;
        std::unique_ptr<Module_1> module_1 = std::make_unique<Module_1>(2, 3);
    }

    {
        cout << "Initiating within second context" << endl;
        std::unique_ptr<Module_2> module_2 = std::make_unique<Module_2>(2, 3);
    }

    return 0;
}