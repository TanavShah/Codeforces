#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
    {
	long a,b;
	for (int i=0;i<24;i++)
	    {
		cin >> a;
		cin >> b;
	    
	 char c[10];
	 char d[5];
	 for (int i=0;i<10;i++)
	 {
	     int p = (pow (10 , i));
	     c[9 - i] = (a / p) % (10) ;
	 }
	 for (int i=0;i<5;i++)
	 {
	     int p = (pow (10 , i));
	     d[4-i] = (b / p) % 10;
	 }
	/*
	
	    if (c[0] == d[0] && c[1] == d[1] && c[2] == d[2] && c[3] == d[3] && c[3] == d[3])
	    {
		cout << 1 << endl;
	    }
	    if (c[1] == d[0] && c[2] == d[1] && c[3] == d[2] && c[4] == d[3] && c[5] == d[3])
              {
		                       cout << 1 << endl;
				       }
		if (c[2] == d[0] && c[3] == d[1] && c[4] == d[2] && c[5] == d[3] && c[6] == d[3])
		               {
		                                        cout << 1 << endl;
		                                        }
		if (c[3] == d[0] && c[4] == d[1] && c[5] == d[2] && c[6] == d[3] && c[7] == d[3])
		     {
			 cout << 1 << endl;
			     }
		if (c[4] == d[0] && c[5] == d[1] && c[6] == d[2] && c[7] == d[3] && c[8] == d[3])
		                         {
			                            cout << 1 << endl;
			                                 }
		if (c[5] == d[0] && c[6] == d[1] && c[7] == d[2] && c[8] == d[3] && c[9] == d[3])
		                                             {
			                                                       cout << 1 << endl;
			                                                             }
		     
		 */    
		     
		
	    if((c[0] == d[0] && c[1] == d[1] && c[2] == d[2] && c[3] == d[3] && c[4] == d[3]) ||
		(c[1] == d[0] && c[2] == d[1] && c[3] == d[2] && c[4] == d[3] && c[5] == d[3]) ||
		(c[2] == d[0] && c[3] == d[1] && c[4] == d[2] && c[5] == d[3] && c[6] == d[3]) || 
		(c[3] == d[0] && c[4] == d[1] && c[5] == d[2] && c[6] == d[3] && c[7] == d[3]) || 
		(c[4] == d[0] && c[5] == d[1] && c[6] == d[2] && c[7] == d[3] && c[8] == d[3]) ||
		(c[5] == d[0] && c[6] == d[1] && c[7] == d[2] && c[8] == d[3] && c[9] == d[3]))

	    {
		cout << 1 << endl;
	    }
	    else
	    {
		cout << 0 << endl;
	    }
	}
	 return 0;
    }
