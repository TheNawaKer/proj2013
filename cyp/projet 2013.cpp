//projet 2013

#include <stdio.h>
#include <iostream>
#include "prj.h"
#include <string>
using namespace std;

void getLineInFile (const char *filename)
 {
	// Reads the text file and prints each line of this file
	FILE * fp;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;
	fp = fopen (filename, "r"); // open the file
	if (fp == NULL)
		throw (" ERROR ");
	else 	
		while ((read = getline(&line, &len, fp)) != -1) 
		{
		cout << "Line : " << line;
		}
	if (line) delete(line);
	fclose(fp);
}

void visit(words tIndex)
{
	FILE *f = fopen("resultat.txt", "wb");  

	while (tIndex!=NULL)
	{
		string res = mot + ": ";
		string line = "";
		while(tIndex.line!=NULL)
		{
			line += (string)endroit;
			if(tIndex.line->line!=NULL)
			{
				line += ",";
			}
			tIndex.line = tIndex.line->lien;
		}
	res += line;
	fwrite(res, sizeof(res), 1, f);  
	tIndex = tIndex->lien;
	}
    fclose(f);  
}
