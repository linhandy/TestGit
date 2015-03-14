#ifndef SINGEL_INHERITANCE_HAS_VF
#define SINGEL_INHERITANCE_HAS_VF
class Point2d
{
public:
	virtual void func1(){}
	virtual ~Point2d(){}
protected:
	float x;
	float y;
}; 
class Point3d :public Point2d
{
public:
	virtual void func1(){}
	virtual ~Point3d(){}
protected:
	float z;
};
#endif