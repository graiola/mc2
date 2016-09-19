//---------------------------------------------------------------------------
//
// txmConv.h -- File contains conversion table for tile to texture
//
//	MechCommander 2
//
//---------------------------------------------------------------------------//
// Copyright (C) Microsoft Corporation. All rights reserved.                 //
//===========================================================================//

#ifndef TXMCONV_H
#include"txmconv.h"
#endif

//---------------------------------------------------------------------------
long txmToTileLookup[DEFINED_TXMS] = 
{
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,52,
	48,49,50,51,				//Dirt-1-79
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,129,
	129,130,131,132,		//GRASS-2-158
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,135,
	133,134,135,136,		//Ruff-3-237
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,149,
	149,150,151,150,		//Mountain-4-316
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,95,
	95,95,95,95,		//GrasstoDirta-5-395
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,96,
	96,96,96,96,			//GrasstoDirtb-6-474
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,97,
	97,97,97,97,			//GrasstoDirtC-7-553
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,98,
	98,98,98,98,			//GrassToDirtD-8-632
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,99,
	99,99,99,99,			//GrasstoDirtE-9-711
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,110,
	110,110,110,110,		//GrassToDirtF-10-790
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,111,
	111,111,111,111,		//GrassToDirtG-11-869
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,112,
	112,112,112,112,		//GrassToDirtH-12-948
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,113,
	113,113,113,113,		//GrassToDirtI-13-1027
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,114,
	114,114,114,114,		//GrassToDirtJ-14-1106
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,115,
	115,115,115,115,		//GrassToDirtK-15-1185
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,116,
	116,116,116,116,		//GrassToDirtL-16-1264
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,117,
	117,117,117,117,		//GrassToMounA-17-1343
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,118,
	118,118,118,118,		//GrassToMounB-18-1422
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,119,
	119,119,119,119,		//GrassToMounC-19-1501
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,120,
	120,120,120,120,		//GrassToMounD-20-1580
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,121,
	121,121,121,121,		//GrassToMounE-21-1659
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,122,
	122,122,122,122,		//GrassToMounF-22-1738
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,123,
	123,123,123,123,		//GrassToMounG-23-1817
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,124,
	124,124,124,124,		//GrassToMounH-24-1896
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,125,
	125,125,125,125,		//GrassToMounI-25-1975
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,126,
	126,126,126,126,		//GrassToMounJ-26-2054
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,127,
	127,127,127,127,		//GrassToMounK-27
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,128,
	128,128,128,128,		//GrassToMounL-28
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,28,
	28,28,28,28,		//DirtToMounA-29
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,29,
	29,29,29,29,		//DirtToMounb-30
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,30,
	30,30,30,30,		//DirtToMounC-31
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,31,
	31,31,31,31,		//DirtToMounD-32
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,32,
	32,32,32,32,		//DirtToMounE-33
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,33,
	33,33,33,33,		//DirtToMounF-34
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,34,
	34,34,34,34,		//DirtToMounG-35
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,35,
	35,35,35,35,		//DirtToMounH-36
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,36,
	36,36,36,36,		//DirtToMounI-37
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,37,
	37,37,37,37,		//DirtToMounJ-38
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,38,
	38,38,38,38,		//DirtToMounK-39
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,39,
	39,39,39,39,		//DirtToMounL-40-3160
	81,83,82,87,85,
	85,94,89,90,88,
	93,88,92,91,		
	14,0,2,4,
	8,6,12,10,			//Grass To Cliff-3182
	16,18,17,20,20,
	19,27,22,23,23,
	26,21,25,24,
	47,40,41,42,
	44,43,46,45,			//Dirt to Cliff-3204
	176,177,178,179,		//Full Water-3208
	201,205,203,209,209,
	207,213,103,105,105,
	211,101,109,107,		//Water to Grass-3222
	65,67,66,69,69,
	68,76,71,72,72,
	75,70,74,73,			//Water to Dirt-3236
	201,203,205,207,209,
	101,103,105,107,109,
	211,213,				//Lake To Grass-3248
	65,66,67,68,69,
	70,71,72,73,74,
	75,76,					//Lake To Dirt-3260
	194,193,190,188,
	187,185,196,198,
	199,180,182,183,		//Grass WaterFall-3272
	62,193,61,60,
	187,59,63,198,
	64,57,182,58,			//Dirt Waterfall-3284
	53,176,54,55,
	177,56,55,178,
	56,53,179,54,			//Dirt River-3296
	105,176,207,101,
	177,203,101,178,
	203,105,179,207,		//Grass River-3308
	148,147,147,146,
	146,145,145,148,		//grass River Mouth-3316
	143,141,141,139,
	139,137,137,143,		//Dirt River Mouth-3324
	176,177,178,179,		//Full Water--3328
	168,168,				//Concrete--3330
	-1,-1,-1,-1,			
	245,246,247,248,		//Rough Overlays-3338
	-1,-1,-1,-1,			//Forest Blocks-3342
	-1,-1,-1,-1,			//Forest Damaged-3346
	168,168,168,			//Concrete-3349
	-1,-1,-1,-1,			//Docks-3353
	-1,-1,-1,				//NULLS-3356
	257,258,				//Dirt to Paved Road-3358
	-1,-1,					//Grass Tacos-3360
	-1,-1,					//Dirt Tacos-3362
	65,67,66,69,69,
	68,76,71,72,72,
	75,70,74,73,			//Water to Dirt-3376
	201,205,203,209,209,
	207,213,103,105,105,
	211,101,109,107,		//Water to Grass-3390
	-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,	//Medium Walls-3409
	-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,	//Medium Walls Destroyed-3428
	-1,-1,					//Crops-3430
	-1,-1,-1,-1,			//Forest Corner-3434
	-1,-1,-1,-1,			//Forest Edge-3438
	-1,-1,-1,-1,			//Forest Corner Dmg-3442
	-1,-1,-1,-1,			//Forest Edge Dmg-3446
	164,167,163,163,166,165,	//Runways-3452
	164,167,163,163,166,165,	//Runways-3458
	-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,	//Light Walls-3477
	-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,	//Light Walls Destroyed-3496
	-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,	//Heavy Walls-3515
	-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,		//Heavy Walls Destroyed-3534
	230,230,230,231,231,231,	
	232,233,234,235,236,237,
	238,239,240,241,242,243,244,	//Dirt Roads-3553
	215,215,215,216,216,216,			
	217,218,219,220,221,222,			
	223,224,225,226,227,228,229,		//Paved Roads-3572
	253,254,255,256
};

