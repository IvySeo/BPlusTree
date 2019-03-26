#ifndef   HEADER
#define   HEADER


#include "Node.h"
#include "Record.h"
#include "LinkedList.h"
#include "ListInterface.h"
#include "Block.h"
#include <cstring>

Class Header: public Block<ItemType>                         // should it inherent block, just needs to hold pointers
{
	private:
	int blocksize;
	int blockcount;
	int recordcount;
	const static int Maxsize =100;
	const static int FieldsperRecord=6;
	bool stale;
	Block* firstblockptr;
	Block* availblockptr;
	const static string description = " _zip size 5, _city size 10, _state size 2, _county size 10, _lat size 7, _longi size 7";
	
	
	public:
	// void methods
	void addedblock(int record);
	void initialfill(int blocks);
	void flagoff();
	void flagon();
	void setfirstblockptr(Block* ptr);
	void setavialblockptr(Block* ptr);
	// void get methods
	int getrecordcount();
	int getblockcount();
	string getdescription();
	boolean getstale();
	int getMaxsize();
	int getFieldsperRecord();
	Block* getfirstblockptr();
	Block* getavialblockptr();
	Header();								// constructor
	void Print(Ostream& outfile)
};
#include "Header.cpp"
#endif