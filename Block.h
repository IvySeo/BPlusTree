#ifndef BLOCK
#define BLOCK

#include "Node.h"
#include "Record.h"
#include "LinkedList.h"
#include "ListInterface.h"
#include <fstream>


class Block:public LinkedList<Record*>{

	private:
		Record _rec[110];
	
	
	public:
		Block();
		virtual ~Block();
		
		void fillBlocks(ifstream& infile);
		
		void outputBlocks();
		
		void insertRec();

        void deleteRec();	
		
		void modifyRec();
		
		void specificField();	
	
};

#include "Block.cpp"
#endif 
