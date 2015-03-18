#include <set>

void set_test()
{
	cout<<"set_test begin"<<endl;
    set<int>  setInt;
	setInt.insert(1);
	setInt.insert(1);
	set<int>::iterator setIt;
	int setValue = 0;
	for(setIt = setInt.begin(); setIt != setInt.end(); setIt++)
	{
		setValue = (int)*setIt;
		cout<<"setValue= "<<setValue<<",";
	}
	cout<<endl;

	// 使用less_equal破坏了set， 可以插入两个一样的值， 因为认为两个值是不等价的， 所以effictive stl里面建议：总是让比较函数在等值的情况下返回false
	set<int, less_equal<int>> le_set ;
	set<int, less_equal<int>>::iterator le_it;
	le_set.insert(10);
	le_set.insert(12);
	for(le_it = le_set.begin(); le_it != le_set .end(); le_it++)
	{
		setValue = (int)*le_it;
		cout<<"less_equal setValue= "<<setValue<<",";
	}
	cout<<endl;
	cout<<"set_test end"<<endl;
}