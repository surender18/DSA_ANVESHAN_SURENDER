// #include <iostream>
// using namespace std;
// int main()
// {
//     // reverse by sk
//     int n, rev = 0;
//     cout << "Enter number =";
//     cin >> n;
//     while (n > 0)
//     {
//         rev = (rev * 10) + n % 10;
//         n = n / 10;
//     }
//     cout << "Reverse of number is" << rev;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     // palindrmome by sk
//     int n, num, rev = 0;
//     cout << "Enter number =";
//     cin >> n;
//     num = n;
//     while (n > 0)
//     {
//         rev = (rev * 10) + n % 10;
//         n = n / 10;
//     }
//     if (num == rev)
//     {
//         cout << "Number is Palindrome";
//     }
//     else
//     {
//         cout << "Number is not Palindrome";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     // calculator by sk

//     int a, b, cal, choice;
//     cout << "Enter 1 for Addition" << endl;
//     cout << "Enter 2 for Subtraction" << endl;
//     cout << "Enter 3 for Multiplication" << endl;
//     cout << "Enter 4 for Division" << endl;
//     cout << "Enter choice";
//     cin >> choice;
//     cout << "Enter value of a " << endl;
//     cin >> a;
//     cout << "Enter value of b " << endl;
//     cin >> b;
//     switch (choice)
//     {
//     case 1:
//         cout << "Addition is" << a + b;
//         break;
//     case 2:
//         cout << "Subtraction is" << a - b;
//         break;
//     case 3:
//         cout << "Multiplication is" << a * b;
//         break;
//     case 4:
//         cout << "Division is" << a / b;
//         break;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     // calculator by sk
//     char math_operator;
//     int firstnum, secondnum;
//     cout << "Enter an Operator : +,-,*,/" << endl;
//     cin >> math_operator;
//     cout << "Enter first number" << endl;
//     cin >> firstnum;
//     cout << "Enter second number" << endl;
//     cin >> secondnum;
//     switch (math_operator)
//     {
//     case '+':
//         cout << firstnum << "+" << secondnum << "=" << firstnum + secondnum;
//         break;
//     case '-':
//         cout << firstnum << "-" << secondnum << "=" << firstnum - secondnum;
//         break;
//     case '*':
//         cout << firstnum << "*" << secondnum << "=" << firstnum * secondnum;
//         break;
//     case '/':
//         cout << firstnum << "/" << secondnum << "=" << firstnum / secondnum;
//         break;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     // character digit alphabet by sk
//     char ch;
//     cout << "Enter character" << endl;
//     cin >> ch;
//     if (ch >= '0' and ch <= '9')
//     {
//         cout << "Character is digit" << endl;
//     }
//     else if ((ch >= 'a' and ch <= 'z') || (ch >= 'A' and ch <= 'Z'))
//     {
//         cout << "Character is Alphabet";
//     }
//     else
//     {
//         cout << "Character is Special character";
//     }
//     return 0;
// // }
// #include <iostream>
// using namespace std;
// int main()
// {
//    // swapping by sk
//     int a, b, temp;
//     cout << "Enter first number" << endl;
//     cin >> a;
//     cout << "Enter second number" << endl;
//     cin >> b;
//     cout << "Before swapping" << a << " " << b << endl;
//     temp = a;
//     a = b;
//     b = temp;
//     cout << "After swapping " << a << " " << b << endl;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     multiplication by sk
//     int a[3][3], b[3][3], i, j, k, result[3][3] = {0};
//     cout << "Enter first Matrix elements" << endl;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << "Enter Number [" << i << "][" << j << "]";
//             cin >> a[i][j];
//         }
//     }

//     cout << "Enter Second Matrix elements" << endl;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << "Enter Number [" << i << "][" << j << "]";
//             cin >> b[i][j];
//         }
//     }

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             for (k = 0; k < 3; k++)
//             {
//                 result[i][j] = result[i][j] + a[i][k] * b[k][j];
//             }
//         }
//     }
//     cout << "multiplication of matrix is " << endl;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // decimal to binary by sk
    int n;
    cout << "Enter value ";
    cin >> n;
    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans << endl;
}
