/* #include <iostream>
using namespace std;
class Complex
{   
    int a, b;
    public:
    Complex(int , int );
    void printNumber()
    {
        cout << " Your Number is " << a << "+" << b << endl;
    }
};
Complex ::Complex(int x, int y)
{
    a=x;
    b=y;
}
 int main()
 {
    Complex a(4, 6);
    a.printNumber();
    return 0;
 }
 


#include <iostream>
using namespace std;

class Number
{
    int n;
    public:
    void printDetails()
    {
        cout << n;

    }
    Number(int n)
    {
        this->n =n;

    }
    operator int()
    {
        return n;

    }
};
int main()
{
    Number numb=100;
    
    numb.printDetails();
    int x =numb;
    cout << "The Value of x is " << x;
    return 0;
    
}
*/

#include <iostream>
using namespace std;
class Rectangle
{ int width,length,area;
 public:
  Rectangle(int w,int l)
  { width=w; length=l; area=width*length;
  }
  void output()
  { cout <<"\nLength : "<<length<<"\nWidth : "<<width<<"\nArea of rectangle : "<<area;
  }
};
class Triangle
{ int base,height;
 float area;
 public:
  Triangle(int b,int h)
  { base =b; height=h;  area=0.5*base*height;
  }
  void print()
  { cout<<"\nBase : "<<base<<"\nHeight : "<<height<<"\nArea of triangle : "<<area;
  }
  operator Rectangle()
  { Rectangle temp(base,height);
   return temp;
  }
};
int main()
{ Triangle t(10,20);
 Rectangle r=t;//Triangle to Rectangle
 t.print();
 r.output();
 return 0;
}

