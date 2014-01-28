#include <string>
#pragma once
class strategy
{
public:
	strategy(void);
	~strategy(void);
	virtual void drawtree(int) = 0;
};

class simple: public strategy
{
public:
	char element;
	simple();
	~simple();
	void drawtree(int);
};

class royal: public strategy
{
public:
	char element1;
	char element2;
	royal();
	~royal();
	void drawtree(int);
};

class premium: public strategy
{
public:
	char element1;
	char element2;
	premium();
	~premium();
	void drawtree(int);
};

