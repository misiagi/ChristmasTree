#include "stdafx.h"
#include "strategy.h"
#include <string>
#include <iostream>

using namespace std;


strategy::strategy(void)
{
}


strategy::~strategy(void)
{
}

simple::simple(void)
{
	element='X';
}

simple::~simple(void)
{
}

void simple::drawtree(int width)
{
	int maxLength = 1;
	for(int i=0; i<width; i++) maxLength = maxLength + 2;

	int length = 1;
	for(int i=0; i<width; i++){
		int spaces = (maxLength - 1) / 2;
		for(int n=0; n<spaces; n++){
			cout << " ";
		}
		maxLength = maxLength - 2;

		for(int k=0; k<length; k++){
			cout << element;
		}

		length = length + 2;
		cout << endl;
	}
};

royal::royal(void)
{
	element1='X';
	element2='OO';
}

royal::~royal(void)
{
}

void royal::drawtree(int width)
{
	string* row = new string[width+1];
	for (int j=0; j<width+1; j++)
	{
		for (int i=0; i<width*2+1; i++)
		{
			row[j]+=" ";
		};
	};

	row[0][width]='o';

	for (int i=1; i<=width; i++)
	{
		row[i][width]='|';
		row[i][width+i]='o';
		row[i][width-i]='o';
		for (int j=1; j<i; j++)
		{
			if (j%2==1)
			{
			row[i][width+j]=element1;
			row[i][width-j]=element2;
			}
			else
			{
			row[i][width-j]=element1;
			row[i][width+j]=element2;
			};
		};
	};

		for (int j=0; j<width+1; j++)
		{
			cout << row[j] << endl;
		};


};

premium::premium(void)
{
	element1='X';
	element2='I';
}

premium::~premium(void)
{
}

void premium::drawtree(int width)
{
	string* row = new string[width+1];
	for (int j=0; j<width+1; j++)
	{
		for (int i=0; i<width*2+1; i++)
		{
			row[j]+=" ";
		};
	};

	row[0][width]='o';

	for (int i=1; i<=width; i++)
	{
		row[i][width]='|';
		row[i][width+i]='o';
		row[i][width-i]='o';
		for (int j=1; j<i; j++)
		{
			if (j%2==1)
			{
			row[i][width+j]=element1;
			row[i][width-j]=element2;
			}
			else
			{
			row[i][width-j]=element1;
			row[i][width+j]=element2;
			};
		};
	};

		for (int j=0; j<width+1; j++)
		{
			cout << row[j] << endl;
		};

};
