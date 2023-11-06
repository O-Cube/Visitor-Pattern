/*
* positionB.cpp
*/
#include <cstdio>

#include "positionB.h"
#include "positionA.h"
#include "positionC.h"
#include "positionD.h"
#include "positionE.h"
#include "position.h"
#include "direction.h"

extern unsigned char nFlags;

/* constructor */
PositionB::PositionB() { }
/* private function:changes direction context */
void PositionB::setDirection(Direction *dir)
{
	if (dir != nullptr) {
		delete direction_;
		direction_ = dir;
	}
}
/* move to point E */
void PositionB::up(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionE());
}
/* move to point D */
void  PositionB::down(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionD());
}
/* move to position C */
void  PositionB::right(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionC());
}
/* move to position A*/
void  PositionB::left(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionA());
}
/* string of current position */
const char*  PositionB::currentPosition()
{
	return "In Position B!\n";
}
/* set nFlag to 0x09 */
void PositionB::visit(Visitor *visitor) {
	visitor->positionBVisit();
}