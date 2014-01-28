// Christmas.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <string>
#include <iostream>
#include "root.h"
#include "strategy.h"
#include <stdio.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	root mytree;
	simple* typesimple=new simple;
	royal* typeroyal=new royal;
	premium* typepremium=new premium;
	system("cls");
	mytree.setwidth(5);

	mytree.chtree=typesimple;
	mytree.chtree->drawtree(mytree.getwidth());

	cout << endl << endl;

	mytree.chtree=typeroyal;
	mytree.chtree->drawtree(mytree.getwidth());

		cout << endl << endl;

	mytree.chtree=typepremium;
	mytree.chtree->drawtree(mytree.getwidth());

	getchar();
	return 0;
}
