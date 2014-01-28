#include "strategy.h"
#pragma once

class root
{
public:
	root(void);
	~root(void);
	void setwidth(int);
	int getwidth();
	strategy* chtree;
private:
	int width;
};
