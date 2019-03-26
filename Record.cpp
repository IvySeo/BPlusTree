#include <iostream>
#include <string.h>
#include "Record.h"
using namespace std;

// CSCI 331
// Progaming Systems
//
// FILE: Record.cpp
//
// CLASS USED: Record
//
//
// TYPEDEF and MEMBER CONSTANTS for the Record class:
// Record:: char _zip[5]      an array of size 5 used to store the record's Zipcode
// Record::	char _city[10]    an array of size 10 used to store the record's city
// Record::	char _state[2]    an array of size 2 used to store the record's State
// Record::	char _county[10]  an array of size 10 used to store the record's Country
// Record::	char _lat[7]      an array of size 7 used to store the record's Latitude
// Record::	char _longi[7]    an array of size 7 used to store the record's Longitude
//--------------------------------------------------------------------------------------------
// CONSTRUCTOR for the Record class:
//   Record( )
//     Postcondition: The Record has been initialized as an empty Record.
//---------------------------------------------------------------------------------------------
// MODIFICATION MEMBER FUNCTIONS for the Record class:
//	void setZip(char zip[]);
//		Postcondition: the Zipcode is changed to the inputed zipcode.								
//
//	const char* getZip();
//		Postcondition: the Zipcode is returned to the function call.			 
//
//
//	void setcity(char city[]);
//		Postcondition: the city is changed to the inputed city.								
//
//	const char* getcity();
//		Postcondition: the city is returned to the function call.			 
//
//
//	void setZip(char state[]);
//		Postcondition: the state is changed to the inputed state.								
//
//	const char* getstate();
//		Postcondition: the satte is returned to the function call.			 
//
//
//	void setCounty(char county[]);
//		Postcondition: the country is changed to the inputed country.								
//
//	const char* getZip();
//		Postcondition: the county is returned to the function call.			 
//
//
//	void setLat(char lat[]);
//		Postcondition: the latitude is changed to the inputed latitude.								
//
//	const char* getLat();
//		Postcondition: the latitude is returned to the function call.			
//
//
//	void setlongi(char longi[]);
//		Postcondition: the longitude is changed to the inputed longitude.								
//
//	const char* getLong();
//		Postcondition: the longitude is returned to the function call.		
//------------------------------------------------------------------------------------------

Record::Record(){
	
}/** Creates a new Record.
    @post  If successful, A Record is created.
    @param  none.
    @return  Constructor, no return type */	

Record::~Record(){
}	

void Record::setZip(char zip[]){
//	memcpy(_zip, zip, 5);
	for(int i=0; i<7; i++){
		_zip[i]=zip[i];
	}
		
}/** Mutates the zipcode of a Record.
    @post  If successful, the Zipcode is changed to the inputed zipcode.
    @param  the new zipcode.
    @return  Mutator, no return type */

const char* Record::getZip(){
	return _zip;
}/** Accesses the zipcode of a Record.
    @post  If successful, the zipcode is returned to the function call.
    @param  none
    @return  Returns the stored zipcode */
		
void Record::setCity(char city[]){
//	memcpy(_city, city, 17);
	for(int i=0; i<50; i++){
		_city[i]=city[i];
	}
}/** Mutates the city of a Record.
    @post  If successful, the city is changed to the inputed city.
    @param  the new city.
    @return  Mutator, no return type */

const char* Record::getCity(){
	return _city;
}/** Accesses the city of a Record.
    @post  If successful, the city is returned to the function call.
    @param  none
    @return  Returns the stored city */
		
void Record::setState(char state[]){
//	memcpy(_state, state, 3);
	for(int i=0; i<4; i++){
		_state[i]=state[i];
	}

	
}/** Mutates the state of a Record.
    @post  If successful, the state is changed to the inputed state.
    @param  the new state.
    @return  Mutator, no return type */

const char* Record::getState(){
	return _state;
}/** Accesses the state of a Record.
    @post  If successful, the state is returned to the function call.
    @param  none
    @return  Returns the stored state */
		
void Record::setCounty(char county[]){
//	memcpy(_county, county, 25);
	for(int i=0; i<50; i++){
		_county[i]=county[i];
	}
}/** Mutates the country of a Record.
    @post  If successful, the country is changed to the inputed country.
    @param  the new country.
    @return  Mutator, no return type */

const char* Record::getCounty(){
	return _county;
}/** Accesses the country of a Record.
    @post  If successful, the country is returned to the function call.
    @param  none
    @return  Returns the stored country */
		
void Record::setLat(char lat[]){
//	memcpy(_lat, lat, 10);
	for(int i=0; i<10; i++){
		_lat[i]=lat[i];
	}
}/** Mutates the latitude of a Record.
    @post  If successful, the latitude is changed to the inputed latitude.
    @param  the new latitude.
    @return  Mutator, no return type */

const char* Record::getLat(){
	return _lat;
}/** Accesses the latitude of a Record.
    @post  If successful, the latitude is returned to the function call.
    @param  none
    @return  Returns the stored latitude */
		
void Record::setLongi(char longi[]){
//	memcpy(_longi, longi, 10);
	for(int i=0; i<10; i++){
		_longi[i]=longi[i];
	}
}/** Mutates the longitude of a Record.
    @post  If successful, the longitude is changed to the inputed longitude.
    @param  the new longitude.
    @return  Mutator, no return type */

const char* Record::getLong(){
	return _longi;
}/** Accesses the longitude of a Record.
    @post  If successful, the longitude is returned to the function call.
    @param  none
    @return  Returns the stored longitude */

//strcpy_s DOES NOT WORK on terminal
//strcpy Does NOT WORK on VS. Great.
