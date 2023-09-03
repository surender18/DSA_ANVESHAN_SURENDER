// // length of string
// #include <iostream>
// using namespace std;
// int getlength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != 0; i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     cout << "enter name " << endl;
//     char name[20];
//     cin >> name;
//     cout << "your name " << name << endl;
//     cout << "length of string is" << getlength(name) << endl;
// }
// // reverse a string
// #include <iostream>
// using namespace std;
// void reverse(char name[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s < e)
//     {
//         swap(name[s++], name[e--]);
//     }
// }
// int getlength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != 0; i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char name[20];
//     cout << "enter your name" << endl;
//     cin >> name;
//     int len = getlength(name);
//     reverse(name, len);
//     cout << "reverse is " << name << endl;
// }
//

// //check palindrome
// #include <iostream>
// using namespace std;

// char lowercase(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//         return ch;
//     else
//     {
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// bool checkpalindrome(char a[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         if (a[s] != a[e])
//         {
//             return 0;
//         }
//         else
//         {
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

// int getlength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != 0; i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char name[20];
//     cout << "enter word" << endl;
//     cin >> name;
//     int len = getlength(name);
//     cout << "palindrome or not :" << checkpalindrome(name, len) << endl;
//     return 0;
// }

// return max occuring character

// #include <iostream>
// using namespace std;

// char getMaxoccch(string s)
// {
//     int arr[26] = {0};
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         int num = 0;
//         if (ch >= 'a' && ch <= 'z')
//         {
//             num = ch - 'a';
//         }
//         else
//         {
//             num = ch - 'A';
//         }
//         arr[num]++;
//     }
//     int maxi = -1, ans = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (maxi < arr[i])
//         {
//             ans = i;
//             maxi = arr[i];
//         }
//     }
//     char result = 'a' + ans;
//     return result;
// }
// int main()
// {
//     string s;
//     cout << "enter string " << endl;
//     cin >> s;
//     cout << getMaxoccch(s) << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        int i = 0;
        int len = s.length();
        string finalRes = s;
        while (i < len)
        {
            string s = finalRes;
            if (s.find(part) < s.length())
            {
                int occInd = s.find(part);
                finalRes.erase(occInd, part.length());
            }
            i++;
        }
        return finalRes;
    }
};