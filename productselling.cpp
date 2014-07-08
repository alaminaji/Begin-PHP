//no purpose to create this program just practicing with c++.
//written by alaminaji.
//Product Selling Price.
//program compile yet.
#include <iostream>
using namespace std;

struct chocoJuice {
  int choco;
  int water;
  int price;
  int sum;
};

int main()
{
  int cho, wat, pri, sumi = 0;  //variable for storing input
  chocoJuice product;          //instance for product
  
  cout <<"How much Chocolate price:";
  cin >>cho;
  product.choco = cho;
  cout <<"How much Mineral Water price:";
  cin >>wat;
  product.water = wat;
  cout <<"How much price one cup of ChocoJuice:";
  cin >>pri;
  product.price = pri;
  product.sum = pri * wat * cho; //getting sum value of one chocoJuice
  cout <<"How much do you want to produce:"
  cin >>sumi;
  
  cout <<"\n\n";
  cout <<"The total of your product is:"<<sumi * product.sum<<" \n\n"; //getting the total product
  system("PAUSE");
  return 0;
}
