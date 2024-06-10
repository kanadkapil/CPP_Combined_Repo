#include<iostream>
#include<algorithm>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r;
    r.length = 32;
    r.breadth =21;
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    return 0;
}