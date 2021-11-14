//
//  lab6_1.cpp
//  L6
//
//  Created by Андрей Шарапов on 14.11.21.
//

#include "lab6_1.hpp"
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int k, proizv = 0;
    cout << "¬‚Â‰ËÚÂ k = ";
    cin >> k;
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << " " << array[i] << endl;;
    }
    int min = array[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }

    }
    proizv = min * k;
    cout << "proizv = \t\n" << proizv << endl;
    system("pause");
    return 0;

}

//update some program
