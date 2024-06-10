#include<iostream>
#include<algorithm>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r={10,20};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    
    // struct Rectangle *p = &r;
    // cout<<p->length<<endl;
    // cout<<p->breadth<<endl;
    // return 0;

    struct Rectangle *p ;
    p  = new Rectangle;
    p->length=15;
    p->breadth=20;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}