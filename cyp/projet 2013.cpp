//projet 2013

#include <stdio.h>
#include <iostream>
#include "prj.h"
#include <string>
using namespace std;

struct place
{
	int endroit;
	place* lien;
};

typedef place* lieux;

struct listeMots
{
	string mot;
	lieux line;
	listeMots* lien;
};

typedef	listeMots* words;

words CreateIndex()
{
	words index = NULL;
	return index;
}

void afficherIndex(words tIndex)
{
	if(tIndex != NULL)
	{
		cout<<tIndex -> mot<<":";
		if (tIndex -> line != NULL)
		{
			cout<<tIndex -> line.endroit;
		}
		cout<<endl;
	}
}

void buildKeyWordIndex (words tIndex)
{
	tIndex = new listeMots;
	cout<<"Quel mot désirez vous chercher?"<<endl;
	cin>>tIndex -> mot;
	tIndex -> line = NULL;
	tIndex -> lien = NULL;
	cout<<"Desirez vous chercher un autre mot?(o/n)  ";
	char c;
	cin >> c;
	if(c == 'o' || c == 'O')
	{
		buildKeyWordIndex(tIndex -> lien);
	}
}

void searchKeyWordsInsertLines(words tIndex)
{
	FILE* f = fopen("test.txt","wb");
	fclose(f);

}

void visit()
{

}

int main()
{
	//Création de la structure pour l’index
	words tIndex = CreateIndex ();
	//Construire l’index avec les mots clés.
	buildKeyWordIndex (tIndex);
	//Compléter l’index avec les lignes par rapporté un fichier donné
	searchKeyWordsInsertLines(tIndex);
	//Affichage et génération d’un fichier avec le résultat.
	visit ();
	afficherIndex(tIndex);
}
