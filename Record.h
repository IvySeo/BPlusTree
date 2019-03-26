#ifndef RECORD
#define RECORD
#include <fstream>


// CSCI 331
// Progaming Systems
//
// FILE: Record.h
//
// CLASS PROVIDED: Record.
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
// DECONSTRUCTOR for the Record class:
//   ~Record()
//     Postcondition: The Record has been deleted.
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


class Record{
	private:
		char _zip[7];      //
		char _city[50];    //
		char _state[4];    //
		char _county[50];  //
		char _lat[10];      //
		char _longi[10];    //
		float zipToCompare;
	
	public:

		Record();/** Creates a new Record.
    @post  If successful, A Record is created.
    @param  none.
    @return  Constructor, no return type */

		virtual ~Record();/** Deletes Record.
    @post  If successful, A Record is deleted.
    @param  none.
    @return  Deconstructor, no return type */

		void setZip(char zip[]);/** Mutates the zipcode of a Record.
    @post  If successful, the Zipcode is changed to the inputed zipcode.
    @param  the new zipcode.
    @return  Mutator, no return type */

		const char* getZip();/** Accesses the zipcode of a Record.
    @post  If successful, the zipcode is returned to the function call.
    @param  none
    @return  Returns the stored zipcode */
		
		void setCity(char city[]);/** Mutates the city of a Record.
    @post  If successful, the city is changed to the inputed city.
    @param  the new city.
    @return  Mutator, no return type */

		const char* getCity();/** Accesses the city of a Record.
    @post  If successful, the city is returned to the function call.
    @param  none
    @return  Returns the stored city */
		
		void setState(char state[]);/** Mutates the state of a Record.
    @post  If successful, the state is changed to the inputed state.
    @param  the new state.
    @return  Mutator, no return type */

		const char* getState();/** Accesses the state of a Record.
    @post  If successful, the state is returned to the function call.
    @param  none
    @return  Returns the stored state */
		
		void setCounty(char county[]);/** Mutates the country of a Record.
    @post  If successful, the country is changed to the inputed country.
    @param  the new country.
    @return  Mutator, no return type */

		const char* getCounty();/** Accesses the country of a Record.
    @post  If successful, the country is returned to the function call.
    @param  none
    @return  Returns the stored country */
		
		void setLat(char lat[]);/** Mutates the latitude of a Record.
    @post  If successful, the latitude is changed to the inputed latitude.
    @param  the new latitude.
    @return  Mutator, no return type */

		const char* getLat();/** Accesses the latitude of a Record.
    @post  If successful, the latitude is returned to the function call.
    @param  none
    @return  Returns the stored latitude */
		
		void setLongi(char longi[]);/** Mutates the longitude of a Record.
    @post  If successful, the longitude is changed to the inputed longitude.
    @param  the new longitude.
    @return  Mutator, no return type */

		const char* getLong();/** Accesses the longitude of a Record.
    @post  If successful, the longitude is returned to the function call.
    @param  none
    @return  Returns the stored longitude */
		
};

#include "Record.cpp"
#endif
