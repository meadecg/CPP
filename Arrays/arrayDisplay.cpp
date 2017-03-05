// This declares an array, receives input, and outputs the contents of the array.
//  Created by Sean Meade on 2/26/17.
//  Copyright © 2017 Sean Meade. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    const int NUM_MEN = 10;
    int fish[10];// Define an array named fish that can hold 10 int values.
    int count;
    for (count = 0; count < NUM_MEN; count++)
        {
        	cout << "Enter how many fish were caught by fisherman " << (count+1) << ": " << endl;
        	cin >> fish[count];
     	}
	for (count = 0; count <NUM_MEN; count++)
     	{
     		cout << "Fisherman " << (count+1) << " caught " << fish[count] << " fish." << endl;
     	}


return 0;
}

