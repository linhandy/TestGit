class Base
{
public:
	Base()
	{
		this->func();
	}
	virtual void func()
	{
		cout<<"I am base"<<endl;
	}
	virtual ~Base()
	{
		this->func();
	}
};
class Dev : public Base
{
public:
	Dev()
	{
		this->func();
	}
	virtual void func()
	{
		cout<<"I am dev"<<endl;
	}
	virtual~Dev()
	{
		this->func();
	}
};

class A  
{  
public:  
    A()  {     }  
    ~A() {    cout<<"~A"<<endl;   }  
};  
  
class B:public A  
{  
    public:  
        B(A &a):_a(a)  
        {  
            
        }  
        ~B()  
        {  
            cout<<"~B"<<endl;  
        }  
    private:  
        A _a;  
    };  