/**
 * Running example for the "snowman" function
 * 
 * Author: Shlomo Glick
 * Since : 2021-03
 */

#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;


int main() {




    cout << ariel::snowman(41141211) << endl; 
    cout << ariel::snowman(22331132) << endl;
    cout << ariel::snowman(43124432) << endl;
	cout << ariel::snowman(11332244) << endl; 
    cout << ariel::snowman(32143214) << endl;
    cout << ariel::snowman(12121244) << endl; 
	cout << ariel::snowman(31112211) << endl; 
    cout << ariel::snowman(11331134) << endl;

    cout <<  "He says hello to you" << endl; 
    cout << ariel::snowman(11331234) << endl;
	cout << ariel::snowman(11331334) << endl; 
    cout <<  "He winks at you, winks at him back!" << endl; 
    cout << ariel::snowman(11311334) << endl;
    cout << ariel::snowman(11331334) << endl; 
    
    cout <<  "Try it for yourself," << endl; 
    cout <<  "Enter a valid 8-digit number with each digit between 1 and 4: " << endl;
    int n=0; 
    cin >> n;

	try {
		cout << ariel::snowman(n) << endl;
	} catch (out_of_range ex) {
	 	cout << "   caught exception: " << ex.what() << endl; 
	}
    
	return 0;
}
