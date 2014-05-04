#include <iostream>
#include <typeinfo>
using namespace std;

void f(const char cake[])
{
    cout << sizeof(cake) << endl;
    cout << typeid(cake).name() << endl;
}

int main ()
{
    const char cake[] = "cake";

    cout << sizeof(cake) << endl;
    cout << sizeof((const char*)cake) << endl;
    cout << typeid(cake).name() << endl;
    f(cake);
}
