#include <iostream>
#include <typeinfo>
using namespace std;

void f(const char foo[]) 
{
    cout << foo << endl;
    cout << *foo << endl;
    cout << sizeof(foo) << endl;
    cout << typeid(foo).name() << endl;
}

int main ()
{
    const char foo[] = "foo";
    cout << foo << endl;
    cout << *foo << endl;
    cout << sizeof(foo) << endl;
    cout << typeid(foo).name() << endl;
    cout << typeid(*foo).name() << endl;

    cout << "---" << endl;
    const char* ptr = foo;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << sizeof(ptr) << endl;
    cout << typeid(ptr).name() << endl;

    cout << "---" << endl;
    auto foo2 = "foo2";
    cout << typeid(foo).name() << endl;
    f("foo");
}
