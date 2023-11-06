/*
* visitor.cpp
*/

#include "visitor.h"

extern unsigned char nFlags;

/* in nFlags sets bits first and third bits (0x5) */
void Visitor::positionAVisit() {
	/* clear current flags and write 0x5 */
	nFlags &= (unsigned char)0;
	nFlags |= 0x5;
}
/* in nFlags sets bits first and fourth bits (0x9) */
void Visitor::positionBVisit() {
	/* clear current flags and write 0x9 */
	nFlags &= (unsigned char)0;
	nFlags |= 0x9;
}
/* in nFlags set sixth bit (0x20) */
void Visitor::positionCVisit() {
	/* clear current flags and write 0x20 */
	nFlags &= (unsigned char)0;
	nFlags |= 0x20;
}
/* in nFlags sets first 5 bits (0x1F) */
void Visitor::positionDVisit() {
	/* clear current flags and write 0x1F */
	nFlags &= (unsigned char)0;
	nFlags |= 0x1F;
}
/* in nFlags sets last 3 bits (0xE0) */
void Visitor::positionEVisit() {
	/* clear current flags and write 0xE0 */
	nFlags &= (unsigned char)0;
	nFlags |= 0xE0;
}
