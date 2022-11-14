#pragma once
#include <iostream>
#include <string>

class Point
{
	private:
		float x;
		float y;
		std::string name;
		void ini(float, float, std::string);
		float Distance(Point*);

	public:
		Point(void);
		Point(float, float, std::string);
		Point(const Point&, std::string);
		float getX(void);
		float getY(void);
		std::string getName(void);
		void setX(float);
		void setY(float);
		void setName(std::string name);
		void afficherPoint(void);
		void afficher(Point*);
};

