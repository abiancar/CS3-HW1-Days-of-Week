#include <iostream>
#include <string>
#include <vector>
#include <limits.h>
using namespace std; 

    
int main() {

    signed int inputDay;
    vector <string> days = {"Monday", "Tuesday","Wednesday", "Thursday", "Friday","Saturday","Sunday"} ;

    vector <string> insults = {"Wow, you truly have no clue what you're doing!", "Some people are dropped as babies, but you bounced!", 
    "ERROR: intelligence.exe not found", "For someone like you, coding should be more of a hobby",
    "Professor Novak's cat, Spooky, is smarter than you","I am so happy I am not you right now, you must be embarassed", 
    "Why are you all the things that you choose to be?", 
    "The word \" Failure\" may not be in your dictionary... but the word \"MORON\" is written all over it!", "Woah woah you're not as smart as you look", 
    "I clearly overestimated you, I am so sorry"};
    

    
    cout << "What day of the week would you like? ";
    cin >> inputDay;
    cout << "Number: " << inputDay << endl; 
    


    
    if (inputDay >= 0 && inputDay <= 6){
        cout << "You are so within range my brother" << endl;
        cout << "Day " << inputDay << " Corresponds to " << days.at(inputDay) << endl;
        return 0; 
    
    }else if((inputDay > 6 && inputDay >SHRT_MAX)||(inputDay < 0 && inputDay > SHRT_MIN)){
        //pseudoRandom number
        int rand = inputDay % 10;
        cout << inputDay << "?!!1!?! " << insults.at(rand) << endl;
        cout << "The only valid inputs are 0 - 6." << endl; 
        return 1;


    }else{
        cout << "Invalid Value" << endl;
        return 2; 
    }

    return 0;
}