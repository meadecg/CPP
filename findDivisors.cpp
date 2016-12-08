
//  for loop to find integer divisors of integers
//  Created by Sean Meade on 12/7/16.
//  Copyright © 2016 Sean Meade. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
int divNum;
cout << "What number do you want to find the divisors for?\n";
cin >> divNum;
if (divNum>0)
{
    for (int i=2; i<=divNum; i++)
    {
        if (divNum % i == 0)
            cout << i << endl;;
            }
            }
            else if (divNum<0)
            for (int i = -2; i>=divNum; i--)
        {
            if (divNum % i == 0)
                cout << i << endl;;
        }
            else
            cout << "You entered zero or an invalid number\n";
}
