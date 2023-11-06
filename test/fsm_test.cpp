/*
 * fsm_test.cpp - uses google test ( and mock) frame work to perform test application
 */
 
 #include "gtest/gtest.h"
 #include "gmock/gmock.h"
 
 #include "positionA.h"
 #include "positionB.h"
 #include "positionC.h"
 #include "positionD.h"
 #include "positionE.h"


/* test fixture to be used for testing */

class FsmTest : public testing::Test
{
public: 
	void SetUp() override {
		/* test begins from position B */
		position_ = new PositionB();
		direction_ = new Direction(position_);
	}
protected:
    Position *position_;
	Direction *direction_;
};

/* start position test */
TEST_F(FsmTest, InitialPositionTest)
{
	EXPECT_STREQ("In Position B!\n", direction_->currentPosition());
}

/* move left to position A */
TEST_F(FsmTest, PositionA)
{
	direction_->left();
	EXPECT_STREQ("In Position A!\n", direction_->currentPosition());
}

/* move up to position E */
TEST_F(FsmTest, PositionE)
{
	direction_->up();
	EXPECT_STREQ("In Position E!\n", direction_->currentPosition());
}

/* move down to position B again */
TEST_F(FsmTest, PositionBAgain)
{
	direction_->right();
	EXPECT_STREQ("In Position C!\n", direction_->currentPosition());
}

