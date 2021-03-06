/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on May 10th, 2018, 11:46 AM
 * Purpose: Score a test
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <fstream>  //I/O to a file
#include <iomanip>  
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 

//Function Prototypes
void rdFile(ifstream &,char [],int &);
void wrtFile(ofstream &,char [],char [],int);
int score(char [],char [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int NQSTNS=50;//Number of questions
    int nqstns;         //Number of questions from file
    char key[NQSTNS],answers[NQSTNS];//Answers and key
    char keyFlNm[]="key.dat";
    string ansFlNm="answer.dat";
    char scrFlNm[]="score.dat";
    ifstream keyFl,ansFl;
    ofstream scrFl;
    
    //Initial Variables
    keyFl.open(keyFlNm);
    ansFl.open(ansFlNm.c_str());
    scrFl.open(scrFlNm);
    
    //Map/Process Inputs to Outputs
    rdFile(keyFl,key,nqstns);
    rdFile(ansFl,answers,nqstns);
    wrtFile(scrFl,key,answers,nqstns);
    int scrs=score(answers,key,nqstns);
    //Display Outputs
    cout<<"The % Score Received = "<<100.0f*scrs/NQSTNS<<"%"<<endl;
    keyFl.close();
    ansFl.close();
    scrFl.close();
    //Exit Program!
    return 0;
}

void rdFile(ifstream & in,char keyAns[],int &cnt){
    cnt=0;
    char kyAnsVl;
    while (in>>kyAnsVl){keyAns[cnt++]=kyAnsVl;}
}
void wrtFile(ofstream & out,char key[],char ans[],int size){
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])out<<i<<". Correct"<<endl;
        else out<<i<<". Incorrect"<<endl;
    }
}
int score(char ans[],char key[],int size){
    int correct=0;
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])correct++;
    }
    return correct;
}