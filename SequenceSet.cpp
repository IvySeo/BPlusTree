#include <iostream>
#include "Block.h"
#include "Record.h"
#include <fstream>



using namespace std;

int main(){
	
	ifstream inFile;
	
	inFile.open("us_postal_codes.txt");
	
	Block b;
	
	b.fillBlocks(inFile);

//	b.deleteRec();
	
//	b.insertRec();
	
	b.outputBlocks();

}

