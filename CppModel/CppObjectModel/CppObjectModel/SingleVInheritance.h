#ifndef SINGEL_V_INHERITANCE
#define SINGEL_V_INHERITANCE
class Point2d
{
public:
	void func1(){};
protected:
	float x;
	float y;
};
class Point3d :public virtual Point2d
{
public:
	void func1(){};
protected:
	float z;
};
#endif