#include <iostream>
#include <string>
#include <sstream> // Include the library that will allow you to convert from string to integer


int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  int a,b,c,m;  //varible declration
   
   std::cout << "Enter 3 Numbers :" ;    // Ask the user for 3 integers as input

    std::cin >> a >> b>> c;     // The user should enter all integers on the same line, pressing enter only once


   m=a*b*c; // Multiply the three integers

   std::cout << std::endl <<"The result after multiplying three numbers is "<< m;    // Output the result of the multiplication



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string str1,str2,str3;  //string declaration;

  // Ask the user for three strings and output a haiku poem
    
   std::cout << std::endl << "Enter the first line of Haiku Poem: " << std::endl;  
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
   getline(std::cin, str1); 
   std::cout << std::endl << "Enter the second line of Haiku Poem: " << std::endl;    
    getline(std::cin, str2);
   std::cout << std::endl << "Enter the third line of Haiku Poem: " << std::endl;  
    getline(std::cin, str3);  

    std::cout << std::endl << str1 << std::endl << str2 << std::endl << str3 << std::endl; 
    
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html












  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
  int myInt;
  std::stringstream(myNumber) >> myInt;
  
  std::cout << myInt << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}