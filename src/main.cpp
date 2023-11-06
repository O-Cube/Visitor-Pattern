/*
 *
 */
#include <cstdio>

#include "direction.h"
#include "position.h"
#include "positionA.h"
#include "positionB.h"
#include "positionC.h"
#include "positionD.h"
#include "positionE.h"

/* 8 bit for 8 flags */
unsigned char nFlags = 0;

int main()
{
	Visitor visitor = Visitor();
	Position *posA = new PositionA();
	Position *posB = new PositionB();
	Position *posC = new PositionC();
	Position *posD = new PositionD();
	Position *posE = new PositionE();
	
	posA->visit(&visitor);
	printf("nFlags: %d\n", nFlags);
	
	posB->visit(&visitor);
	printf("nFlags: %d\n", nFlags);
	
	posC->visit(&visitor);
	printf("nFlags: %d\n", nFlags);
	
	posD->visit(&visitor);
	printf("nFlags: %d\n", nFlags);
	
	posE->visit(&visitor);
	printf("nFlags: %d\n", nFlags);
	
	return( 0 );
}
 
