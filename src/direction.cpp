#include <iostream>

#include "direction.h"
#include "position.h"

class Position;

	/* constructor */
	Direction::Direction(Position *state) : state_(state) { }
	/* change current state */
	void Direction::changeState(Position *state) {
		if (state != nullptr)
		{
			state_ = state;
		}
	}
	/* move up from current position */
	void Direction::up() {
		state_->up(this);
	}
        /* move down from current position */
	void Direction::down() {
		state_->down(this);
	}
        /* move right from current position */
	void Direction::right() {
		state_->right(this);
	}
	/* move left from current position */
	void Direction::left() {
		state_->left(this);
	}
	/* displays current state */
	const char* Direction::currentPosition() {
		return state_->currentPosition();
	}

