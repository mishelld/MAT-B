/**
 * Demo program for mat exercise.
 * 
 * Author: Tal Zichlinsky
 * Since : 2022-01
 */

#include "mat.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	cout << ariel::mat(1, 1, '@', '-') << endl;
/* Should print:
@
*/
	cout << ariel::mat(13, 5, '@', '-') << endl; 
/* Should print:
@@@@@@@@@@@@@
@-----------@
@-@@@@@@@@@-@
@-----------@
@@@@@@@@@@@@@
*/
 cout << ariel::mat(1, 151, '@', '-') << endl; 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  
 
  cout << ariel::mat(151, 1, '@', '-') << endl; 
/*
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
@
*/  

  cout << ariel::mat(101, 101, '@', '-') << endl;
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@---------------------------------------------------------------------------------------------------@
@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@
@-@-----------------------------------------------------------------------------------------------@-@
@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@
@-@-@-------------------------------------------------------------------------------------------@-@-@
@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@
@-@-@-@---------------------------------------------------------------------------------------@-@-@-@
@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@
@-@-@-@-@-----------------------------------------------------------------------------------@-@-@-@-@
@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@
@-@-@-@-@-@-------------------------------------------------------------------------------@-@-@-@-@-@
@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@
@-@-@-@-@-@-@---------------------------------------------------------------------------@-@-@-@-@-@-@
@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-----------------------------------------------------------------------@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-------------------------------------------------------------------@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@---------------------------------------------------------------@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-----------------------------------------------------------@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-------------------------------------------------------@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@---------------------------------------------------@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-----------------------------------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-------------------------------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@---------------------------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-----------------------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-------------------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@---------------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-----------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@---------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-----------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@---@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@---@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-----------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@---------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-----------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@---------------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-------------------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-----------------------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@---------------------------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-------------------------------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@-----------------------------------------------@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@---------------------------------------------------@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@-------------------------------------------------------@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@-----------------------------------------------------------@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@---------------------------------------------------------------@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@-------------------------------------------------------------------@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@-----------------------------------------------------------------------@-@-@-@-@-@-@-@
@-@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@-@
@-@-@-@-@-@-@---------------------------------------------------------------------------@-@-@-@-@-@-@
@-@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@-@
@-@-@-@-@-@-------------------------------------------------------------------------------@-@-@-@-@-@
@-@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@-@
@-@-@-@-@-----------------------------------------------------------------------------------@-@-@-@-@
@-@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@-@
@-@-@-@---------------------------------------------------------------------------------------@-@-@-@
@-@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@-@
@-@-@-------------------------------------------------------------------------------------------@-@-@
@-@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@-@
@-@-----------------------------------------------------------------------------------------------@-@
@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@
@---------------------------------------------------------------------------------------------------@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/


	try {
		cout << ariel::mat(10, 5, '$', '%') << endl; // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Mat size is always odd"
	}
	try {
		cout << ariel::mat(40, 50, '$', '%') << endl; // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Mat size is always odd"
	}
	try {
		cout << ariel::mat(-11, 5, '$', '%') << endl; // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // The row and column number is always positive"
	}
	try {
		cout << ariel::mat(11, -5, '$', '%') << endl; // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // The row and column number is always positive"
	}
	try {
		cout << ariel::mat(11, 5, 1, '%') << endl; // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // the symbols needs to be char"
	}
	try {
		cout << ariel::mat(11, 5, '$', 1) << endl; // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  //the symbols needs to be char"
	}
}