#include<iostream>

int main(){
   int a, b, c;
   std::cout << "Your 3 numbers: ";
   std::cin >> a >> b >> c;
   if ((a>=b)&&(a>=c))
       std::cout << "max= " << a ;
   else if ((b>=a)&&(b>=c))
       std::cout << "max=" << b;
   else if ((c>=a)&&(c>=b))
    std::cout << "max=" << c;
   //else if (a==b==c)
   else std::cout << "no max";
}