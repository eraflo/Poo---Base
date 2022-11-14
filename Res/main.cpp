#include <iostream>
#include <string>
#include "Point.h"

int main() {
	Point p1(0.0, 0.0, "A");
	Point p2(1.0, 1.0, "B");
	p1.afficher(&p2);
}