/*
* PositionE.cpp
*/
#include <cstdio>

#include "positionE.h"
#include "positionA.h"
#include "positionB.h"
#include "positionC.h"
#include "positionD.h"
#include "position.h"
#include "direction.h"

extern unsigned char nFlags;

/* constructor */
PositionE::PositionE()
{

}
/* private function:- changes direction context */
void PositionE::setDirection(Direction *dir)
{
	if (dir != nullptr) {
		delete direction_;
		direction_ = dir;
	}
}
/* remain in same position */
void PositionE::up(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionE());
}
/* move to point B */
void  PositionE::down(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionB());
}
/* move to position C */
void  PositionE::right(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionC());
}
/* move to position A */
void  PositionE::left(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionA());
}
/* display current position */
const char*  PositionE::currentPosition()
{
	return "In Position E!\n";
}
/* set nFlag to 0xE0 */
void PositionE::visit(Visitor *visitor) {
	visitor->positionEVisit();
}