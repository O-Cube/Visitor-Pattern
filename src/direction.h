/*
 * Abstraction of every state
 */
#ifndef DIRECTION_H
#define DIRECTION_H

#include "position.h"

class Position;

class Direction
{
public:
	/* constructor */
	Direction(Position *state);
	/* change current state */
	void changeState(Position *state);
	/* move up from current position */
	void up();
	/* move down from current position */
	void down();
	/* move right from current position */
	void right();
	/* move left from current position */
	void left();
	/* displays current state */
	const char* currentPosition();
private:
	Position *state_;
};

#endif

