 /*
 * positionB.h
 */
#ifndef POSITIONB_H
#define POSITIONB_H

#include "position.h"
#include "direction.h"

class PositionB : public Position
{
    public:
	/* constructor */
	PositionB();
	/* initializes direction_ */
	void setDirection(Direction *dir);
	/* move up from current position */
	void up(Direction *dir) override;
        /* move down from current position */
	void down(Direction *dir) override;
        /* move right from current position */
	void right(Direction *dir) override;
        /* move left from current position */
	void left(Direction *dir) override;
	/* current position */
	const char* currentPosition() override;
	/* change nFlags */
	void visit(Visitor *visitor) override;
};

#endif // POSITIONB_H
