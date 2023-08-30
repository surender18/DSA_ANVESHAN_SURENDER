#include <iostream>
#include <climits>
using namespace std;
int getMin(int num[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, num[i]);
    }
    return mini;
}
int getmax(int num[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
    }
    return maxi;
}
int main()
{
    cout << "enter size" << endl;
    int size;
    cin >> size;
    cout << "enter elements" << endl;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "max value is " << getmax(num, size) << endl;
    cout << "min value is " << getMin(num, size) << endl;
    return 0;
}
// reverse an array

// #include <iostream>
// using namespace std;
// void reverse(int arr[], int n)
// {
//     int start = 0;
//     int end = n - 1;
//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//     reverse(arr, 7);
//     printArray(arr, 7);
//     return 0;
// }
// arrange
// #include <iostream>
// using namespace std;

// void arrange(int arr[], int n)
// {
//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0)
//         {
//             if (i != j)
//                 swap(arr[i], arr[j]);
//             j++;
//         }
//     }
// }
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }

// int main()
// {
//     int arr[] = {5, -3, 6, -2, 9, 8, -4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     arrange(arr, n);
//     printArray(arr, n);
//     return 0;
// }

// union
//  #include <iostream>
//  #include <set>
//  using namespace std;
//  void getUnion(int a[], int n, int b[], int m)
//  {

//     set<int> u;

//     for (int i = 0; i < n; i++)
//         u.insert(a[i]);

//     for (int i = 0; i < m; i++)
//         u.insert(b[i]);

//     cout << "Union is:" << endl;
//     for (auto itrr = u.begin(); itrr != u.end(); itrr++)
//         cout << *itrr << " ";
// }

// int main()
// {
//     int a[5] = {5, 4, 2, 4, 3};
//     int b[7] = {1, 3, 4, 5, 3, 6, 3};

//     getUnion(a, 5, b, 7);
// }
// linear search

// #include <iostream>
// using namespace std;
// bool search(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int arr[10] = {1, 3, 4, 5, 6, 7, 8, 3, 4, 7};
//     int key;
//     cin >> key;
//     bool found = search(arr, 10, key);
//     if (found)
//     {
//         cout << "key is present" << endl;
//     }
//     else
//     {
//         cout << "key is absent" << endl;
//     }
//     return 0;
// }