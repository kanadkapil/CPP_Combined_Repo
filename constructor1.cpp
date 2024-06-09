/*
#include<iostream>

using namespace std;
class book{
    int page;
    public:
    book(){
        page = 321;
        cout<<"The name of the book:- Merchant of Venice";
        cout<<"\nPages of book "<<page<<endl;
    }
};
int main()
{
    book cp;
    return 0;
}
*/


#include<iostream>

using namespace std;
class baar{
    int drink;
    int people;
    public:
    baar(int d, int p){
        drink = d;
        cout<<"Enter the  number of drink "<<endl;
        cin>>drink;
        people  = p;
        cout<<"Enter the people"<<endl;
        cin>>people;
    }
    int total_cash(){
        return drink*people;
    } 
};
    
int main()
{
    baar b(100,100);
    cout<<"The total bill is  : "<< b.total_cash()<<endl;

    return 0;
}