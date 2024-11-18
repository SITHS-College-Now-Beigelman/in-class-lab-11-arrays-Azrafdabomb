// Azraf Hossain
// 11/4/24
// Lecture 11

#include <cmath> // Includes cmath
#include <iostream>//Includes iostream
#include <iomanip>// Includes iomanip 
#include <cstdlib> //Includes cstdlib
#include <ctime> //includes ctime
using namespace std ;

int main(){

  const int ARRAY_SIZE = 50;
  double alpha[ARRAY_SIZE];
  int i=0;
  double total;
  int hundredOccurence=0; //defines variables

  for( i=0;i<50;i++) //Sets condition for for loop
  {
    if(i<25) //If statemnent
    {
      alpha[i]= pow(i,2); //squares variable i
      cout << alpha[ i] << " "; //outputs statement
    }
    else
    {
      alpha[i]= i*3; // multiplies i by 3
      cout << alpha[i] << " "; //output statement
    }
      if ((i+1)%10==0) //if statement
      cout << endl; //new line  
  }
cout << "Randomly generated numbers " << endl; //outputs statement
    for(i=0;i<=50;i++)//Sets condition for for loop
    {
      alpha[i]=   rand() % 100 + 1; //generates random nummber  
      total += alpha[i]; //adds current i value to total
      cout << alpha[i] << " "; //outputs statement
      
      if (i==100) //if statement
     {
      hundredOccurence +=1; // adds one to hundredOccurence

      cout << "There is " <<hundredOccurence << "occurence of 100" << endl; //outputs statement
     }
    }
    double avg = total/50; 
    if (hundredOccurence==0)
    cout << "There are no occurences of 100" << endl; //outputs statement
  
    return 0;
    
}