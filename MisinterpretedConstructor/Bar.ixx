export module Bar;

import Foo;

export class Bar
{
private:
	Foo foo;

public:
	Bar()
	{
	}

	Bar(const Foo foo)
		: foo(foo)
	{
	}

	Bar(const Bar& bar)
		: foo(bar.foo)
	{
	}

	Bar operator=(const Bar& bar)
	{
		foo = bar.foo;

		return *this;
	}

	Foo GetFoo() const
	{
		return foo;
	}
};