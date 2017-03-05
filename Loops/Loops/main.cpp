//
//  main.cpp
//  Loops
//
//  Created by Sean Meade on 1/29/16.
//  Copyright © 2016 Sean Meade. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    // insert code here...
    int x = 5;
    int y = 5;
    cout <<  "Is x equal to y? C++ says: " << boolalpha << (x == y) << endl;  // using == to determine if x and y are equal
    cout << "Is x greater than y? " << (x > y) << endl;
    cout << "Is x greater than OR equal to y? " << (x >= y) << endl;
    cout << "Is x less than y? " << (x < y) << endl;
    cout << "Is x less than OR equal to y? " << (x <= y) << endl;
    cout << "Is x not equal to y? " << (x != y) << endl;
    
    
    
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    
    bool isHungry = false;   // can set this to false if not hungry
    
    if ( isHungry == true ) //only go inside { when isHungry is true
    {
        cout << "Preparing snack.." << endl;
        cout << " Eating..." << endl;
        
    }
    else                    // we go here if isHungry is FALSE
    {
        cout << "I'm not hungry." << endl;
        
    }
    cout << "Sitting on the couch" << endl;
   
    
    
    
    
    cout << "\n\nHello, World!\n\n\n";
    return 0;
}
