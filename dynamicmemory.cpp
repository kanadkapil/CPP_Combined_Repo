// You are using GCC
// You are using Java
/*#include <iostream>
using namespace std;
class Array
{
    int *arr;
    int size;
    public:
    void get_data(int n)
    {
        size = n;
        arr = new int[size];
        for(int i = 0; i < size ; i++)
        {
            cin>>arr[i];
        }
    }
    int get_sum()
    {
        int sum = 0;
        for(int i =  0 ; i < size; i++)
        {
            sum+= arr[i];
        }
        return sum;
    }
    void display_data()
    {
        for(int i = 0;i<size;i++)
        {
            cout<<"\t"<<arr[i];
        }
        cout<<"\n Sum of elements = "<<get_sum();
    }
    ~Array()
    {
        delete arr;
        cout<<"\n Memory deallocated";
    }
};
int main()
{
    Array a;
    int n ;
    cout<<"\n Enter the number of elements:"<<endl;
    cin>>n;
    a.get_data(n);
    a.display_data();
    return 0;
} 






#include<iostream>
#include<string.h>
using namespace std;


class string1
{
    private:
    char* str;
    public:
    string1(char* s)
    {
        int length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
    ~string1()
    {
        cout<<"Deleting str\n";
        delete[] str;
        
    }
    void display()
    {
        cout << str << endl;
    }
    
};



int  main()
{
    string1 s1("This is  DMA example for string");
    cout<< "s1 = ";
    s1.display();
    return 0 ;
}


#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class Employee
{
    int id;
    float salary;
    public:
    void input()
    {
        cout<<"\n Enter id:";
        cin>>id;
        cout<<"\n Enter salary:";
        cin >>salary;
        
    }
    void display()
    {
        cout<<"\n" <<id<<" "<<salary;
    }
};
int main()
{
    int n ; 
    cout<<"\n Enter number of Employee:";
    cin>> n;
    Employee *p=new Employee[n];
    Employee *d=p;
    Employee *flag=p;
    if(p==NULL)
    {
        cout<<"\n Memory allocation failure";
        exit(1);
    }
    for(int i = 0; i <n ; i++)
    {
        p->input();
        p++;
    }
    for(int i = 0; i < n; i ++)
    {
        d->display();
        d++;
    }
    delete flag;
    return 0;
}



#include <iostream>
using namespace std;
class sample {
    public:
    sample(){
        cout<< "Constructor called"<<endl;
        
    }
    ~sample()
    {
        cout <<"Destructor called"<<endl;
        
    }
};

int main()
{
    int n;
    cout<<"\n Enter no of objects:";
    cin>>n;
    sample* obj1 = new sample[n];
    delete [] obj1;
    return  0;
}




#include<iostream>
using namespace std;
class example1{
    char* ptr;
    public:
    example1()
    {
        ptr = new char[8];
        ptr = "Dynamic";
    }
    void show()
    {
        cout<<ptr<<endl;
    }
};
int main()
{
    example1 *ptr = new example1;
    ptr->show();
}



#include <iostream>
using namespace std;
class  Array
{
    private:
    int *arr;
    int n;
    public:
    Array();
    void show_data();
    
};
Array::Array()
{
    cout<<"\n Enter size:";
    cin>>n;
    arr = new int[n];
    cout<<"\n Enter the elements:";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
        
    }
}
void Array::show_data()
{
    for(int i = 0;i < n ; i++)
    {
        cout<<" "<<arr[i];
    }
}
int main ()
{
    int no_object;
    cout<<"\n Enter no of objects:";
    cin>>no_object;
    Array *ptr=new Array[no_object];
    for(int i = 0; i <no_object;i++)
    {
        ptr->show_data();
        ptr++;
    }
    
    return 0 ;
}

*/

#include <iostream>
using namespace std;
class Complex
{   
    int a, b;
    public:
    Complex(void);
    void printNumber()
    {
        cout << " Your Number is " << a << "+" << b << endl;
    }
};
Complex ::Complex(void)
{
    a=10;
    b=20;
}
int main()
{
    Complex C;
    C.printNumber();
    return 0;

}




 