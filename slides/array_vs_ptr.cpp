#include <iostream>
#include <typeinfo>
using namespace std;

int main ()
{
    const char foobar[] = "foobar";
    cout << typeid(foobar).name() << endl;
    cout << sizeof(foobar) << endl;

    auto foobar2 = "foobar";
    cout << typeid(foobar).name() << endl;
    cout << sizeof(foobar) << endl;
}
