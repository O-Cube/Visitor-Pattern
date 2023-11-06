 /*
 * PositionD.cpp
 */
#include <cstdio>

#include "positionD.h"
#include "positionA.h"
#include "positionB.h"
#include "positionC.h"
#include "positionE.h"
#include "position.h"
#include "direction.h"

extern unsigned char nFlags;

/* constructor */
PositionD::PositionD()
{

}
/* private function:- changes direction context */
void PositionD::setDirection(Direction *dir)
{
	if (dir != nullptr) {
		delete direction_;
		direction_ = dir;
	}
}
/* move to point B */
void PositionD::up(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionB());
}
/* remain in current position */
void  PositionD::down(Direction *dir)
{
	
}
/* move to position C */
void  PositionD::right(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionC());
}
/* move to position A*/
void  PositionD::left(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionA());
}
/* display current position */
const char*  PositionD::currentPosition()
{
	return "In Position D!\n";
}
/* set nFlag to 0x1F */
void PositionD::visit(Visitor *visitor) {
	visitor->positionDVisit();
}

