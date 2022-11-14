#include <iostream>
#include <string>
#include <cmath>
#include "Point.h"

Point::Point(void) {
	this->ini(1, 1, "Unknown");
}

Point::Point(float _x, float _y, std::string name) {
	this->ini(_x, _y, name);
}

Point::Point(const Point& pt, std::string name) {
	this->ini(pt.x, pt.y, name);
}

void Point::ini(float _x, float _y, std::string name) {
	this->setX(_x);
	this->setY(_y);
	this->setName(name);
}

float Point::getX(void) {
	return this->x;
}

float Point::getY(void) {
	return this->y;
}

std::string Point::getName(void) {
	return this->name;
}

void Point::setX(float _x) {
	this->x = _x;
}

void Point::setY(float _y) {
	this->y = _y;
}

void Point::setName(std::string name) {
	this->name = name;
}

float Point::Distance(Point* point2) {
	float _x = point2->x;
	float _y = point2->y;
	float dist = sqrt(pow(_x - this->getX(), 2) + pow(_y - this->getY(), 2));
	return dist;

}

void Point::afficherPoint(void) {
	std::cout << "Le point " << this->getName() << " se situe en (" << this->getX() << " ; " << this->getY() << ")" << std::endl;
}

void Point::afficher(Point* point2) {
	float dist = this->Distance(point2);
	this->afficherPoint();
	point2->afficherPoint();
	std::cout << "Leur distance est " << dist << std::endl;
}