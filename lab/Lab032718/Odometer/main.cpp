/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 27, 2018, 10:21 AM
 * Purpose: Nested Loops  - Odometer
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <fstream>  //File Library
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;

    //Initial Variables
    out.open("Odometer.out");
    
    //Map/Process Inputs to Outputs
    for(char tn1000s='0';tn1000s<='9';tn1000s++){
        for(char n1000s='0';n1000s<='9';n1000s++){
            for(char n100s='0';n100s<='9';n100s++){
                for(char n10s='0';n10s<='9';n10s++){
                    for(char n1s='0';n1s<='9';n1s++){
                        for(char tnths='0';tnths<='9';tnths++){
                            out<<tn1000s
                                    <<n1000s
                                    <<n100s
                                    <<n10s
                                    <<n1s
                                    <<'.'<<tnths<<endl;
                        }
                    }
                }
            }
        }
    }
    
    //Close file
    out.close();
    
    //Exit Program!
    return 0;
}

