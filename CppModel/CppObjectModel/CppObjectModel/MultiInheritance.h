#ifndef Multi_INHERITANCE
#define Multi_INHERITANCE
class Point
{
public:
	float a;
};
class Point2d
{
public:
	void func1(){};
protected:
	float x;
	float y;
};
class Point3d :public Point, Point2d
{
public:
	void func1(){};
protected:
	float z;
};
#endif