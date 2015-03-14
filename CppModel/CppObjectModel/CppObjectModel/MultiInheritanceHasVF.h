#ifndef Multi_INHERITANCE_HAS_VF
#define Multi_INHERITANCE_HAS_VF
class Point
{
public:
	virtual void clone(){};
	float a;
};
class Point2d
{
public:
	virtual void func1(){};
protected:
	float x;
	float y;
};
class Point3d :public Point, Point2d
{
public:
	virtual void func1(){};
protected:
	float z;
};
#endif