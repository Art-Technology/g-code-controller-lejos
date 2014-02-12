#ifndef Point3D_h
#define Point3D_h

#include <Arduino.h>

class Point3D {
	public:
		Point3D(double x, double y, double z);
		double X;
		double Y;
		double Z;
		double getDistance(Point3D O)
	private:
		double __X;
		double __Y;
		double __Z;	
};

class Vector3D {
	public:
		Vector3D(Point3D A, Point3D B);
		double getMagnitude();
		double X;
		double Y;
		double Z;
	private:
		double __X;
		double __Y;
		double __Z;
}

class TouchSensor {
	public:
		TouchSensor(int pin)
		bool isPressed();
	private:
		int __pin;	
};


#endif
