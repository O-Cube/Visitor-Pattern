/*
* PositionC.cpp
*/
#include <cstdio>

#include "positionC.h"
#include "positionA.h"
#include "positionB.h"
#include "positionE.h"
#include "positionD.h"
#include "position.h"
#include "direction.h"

extern unsigned char nFlags;


/* constructor */
PositionC::PositionC()
{

}
/* private function:-initializes direction_ */
void PositionC::setDirection(Direction *dir)
{
	if (dir != nullptr) {
		delete direction_;
		direction_ = dir;
	}
}
/* move to point E */
void PositionC::up(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionE());
}
/* move to point D */
void  PositionC::down(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionD());
}
/* remain in same position */
void  PositionC::right(Direction *dir)
{
	
}
/* move to point B */
void  PositionC::left(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionB());
}
/* display current position */
const char*  PositionC::currentPosition()
{
	return "In Position C!\n";
}
/* set nFlag to 0x20 */
void PositionC::visit(Visitor *visitor) {
	visitor->positionCVisit();
}