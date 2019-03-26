#include "Header.h"
#include <cstring>
#include <c

Header::Header()
{
	stale=false;
}

void Header::addedblock(int record)
{
	blockcountinc++;
	recordcount+=record;
}
void Header::intialfill(int blocks)
{
	blockcount=blocks;
	recordcount=blockcount*Maxsize;
	blocksize=sizeof(Record)*100;
}
void Header::flagoff()
{
	stale=false;
}
void Header::flagon()
{
	stale=true;
}

void Header::setfirstblockptr(Block* ptr)
{
	firstblockptr=ptr;
}
void Header::setavialblockptr(Block* ptr)
{
	availblockptr=ptr;
}
int Header::getrecordcount()
{
	return recordcount;
}
int Header::getblockcount()
{
	return blockcount;
}
string Header::getdescription()
{
	return description;
}
bool Header::getstale()
{
	return stale;
}
int getMaxsize()
{
	return Maxsize;
}
int getFieldsperRecord()
{
	return FieldsperRecord;
}
Block* Header::getfirstblockptr()
{
	return firstblockptr;
}
Block* Header::getavailblockptr()
{
	return availblockptr;
}
void Header::Print(ofstream& outfile)
{
	cout << boolalpha<< endl;
	outfile<<" Header" << endl<<"File type blocks" << endl <<  decription << endl << "Block byte size: " << blocksize <<endl; <<"Block Max Size: " << Maxsize << "          "<< "Block Minimum Size: " << Maxsize/2 << endl << "Stale" << stale << endl;
	outfile<< "First block pointer" << firstblockptr << "         "<< " Next avialable block ptr" <<availblockptr <<endl << "Block count: " << blockcount << "         " << "Record count: " << endl;
	outfile << "-----------------------------------------------------------------------------------------------------------------" << endl;
}
	