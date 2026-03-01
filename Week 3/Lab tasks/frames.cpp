#include<iostream>
using namespace std;
main()

{  
 cout << "Enter minutes:";
 int min;
 cin >> min;
 
 cout << "Enter frame per second:";
 int fps;
 cin >> fps;

 int frames;
 frames = min*60*fps;
 cout << " Total frames = " <<frames;
} 