//This project for purpose learning only.
//written by alaminaji
//Student Database System
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ofstream myfile;
	myfile.open ("example.txt");
	myfile <<"Student\t\t\tCourse.\n";
	myfile <<"=======\t\t\t======\n"; 
	myfile <<"Alamien" << "\t\t\t" << "IT\n";
	myfile.close();

  return 0;
}
