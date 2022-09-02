#include <iostream>
// Visibility is how visible certain members or methods of class are , who can see them ,who can call them and who can use them
// Visibility has no effect on performance of your program it is ust for organizing code
// Three basic visibility modifers are:
// 1 private
// 2 public
// 3 protected
// default visibility of a struct is public
// default visibility of class is private
class Entity
{
protected: // means all sub classes and base class can access these functions and variables butcan't be accessed outside classes
	int P;
	void InitP()
	{
		P = 0;
		// initializes P to 0
	}

public: // Pubic methods and variables can be accessed inside and outside of the class
	int a, b;
	void Init()
	{
		a = 0;
		b = 0;
	}

private: // only entity class can read and write the variables exeption is friend
	int X, Y;
	void print()
	{
		// Content
		// only this function can be acessed inside the class unless you use friend keyword
	}

public:
	Entity()
	{
		X = 0; // can initialize x inside the class but can't access it from outside the class unsless you use friend keyword
	}
};
class Player : public Entity // class palyer is a sub class of  class Entity
{
public:
	Player()
	{
		// X = 2;	// Error can't access the private members from base class
		// print();	// can't access it in sub class because it is private
		a = 1;	 // can acces it because it is public in base class
		b = 1;	 // can acces it because it is public in base class
		Init();	 // can acces it because it is public in base class
		P = 0;	 // can access it in subclass because its visibility is protected
		InitP(); // can access it in subclass because its visibility is protected
	}
};
int main()
{
	Entity e1;
	Player a;
	// e1.x;	//error can't access private members from here
	// e1.print(); // error inaccessible due to its visibility being private
	e1.a = 5;  // can access from here because it's visibility is public
	e1.Init(); // can access from here because it's visibility is public
	a.a = 5;   // can access from here because it's visibility in base class is public
	a.Init();  // can access from here because it's visibility in base class is public
	// e1.P;	//can't access it because  visibility is protected
	// e1.InitP; //can't access it because  visibility is protected
	//  a.P;		//can't access it because  visibility is protected in base class
	//  a.InitP; //can't access it because  visibility is protected in base class
	std::cin.get();
}