#include "mat.hpp"
#include <iostream>
#include <vector>
using namespace std;
namespace ariel {
    
	string mat(int a,int b,char c,char d){
        const int mnum = 33;
        const int mnum2 = 126;
        //https://rollbar.com/blog/error-exceptions-in-c/
          if (a%2==0 || b%2==0)
      {
         throw invalid_argument("Mat size is always odd \n");
    
         
      }
      if (a<=0 || b<=0 )
      {
         throw invalid_argument("The row and column number is always positive \n");
         
         
      }
      if 
       (!(c >= mnum && c <= mnum2) || !(d >= mnum && d <= mnum2))
      {
        throw invalid_argument("the symbols needs to be char \n");
      }
    
     
    
	int m = b;
    int n =a;
    vector <vector<int>>numbers(m,vector<int>(n));
    //init the matrix
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
             numbers[i][j]  = 0;
        }
    }


    //turn into steps of numbers in matrix:like so
    //00000
    //01111
    //01222
    //01233
    //01234
	for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if(numbers[i-1][j]==numbers[i][j-1]){
				numbers[i][j]= numbers[i-1][j]+1;
			}
		          else if (max(numbers[i-1][j],numbers[i][j-1])==0){
				      numbers[i][j] = 1;
            }
            else {
				numbers[i][j]=max(numbers[i-1][j],numbers[i][j-1]);
			}
        }
    }
//copy the matrix a;
vector <vector<int>>copy(m,vector<int>(n));
    //init the matrix
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
             copy[i][j]  = numbers[i][j];
        }
    }

          
    //we compare the values of the "rotated" matrix by 180 degrees
   
    //finding the min of matrix a and b
    
    //0 0 0 0 0       4 3 2 1 0
    //0 1 1 1 1       4 3 2 1 0
    //0 1 2 2 2  min  4 3 2 1 0
    //0 1 2 3 3       3 3 2 1 0
    //0 1 2 3 4       2 2 2 1 0
    //0 1 2 3 4       1 1 1 1 0
    //0 1 2 3 4       0 0 0 0 0
    //and if the min is odd = 1 even = 0 
    //the result:
    //0 0 0 0 0
    //0 1 1 1 0
    //0 1 0 1 0
    //0 1 0 1 0
    //0 1 0 1 0
    //0 1 1 1 0
    //0 0 0 0 0
    //finaly, if 0: fisrt char,id 1: second char:
    /* Should print:if mat(13, 5, '@', '-') 
@@@@@@@@@@@@@
@-----------@
@-@@@@@@@@@-@
@-----------@
@@@@@@@@@@@@@
*/
// replcing from vector to string
    string final;
	 for (int i = 0,k=m-1; i < m || k>=0; i++,k--) {
        
            for (int j = 0,p=n-1; j < n|| p>=0; j++,p--) {
            
           int m = min(numbers[k][p],copy[i][j]);
           if(m%2==0){
               final += c;
           }else{
                final += d;
           }
        }
	
        final += '\n';

    }
        return final;
      

        
    }
}
 
    