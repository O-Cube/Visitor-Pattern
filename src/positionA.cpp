/*
* positionA.cpp
*/
#include <cstdio>

#include "positionA.h"
#include "positionB.h"
#include "positionC.h"
#include "positionD.h"
#include "positionE.h"
#include "position.h"
#include "direction.h"

extern unsigned char nFlags;

/* constructor */
PositionA::PositionA() {}
/* private function: changes direction context */
void PositionA::setDirection(Direction *dir)
{
	if (dir != nullptr) {
		delete direction_;
		direction_ = dir;
	}
}
/* move to point E */
void PositionA::up(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionE());
}
/* move to point D */
void  PositionA::down(Direction *dir)
{
	direction_->changeState(new PositionD());
}
/* move to position B */
void  PositionA::right(Direction *dir)
{
	direction_->changeState(new PositionB());
}
/* remain in current position */
void  PositionA::left(Direction *dir) { }
/* returns current position */
const char*  PositionA::currentPosition()
{
	return "In Position A!\n";
}
/* set nFlag to 0x5 */
void PositionA::visit(Visitor *visitor) {
	visitor->positionAVisit();
}
