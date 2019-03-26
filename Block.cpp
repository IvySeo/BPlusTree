#include <iostream>
#include <fstream>
#include <string>
#include "Block.h"
#include "LinkedList.h"
using namespace std;


// CSCI 331
// Progaming Systems
//
// FILE: Block.cpp
//
// CLASS USED: Block
//
//
// TYPEDEF and MEMBER CONSTANTS for the Record class:
// Record:: rec[100] _zip[5]      an array of size 100 used to store the records
//--------------------------------------------------------------------------------------------
// CONSTRUCTOR for the Block class:
//   Block( )
//     Postcondition: The block has been initialized as an empty block.
//---------------------------------------------------------------------------------------------
// DECONSTRUCTOR for the block class:
//   ~block()
//     Postcondition: The block has been deleted.
//---------------------------------------------------------------------------------------------
// MODIFICATION MEMBER FUNCTIONS for the Record class:
//	void fillRecords(fstream& file);
//		Postcondition: the block is filled with the records							
//------------------------------------------------------------------------------------------



Block::Block(){


}/** Creates a new Block.
    @post  If successful, A block is created.
    @param  none.
    @return  Constructor, no return type */	
    
Block::~Block(){
}


void Block::fillBlocks(ifstream& infile)
{	
	char zip[7];
	char city[50];
	char state[4];
	char county[50];
	char lat[10];
	char lon[10]; 
	int x=0;
	while (!infile.eof())
	{  
		for(int i=0; i<100; i++)
		{
			if(infile.eof())
				break;
				
			_rec[i] = Record();
			
			infile >> zip;
			_rec[i].setZip(zip);
			
			infile >> city;
			_rec[i].setCity(city);			
			
			infile >> state;
			_rec[i].setState(state);
			
			infile >> county;
			_rec[i].setCounty(county);
			
			infile >> lat;
			_rec[i].setLat(lat);
			
			infile >> lon;
			_rec[i].setLongi(lon);			
		}	
		
		Record* r[100];
		r[x]=_rec;
	
		insert(x+1, r[x]);
		
		x++;

	}

}	
	/** Fills the block with records.
    @post  If successful, the Block is returned to the function call, full of records.
    @param  the input file
    @return  none */
    
void Block::outputBlocks(){
	int x=0;
	for(int i=0; i<getLength(); ++i){
	
		Record* r={getEntry(i+1)};
		
		for(; r<=getEntry(i+1)+100; r++){
			cout <<x<<": "<<r->getZip()<<" "<<r->getCity()<<" "<<r->getState()<<" "<<r->getCounty()<<" "<<r->getLat()<<" "<<r->getLong()<<endl;
			x++;
		}
	}
}

void Block::insertRec(){
	Record newRec;
	
		char zip[7];      //
		char city[50];    //
		char state[4];    //
		char county[50];  //
		char lat[10];      //
		char longi[10];    //
	
	cout <<"Enter the zip of the new record."<<endl;
	cin >> zip;
	newRec.setZip(zip);

	cout <<"Enter the City of the new record."<<endl;
	cin >> city;
	newRec.setCity(city);
	
	cout <<"Enter the State of the new record."<<endl;
	cin >> state;
	newRec.setState(state);
	
	cout <<"Enter the County of the new record."<<endl;
	cin >> county;
	newRec.setCounty(county);
	
	cout <<"Enter the latitude of the new record."<<endl;
	cin >> lat;
	newRec.setLat(lat);
	
	cout <<"Enter the longitude of the new record."<<endl;
	cin >> longi;
	newRec.setLongi(longi);
	
	Record* checkRec=getEntry(1);
	
	for(int i =1; i<getLength(); i++){
		
		
		if (newRec.getZip()<checkRec->getZip()){
		
			_rec[101]=newRec;
		}
		
		else
			checkRec=getEntry(i+1);		
	}
	
}

void Block::deleteRec(){
	cout <<"What is the zip code for the record you'd like to delete?"<<endl;
	
	char zip[5];
	
	cin >>zip;
	
	const char* help=zip;
	
	char tombs[3]={'x', 'x', 'x'};

	
	for(int x=1; x<getLength(); x++){
		Record* recToDel=getEntry(x);
		for(int i=0; i<100; i++){
		
			if(help=_rec[i].getZip()){
				_rec[i].setZip(tombs);
				_rec[i].setCity(tombs);
				_rec[i].setState(tombs);
				_rec[i].setCounty(tombs);
				_rec[i].setLat(tombs);
				_rec[i].setLongi(tombs);
				break;
			}
			
			else
				recToDel++;
	
		}
	}
}

void Block::modifyRec(){
	deleteRec();
	insertRec();
}

void Block::specificField(){
	cout <<"What is the zip code for the record you'd like view?"<<endl;
	
	char zip[5];
	
	cin >>zip;
	
	const char* help=zip;

	
	for(int x=1; x<getLength(); x++){
		Record* recToDel=getEntry(x);
		for(int i=0; i<100; i++){
		
			if(help=_rec[i].getZip()){
				cout <<"What field would you like to display?"<<endl;
				cout <<"1. City"<<endl;
				cout <<"2. State"<<endl;
				cout <<"3. County"<<endl;
				cout <<"4. Latitude"<<endl;
				cout <<"5. Longitude"<<endl;	
				
				int choice;
				
				cin >>choice;
				
				if(choice==1){
					cout <<_rec[i].getCity();
				}
				
				else if(choice==2){
					cout <<_rec[i].getState();
				}
				
				if(choice==3){
					cout <<_rec[i].getCounty();
				}
				
				if(choice==4){
					cout <<_rec[i].getLat();
				}
				
				if(choice==5){
					cout <<_rec[i].getLong();
				}
				
				break;
			}
			
			else
				recToDel++;
		}
	}
}
