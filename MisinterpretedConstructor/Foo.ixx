export module Foo;

export class Foo
{
private:
	double num;

public:
	Foo()
		: num(0)
	{
	}

	Foo(const double num)
		: num(num)
	{
	}

	Foo(const Foo& foo)
		: num(foo.num)
	{
	}

	Foo operator=(const Foo& foo)
	{
		num = foo.num;

		return *this;
	}

	double GetNum() const
	{
		return num;
	}
};