#include <map>
void map_test()
{
	typedef map<int, string> Int2StrMAP;
	Int2StrMAP m;
	m.insert(Int2StrMAP::value_type(1, "add 1"));
	m.insert(Int2StrMAP::value_type(2, "add 1 agagin"));
}