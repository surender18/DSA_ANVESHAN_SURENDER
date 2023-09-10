// odd even
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int num;
//      cout << "enter value " << endl;
//      cin >> num;

//     if (num&1 == 0)
//     {
//         cout << "even" << endl;
//     }
//     else
//     {
//         cout << "odd" << endl;
//     }
// }
// swap

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int b = 6;
//     int temp;
//     cout << a << endl;
//     cout << b << endl;
//     temp = a;
//     a = b;
//     b = temp;

//     cout << a << endl;
//     cout << b << endl;
// }

// swap

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 7;
    cout << a << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << b << endl;
}

// Conversion into Binary code

// #include <iostream>
// using namespace std;

// int main()
// {
//     auto number = 0011;
//     cout << number;
//     return 0;
// }

// // Direct XOR of all numbers from 1 to n
#include <iostream>
using namespace std;

int computeXOR(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}