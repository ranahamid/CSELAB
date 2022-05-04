#include <iostream>
#include<conio.h>
using namespace std;
	 
	int main ()
	{
	    int n;
	 
	    while ( cin >> n && n ) {
	 
	        int top = 1;
	        int down = 6;
	        int east = 4;
	        int west = 3;
	        int north = 2;
	        int south = 5;
	        int temp = 0;
	 
	        while ( n-- ) 
            {
	            string str;
	            cin >> str;
	 
	            int x;
	            if ( str == "north" )
	                x = 0;
	            else if ( str == "south" )
	                x = 1;
	            else if ( str == "west" )
	                x = 2;
	            else	              
                  x = 3;
	 
	            switch (x) 
                {
	                case 0 :
	                temp = north;
	                north = top;
	                top = south;
	                south = down;
	                down = temp;
	                break;
	                case 1 :
	                temp = top;
	                top = north;
	                north = down;
	                down = south;
	                south = temp;
	                break;
	 
	                case 2 :
	                temp = top;
	                top = east;
	                east = down;
	                down = west;
	                west = temp;
	                break;
	 
	                case 3 :
	                temp = top;
	                top = west;
                    west = down;
	                down = east;
	                east = temp;
	                break;
	            }
	        }
	 
	        printf ("%d\n", top);
	    }
	    getch(); 
	    return 0;
  }
