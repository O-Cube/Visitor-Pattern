 /*
 * positionA.h
 */
#ifndef POSITIONA_H
#define POSITIONA_H

#include "position.h"
#include "direction.h"


class PositionA: public Position {
public:
	/* constructor */
	PositionA();
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
private:
	/* sets new direction_ */
	void setDirection(Direction *dir);
};

#endif // POSITIONA_H
