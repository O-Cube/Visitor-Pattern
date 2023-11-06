/*
 * visitor.h
 */
 
 #ifndef VISITOR_H
 #define VISITOR_H
 
 
 
 class Visitor {
public:
	 /* in nFlags sets bits first and third bits (0x5) */
	 void positionAVisit();
	 /* in nFlags sets bits first and fourth bits (0x9) */
	 void positionBVisit();
	 /* in nFlags set sixth bit (0x20) */
	 void positionCVisit();
	 /* in nFlags sets first 5 bits (0x1F) */
	 void positionDVisit();
	 /* in nFlags sets last 3 bits (0xE0) */
	 void positionEVisit();
 };
 
 
 #endif // VISITOR_H