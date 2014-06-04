#include "HWDescription/FEDescription.h"

// Implementation of the base class FEDescription to describe the basic properties and connections of each FE component

namespace HWDescription{
	
	FEDescription::FEDescription( UInt_t pShelveId , UInt_t pBeId , UInt_t pFeId, bool pStatus ) : 
	fShelveId( pShelveId ),
	fBeId( pBeId ),
	fFeId( pFeId ),
	fStatus( pStatus ){};

	FEDescription::FEDescription( UInt_t pBeId , UInt_t pFeId ) : 
	fShelveId( 0 ),
	fBeId( pBeId ),
	fFeId( pFeId ),
	fStatus( true ){};

	FEDescription::FEDescription( ) : 
	fShelveId( 0 ),
	fBeId( 0 ),
	fFeId( 0 ),
	fStatus( true) {};

	FEDescription::~FEDescription(){};

	// SetterMethods

	// Shelve Id
	UInt_t FEDescription::setShelveId( UInt_t pShelveId )
	{
	fShelveId = pShelveId;
	return fShelveId;
	}

	// BIO Board Id
	UInt_t FEDescription::setBeId( UInt_t pBeId )
	{
	fBeId = pBeId;
	return fBeId;
	}

	// Fe Id
	UInt_t FEDescription::setFeId( UInt_t pFeId )
	{
	fFeId = pFeId;
	return fFeId;
	}

	// Status
	bool FEDescription::setStatus( pStatus )
	{
	fStatus = pStatus;
	return fStatus;
	}

}
