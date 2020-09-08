#include <iostream>
using namespace std;

int main()
{
    // var to set number of rows to consider 
    int numRows; 
    while (numRows != -1) { // will input -1 when end reached
       cin >> numRows; 
       if (numRows == -1) { // exit condition
          break; 
       }
       else { // otherwise 
          // arrays to hold distance traveled for elapsed amount of time 
          int distance[numRows];
          int elapsedTime[numRows]; 
          // iteratively store distance, elapsed time into arrays 
          for(int i=0; i<numRows;i++){
             cin >> distance[i] >> elapsedTime[i];
          }
          
          int timeDifferential[numRows-1]; // array to hold time spent between measurements
          int totalDistance = 0; // var to sum total distance driven
          // NOTE: CALCULATIONS CANNOT OCCUR IN SAME FOR LOOP INPUTS ARE STORED INTO ARRAYS
          // This is because calculations require information from inputs not yet stored 
          for(int i =0; i<numRows;i++){
             // calc time spent at given mph 
             timeDifferential[0] = elapsedTime[0];
             timeDifferential[i+1] = elapsedTime[i+1] - elapsedTime[i];
             // calc total distance driven
             totalDistance = totalDistance + timeDifferential[i]*distance[i]; 
          }
          cout << totalDistance << " " << "miles" << endl;
       }
    }
    return 0;
}
