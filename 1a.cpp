// #include <iostream>
// using namespace std;
// int main()
// {
// //Alphabet pyramid
//     int n;
//     cout << "enter n";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;

//         while (j <= i)
//         {
//             char ch = 'A' + i - 1;
//             cout << ch;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     //continous alphabet pyramid
//     int n;
//     cout << "enter n";
//     cin >> n;
//     int i = 1;
//     char ch = 'A';
//     while (i <= n)
//     {
//         int j = 1;

//         while (j <= i)
//         {

//             cout << ch;
//             ch++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
//     //simple pyramid
//     int n;
//     cout << "enter n";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     //  number pyramid
//     int n;
//     cout << "enter n";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     // continous number pyramid
//     cout << "enter n";
//     cin >> n;
//     int i = 1;
//     int count = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {

//             cout << count;
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// // rotated inverted pyramid
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     int i = 1;
//     cout << "Enter n";
//     cin >> n;
//     while (i <= n)
//     {
//         int space = i - 1;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int star = n - i + 1;
//         while (star)
//         {
//             cout << "*";
//             star -= 1;
//         }
//         cout << endl;
//         i += 1;
//     }
//     return 0;
// }
// inverted pyramid
//  #include <iostream>
//  using namespace std;
//  int main()
//  {

//     int n;
//     int i = 1;
//     cout <<"Enter n";
//     cin >> n;
//     while (i <= n)
//     {
//         int star = n - i + 1;
//         while (star)
//         {
//             cout << "*";
//             star = star - 1;
//         }

//         cout << endl;
//         i += 1;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     //rotated simple pyramid
//     int n;
//     cout << "enter n";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }

//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
// //rotated no pyramid
//     int n;
//     cout << "enter n";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int j = 1;

//         int count = i;
//         while (j <= i)
//         {

//             cout << count;
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    // triangle
    int n;
    cout << "Enter n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }

        cout << endl;
        i++;
    }
}