//projet 2013

#include <stdio.h>
#include <iostream>
#include "prj.h"
#include <string>
using namespace std;

struct listeMots
{
	string mot;
	listeMots* lien;
};

struct place
{
	int endroit;
	place* lien;
};

typedef place* lieux;
typedef	listeMots* words;

words rendreVide()
{
	words liste = NULL;
	return liste;
}

int main()
{
	
}