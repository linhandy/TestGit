#ifndef SINGEL_INHERITANCE
#define SINGEL_INHERITANCE
class Point2d
{
public:
	void func1(){};
protected:
	float x;
	float y;
};
class Point3d :public Point2d
{
public:
	void func1(){};
protected:
	float z;
};
#endif