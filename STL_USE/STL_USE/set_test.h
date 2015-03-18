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

	// ʹ��less_equal�ƻ���set�� ���Բ�������һ����ֵ�� ��Ϊ��Ϊ����ֵ�ǲ��ȼ۵ģ� ����effictive stl���潨�飺�����ñȽϺ����ڵ�ֵ������·���false
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