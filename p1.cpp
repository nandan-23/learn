#include <iostream>
#include <string.h>
#include <fstream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set <string> setofwords; //defining a unordered set named setofwords
    ifstream inFile;
    inFile.open("dictionary.txt"); //to open the dictionary file
    string x;
    while (inFile>>x){
        setofwords.insert(x);
    }
    int count = 0;
    for (auto& comp :setofwords){

        for(int i=0; i<comp.size(); ++i){
        string comp1 = comp.substr(0,i); //goes till the ith character and finds substring 1
        string comp2 = comp.substr(i,comp.size()); //start from the ith character and finds substring 2
        if (setofwords.find(comp1) != setofwords.end() && setofwords.find(comp2) != setofwords.end()){ //assures that both the substrings lie in the dictionary
        //cout<<count<<" "<<comp<<" can be broken into  "<<comp1<<"   and   "<<comp2<<endl;
        count++;
        break;
        }
    }
 }
    cout<<count<<endl;// displays the number of words
    return 0;
    
}