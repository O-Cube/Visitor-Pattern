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
 
 /* 8 bit for 8 flags */
unsigned char nFlags = 0;


/* test fixture to be used for testing */

class VisitorTest : public testing::Test
{
public: 
	void SetUp() override {
		/* test begins in position A visit */
		position_= new PositionA();
		visitor_ = new Visitor();
	}
protected:
    Position *position_;
	Visitor *visitor_;
};

/* position A visit test */
TEST_F(VisitorTest, ATest)
{
	position_->visit(visitor_);
	EXPECT_EQ(5, nFlags);
}

/* position B visit test */
TEST_F(VisitorTest, BTest)
{
	position_ = new PositionB();
	position_->visit(visitor_);
	EXPECT_EQ(9, nFlags);
}

/* position C visit test */
TEST_F(VisitorTest, CTest)
{
	position_ = new PositionC();
	position_->visit(visitor_);
	EXPECT_EQ(32, nFlags);
}

/* position D visit test */
TEST_F(VisitorTest, DTest)
{
	position_ = new PositionD();
	position_->visit(visitor_);
	EXPECT_EQ(31, nFlags);
}

/* position E visit test */
TEST_F(VisitorTest, ETest)
{
	position_ = new PositionE();
	position_->visit(visitor_);
	EXPECT_EQ(224, nFlags);
}


