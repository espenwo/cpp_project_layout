#include <iostream>

using std::cout;
using std::endl;

class Module_1 {
public:
    Module_1(int a, int b);
    ~Module_1();

    void hello_world();
    
private:
    int m_a;
    int m_b;

};