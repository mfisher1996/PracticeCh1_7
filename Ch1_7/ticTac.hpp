/*
   ticTac.hpp
   Ch1 Programing exercize 7
*/
#include <iomanip>
#include <iostream>

class TicTac{
public:
	void print();
	void move(int row, int collumn);
	int getTurn();	
private:
	int turn = 0;
	char board[3][3] ={{'-','-','-'},{'-','-','-'},{'-','-','-'}};
};
