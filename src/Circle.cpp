#include "Circle.h"

Circle::Circle() {
	x = 0;
	y = 0;
	z = 0;
	radius = 1;
	color = ofColor(0, 0, 0);
}

void Circle::drawCircle() {
	ofSetColor(color);
	ofCircle(x, y, z, radius);
}