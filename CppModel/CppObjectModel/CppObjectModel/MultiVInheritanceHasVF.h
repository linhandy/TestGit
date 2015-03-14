#ifndef Multi_V_INHERITANCE_HAS_VF
#define Multi_V_INHERITANCE_HAS_VF
class Point
{
public:
	virtual void clone(){};
	float a;
};
class Point2d: public Point
{
public:
	virtual void func1(){};
protected:
	float x;
	float y;
};
class Point3d : public Point
{
public:
	virtual void func1(){};
protected:
	float z;
};
class Point23d :public Point2d, Point3d
{
public :
	virtual void func2(){}
	float m;
};
#endif