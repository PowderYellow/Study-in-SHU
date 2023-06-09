// test0302.cpp
#include <iostream>
using namespace std;

class Language
{
public:
	virtual void SayHello() const
	{
		cout << "How are you!" << endl;
	}
	virtual void SayByebye() const
	{
		cout << "Goodbye!" << endl;	
	}
};

class Chinese : public Language
{
public:
	void SayHello() const
	{
		cout << "低挫��" << endl;
	}
	void SayByebye() const
	{
		cout << "壅需��" << endl;
	}
};

class Japanese : public Language
{
public:
	void SayHello() const
	{
		cout << "こんにちは!" << endl;
	}
	void SayByebye() const
	{
		cout << "さようなら!" << endl;
	}
};

class English : public Language
{
public:
	void SayHello() const
	{
		cout << "Hello!" << endl;
	}
	void SayByebye() const
	{
		cout << "Bye-bye!" << endl;
	}
};

int test0302A(const Language &p)
{
	p.SayHello();
	p.SayByebye();
	return 0;
}

int test0302B(const Language *p)
{
	p->SayHello();
	p->SayByebye();
	return 0;
}

int test0302C(const Language p)
{
	p.SayHello();
	p.SayByebye();
	return 0;
}

int Test0302()
{
	Chinese c;
	Japanese j;
	English e;
	
	test0302A(c);
	test0302A(j);
	test0302A(e);

	test0302B(&c);
	test0302C(c);
	return 0;
}
