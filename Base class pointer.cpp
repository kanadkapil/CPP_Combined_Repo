// C++ program to Demonstrate the
// implementation of the base class
// pointer pointing to derived class
#include <iostream>
using namespace std;

// Base Class
class BaseClass {
public:
	int var_base;

	// Function to display the base
	// class members
	void display()
	{
		cout << "Displaying Base class"
			<< " variable var_base: " << var_base << endl;
	}
};

// Class derived from the Base Class
class DerivedClass : public BaseClass {
public:
	int var_derived;

	// Function to display the base
	// and derived class members
	void display()
	{
		cout << "Displaying Base class"
			<< "variable var_base: " << var_base << endl;
		cout << "Displaying Derived "
			<< " class variable var_derived: "
			<< var_derived << endl;
	}
};

// Driver Code
int main()
{
	// Pointer to base class
	BaseClass* base_class_pointer;
	BaseClass obj_base;
	DerivedClass obj_derived;

	// Pointing to derived class
	base_class_pointer = &obj_derived;

	base_class_pointer->var_base = 34;

	// If you uncomment this line of code this will cause
	// the following error As base-class pointer cannot
	// access the derived class variable.
	// base_class_pointer->var_derived = 98;
	// output: error: ‘class BaseClass’ has no member named
	// ‘var_derived’

	// Calling base class member function
	base_class_pointer->display();

	base_class_pointer->var_base = 3400;
	base_class_pointer->display();

	DerivedClass* derived_class_pointer;
	derived_class_pointer = &obj_derived;
	derived_class_pointer->var_base = 9448;
	derived_class_pointer->var_derived = 98;
	derived_class_pointer->display();

	return 0;
}

