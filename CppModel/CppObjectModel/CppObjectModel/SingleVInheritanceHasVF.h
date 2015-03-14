#ifndef SINGEL_V_INHERITANCE_HASVF
#define SINGEL_V_INHERITANCE_HASVF
class Point2d
{
public:
	virtual void func1(){};
protected:
	float x;
	float y;
};
class Point3d :public virtual Point2d
{
public:
	virtual void func1(){};
protected:
	float z;
};
#endif