// 0 		= CLFTXR1.TGA
// 1		= CLFTXR1B.TGA
// 2 		= CLFTXR2.TGA
// 3 		= CLFTXR2B.TGA
// 4 		= CLFTXR3.TGA
// 5 		= CLFTXR3B.TGA
// 6 		= CLFTXR4.TGA
// 7 		= CLFTXR4B.TGA
// 8 		= CLFTXR5.TGA
// 9 		= CLFTXR5B.TGA
// 10 		= CLFTXR6.TGA
// 11 		= CLFTXR6B.TGA
// 12 		= CLFTXR7.TGA
// 13 		= CLFTXR7B.TGA
// 14 		= CLFTXTR.TGA
// 15 		= CLFTXTRB.TGA
// 16 		= D2C0000.TGA
// 17 		= D2C0001.TGA
// 18 		= D2C0002.TGA
// 19 		= D2C0003.TGA
// 20 		= D2C0004.TGA
// 21 		= D2C0005.TGA
// 22 		= D2C0006.TGA
// 23 		= D2C0007.TGA
// 24 		= D2C0008.TGA
// 25 		= D2C0009.TGA
// 26 		= D2C0010.TGA
// 27 		= D2C0011.TGA
// 29 		= D2ma.tga
// 29 		= D2mb.tga
// 30 		= D2mc.tga
// 31 		= D2md.tga
// 32 		= D2me.tga
// 33 		= D2mf.tga
// 34 		= D2mg.tga
// 35 		= D2mh.tga
// 36 		= D2mi.tga
// 37 		= D2mj.tga
// 38 		= D2mk.tga
// 39 		= D2ml.tga
// 40 		= DCLFTXR1.TGA
// 41 		= DCLFTXR2.TGA
// 42 		= DCLFTXR3.TGA
// 43 		= DCLFTXR4.TGA
// 44 		= DCLFTXR5.TGA
// 45 		= DCLFTXR6.TGA
// 46 		= DCLFTXR7.TGA
// 47 		= DCLFTXTR.TGA
// 48 		= Dirta.tga
// 49 		= Dirtb.tga
// 50 		= Dirtc.tga
// 51 		= Dirtd.tga
// 52 		= Dirte.tga
// 53 		= Drs1.tga
// 54 		= Drs2.tga
// 55 		= Drs3.tga
// 56 		= Drs4.tga
// 57 		= Dwl0016.tga
// 58 		= Dwl0018.tga
// 59 		= Dwl0019.tga
// 60 		= Dwl0021.tga
// 61 		= Dwl0022.tga
// 62 		= Dwl0024.tga
// 63 		= Dwl0025.tga
// 64 		= Dwl0027.tga
// 65 		= Dwtran1.tga
// 66 		= Dwtran2.tga
// 67 		= Dwtran3.tga
// 68 		= Dwtran4.tga
// 69 		= Dwtran5.tga
// 70 		= Dwtran6.tga
// 71 		= Dwtran7.tga
// 72 		= Dwtran8.tga
// 73 		= Dwtran9.tga
// 74 		= Dwtrana.tga
// 75 		= Dwtranb.tga
// 76 		= Dwtranc.tga
// 77 		= Ffloor.tga
// 78 		= Ffloor2.tga
// 79 		= Ffloor3.tga
// 80 		= Ffloor4.tga
// 81 		= G2C0000.TGA
// 82 		= G2C0001.TGA
// 83 		= G2C0002.TGA
// 84 		= G2C0002B.TGA
// 85 		= G2C0003.TGA
// 86 		= G2C0003B.TGA
// 87 		= G2C0004.TGA
// 88 		= G2C0005.TGA
// 89 		= G2C0006.TGA
// 90 		= G2C0007.TGA
// 91 		= G2C0008.TGA
// 92 		= G2C0009.TGA
// 93 		= G2C0010.TGA
// 94 		= G2C0011.TGA
// 95 		= G2da.tga
// 96 		= G2db.tga
// 97 		= G2dc.tga
// 98 		= G2dd.tga
// 99 		= G2de.tga
// 100 		= Wtran5b.tga
// 101 		= Wtran6.tga
// 102 		= Wtran6b.tga
// 103 		= Wtran7.tga
// 104 		= Wtran7b.tga
// 105 		= Wtran8.tga
// 106 		= Wtran8b.tga
// 107 		= Wtran9.tga
// 108 		= Wtran9b.tga
// 109 		= Wtrana.tga
// 110 		= G2df.tga
// 111 		= G2dg.tga
// 113 		= G2dh.tga
// 113 		= G2di.tga
// 114 		= G2dj.tga
// 115 		= G2dk.tga
// 116 		= G2dl.tga
// 118 		= G2ma.tga
// 118 		= G2mb.tga
// 119 		= G2mc.tga
// 120 		= G2md.tga
// 121 		= G2me.tga
// 122 		= G2mf.tga
// 123 		= G2mg.tga
// 124 		= G2mh.tga
// 125 		= G2mi.tga
// 126 		= G2mj.tga
// 127 		= G2mk.tga
// 129 		= G2ml.tga
// 129 		= Grassa.tga
// 130 		= Grassb.tga
// 131 		= Grassc.tga
// 132 		= Grassd.tga
// 133 		= GRSH1.TGA
// 134 		= GRSH2.TGA
// 135 		= GRSH3.TGA
// 136 		= GRSH4.TGA
// 137 		= L2c0000.tga
// 138 		= L2c0000b.tga
// 139 		= L2c0001.tga
// 140 		= L2c0001b.tga
// 141 		= L2c0004.tga
// 142 		= L2c0004b.tga
// 143 		= L2c0005.tga
// 144 		= L2c0005b.tga
// 145 		= L2g0000.tga
// 146 		= L2g0001.tga
// 147 		= L2g0004.tga
// 148 		= L2g0005.tga
// 149 		= MTNTILEA.TGA
// 150 		= MTNTILEB.TGA
// 151 		= MTNTILEC.TGA
// 152 		= Ndr00.tga
// 153 		= Ndr01.tga
// 154 		= Ndr02.tga
// 155 		= Ndr03.tga
// 156 		= Ndr04.tga
// 157 		= Ndr05.tga
// 158 		= Ndr06.tga
// 159 		= Ndr07.tga
// 160 		= Ndr08.tga
// 161 		= Ndr09.tga
// 162 		= Ndr10.tga
// 163 		= RW001.TGA
// 164 		= RW002.TGA
// 165 		= RW003.TGA
// 166 		= RW004.TGA
// 167 		= RW005.TGA
// 168 		= TESTCRET.TGA
// 169 		= tmp.lst
// 170 		= TUN1.TGA
// 171 		= TUN2.TGA
// 172 		= TUN3.TGA
// 173 		= TUNB1.TGA
// 174 		= TUNB2.TGA
// 175 		= TUNB3.TGA
// 176 		= Watrblu2.tga
// 177 		= Watrblu3.tga
// 178 		= Watrblu4.tga
// 179 		= Watrblue.tga
// 180 		= Wl0016.tga
// 181 		= WL0016b.tga
// 182 		= Wl0017.tga
// 183 		= Wl0018.tga
// 184 		= WL0018b.tga
// 185 		= Wl0019.tga
// 186 		= Wl0019b.tga
// 187 		= Wl0020.tga
// 188 		= Wl0021.tga
// 189 		= Wl0021b.tga
// 190 		= Wl0022.tga
// 191 		= Wl0022b.tga
// 192 		= Wl0022x.tga
// 193 		= Wl0023.tga
// 194 		= Wl0024.tga
// 195 		= Wl0024b.tga
// 196 		= Wl0025.tga
// 197 		= Wl0025b.tga
// 198 		= Wl0026.tga
// 199 		= Wl0027.tga
// 200 		= Wl0027b.tga
// 201 		= Wtran1.tga
// 202 		= Wtran1b.tga
// 203 		= Wtran2.tga
// 204 		= Wtran2b.tga
// 205 		= Wtran3.tga
// 206 		= Wtran3b.tga
// 207 		= Wtran4.tga
// 208 		= Wtran4b.tga
// 209 		= Wtran5.tga
// 210 		= Wtranab.tga
// 211 		= Wtranb.tga
// 212 		= Wtranbb.tga
// 213 		= Wtranc.tga
// 214 		= Wtrancb.tga
// 215		= pr0000.tga
// 216		= pr0003.tga
// 217		= pr0006.tga
// 218		= pr0007.tga
// 219		= pr0008.tga
// 220		= pr0009.tga
// 221		= pr0010.tga
// 222		= pr0011.tga
// 223		= pr0012.tga
// 224		= pr0013.tga
// 225		= pr0014.tga
// 226		= pr0015.tga
// 227		= pr0016.tga
// 228		= pr0017.tga
// 229		= pr0018.tga
// 230		= dr0000.tga
// 231		= dr0003.tga
// 232		= dr0006.tga
// 233		= dr0007.tga
// 234		= dr0008.tga
// 235		= dr0009.tga
// 236		= dr0010.tga
// 237		= dr0011.tga
// 238		= dr0012.tga
// 239		= dr0013.tga
// 240		= dr0014.tga
// 241		= dr0015.tga
// 242		= dr0016.tga
// 243		= dr0017.tga
// 244		= dr0018.tga
// 245		= rough0000.tga
// 245		= rough0001.tga
// 247		= rough0002.tga
// 248		= rough0003.tga
// 249		= rough0004.tga
// 250		= rough0005.tga
// 251		= rough0006.tga
// 252		= rough0007.tga


//---------------------------------------------------------------------------
