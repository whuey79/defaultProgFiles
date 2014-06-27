#include <iostream>

using namespace std;

class A {
	private:
	  int value;
	public:
	  A(int val1) { value=val1;}
	  int get(void) { return value; }
};

class B {
  private:
	int value2;
  public:
	B(int val2) {value2=val2;}
	int get(void) {return value2; }
	int getThis(A *some) 
	{ 
		value2 = some->get();
		return value2;
	}
};

int main (int argc, char * const argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
	
	A *test = new A(1);
	B *me = new B(2);
	
	cout << "A: " << test->get() << " B: " << me->get() << endl;
	cout << "A: " << test->get() << " B: " << me->getThis(test) << endl;
	
    return 0;
}
