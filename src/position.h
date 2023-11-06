 /*
 * Abstraction of every state
 */
#ifndef POSITION_H
#define POSITION_H

#include "direction.h"
#include "visitor.h"


class Direction;

class Position {
public:
	/* move up from current position */
	virtual void up(Direction *dir) = 0;
        /* move down from current position */
	virtual void down(Direction *dir) = 0;
        /* move right from current position */
	virtual void right(Direction *dir) = 0;
        /* move left from current position */
	virtual void left(Direction *dir) = 0;
	/* current position */
	virtual const char* currentPosition() = 0;
	/* change nFlags */
	virtual void visit(Visitor *visitor) = 0;

	Direction *direction_ ;
};

#endif // POSITION_H
