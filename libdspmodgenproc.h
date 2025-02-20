/*
	libdspmodgenproc.h
	Library: DSP
	Module: General Processing
	Authors: SchponzeePlusPlus (GH)
	Created On: 18/08/2024

	Description:
	... 
*/

#ifndef INCLUDES_LIBDSPMODGENPROC_H_
#define INCLUDES_LIBDSPMODGENPROC_H_

// Call necessary modules/libraries via header files here

#include "Arduino.h"

// Call component specific program modules
// Relevant modules are called in .cpp file

// Specify a namespace here
// No namespaces are specified in this file

// Declare class objects here
// No objects are created in this file

// Declare global constants here
// "Magic numbers" are assigned as global constants

//	const float CONST_IDENTIFIER = CONST_VAL;

// Hysteresis error tolerances allowed between two LDR sets
//const float LDR_REF_R_EW_SETS_HYSTERESIS = 0.03;

// Factors to a influence the effects of an LDR set in a comparison
// const float LDR_REF_R_EAST_SET_BIAS_FACTOR = 1.0;

// for future use in turning off the ldrs
//	const float LDR_REF_R_AVE_MIN = 0.05;

// Declare enumerators


// Declare a global constant

// Define records or structs


/**
	@brief 
*/
bool chkDigSigEdgRisng(bool bo_digSigCurrSmpl, bool bo_digSigPrevSmpl);

/**
	@brief
	@param
	@return
*/

bool chkDigSigEdgFallng(bool bo_digSigCurrSmpl, bool bo_digSigPrevSmpl);

bool chkDigSigEdgNoChng(bool bo_digSigCurrSmpl, bool bo_digSigPrevSmpl);

bool chkDigSigEdgRisngExclusvly(bool bo_chkdigSigEdgRisng, bool bo_chkdigSigEdgFallng, bool bo_chkdigSigEdgNoChng);

bool chkDigSigEdgFallngExclusvly(bool bo_chkdigSigEdgRisng, bool bo_chkdigSigEdgFallng, bool bo_chkdigSigEdgNoChng);

bool chkDigSigEdgNoChngExclusvly(bool bo_chkdigSigEdgRisng, bool bo_chkdigSigEdgFallng, bool bo_chkdigSigEdgNoChng);

bool latchDigSigPulsPerUndefnd(bool bo_chkDigSigEdgRisngExclusv, bool bo_chkDigSigEdgFallngExclusv, bool bo_chkDigSigEdgNoChngExclusv);

#endif