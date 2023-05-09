#pragma once
#include <iostream>
#include <string>

#define righe 9
#define colonnee 9

using namespace std;

class Sudoku
{
private:

	int Sudoku[righe][colonnee] = {
		{0,9,3,0,5,4,0,0,0},
		{0,0,0,9,2,0,0,4,0},
		{2,0,0,0,0,0,8,0,0},
		{3,8,6,1,9,0,0,7,4},
		{0,0,0,0,0,3,0,8,1},
		{4,0,9,5,7,8,0,6,2},
		{0,2,8,7,0,0,4,0,0},
		{0,0,0,0,0,5,0,9,0},
		{9,0,1,0,0,0,7,3,0}

	};

public:

	bool TrovatoRiga(int num, int numRiga);
	bool TrovatoColonna(int num, int numColonna);
	bool TrovatoQuadrato(int num, int numRiga, int numColonna);


};

