// CppObjectModel.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "cstdlib"
//#include "SingleInheritance.h"
//#include "SingleInheritanceHasVF.h"
//#include "MultiInheritance.h"
//#include "MultiInheritanceHasVF.h"
//#include "SingleVInheritance.h"
//#include "SingleVInheritanceHasVF.h"
#include "MultiVInheritanceHasVF.h"

int _tmain(int argc, _TCHAR* argv[])
{
	// SingleInheritance
	// Point2d p2d; Point3d p3d;

	// SingleInheritanceHasVF
	// Point2d* p2d = new Point3d();

	// MultiInheritance
	// Point p; Point2d p2d; Point3d p3d;
	// printf("sizeof(p):%d, sizeof(p2d):%d, sizeof(p3d):%d", sizeof(p), sizeof(p2d), sizeof(p3d));

	// MultiInheritanceHasVF
	// Point* p = new Point3d;
	// Point3d* p3d = new Point3d;
	// Point2d* p2d =dynamic_cast<Point2d*>(p3d);

	// SingleVInheritance
	// Point2d p2d; Point3d p3d; 
	// printf("sizeof(p2d):%d, sizeof(p3d):%d", sizeof(p2d), sizeof(p3d));

	// SingleVInheritanceHasVF
	// Point2d* p2d = new Point3d();

	// MultiVInheritanceHasVF
	Point3d p3d;

	system("pause");
	return 0;
}

