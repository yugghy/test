#include <iostream>

using namespace std; 

struct src_tst
{
    int a;
    int b;
};

int main()
{
    int a(4);
    src_tst data{ 3,
                  2  };
    
    cout << a << endl;
    cout << data.b << endl;
}