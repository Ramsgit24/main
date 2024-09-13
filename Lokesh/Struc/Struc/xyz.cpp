#include"abc.h"
	int main()
{
	struct emp e1;
	struct emp e2;
	e1.assign(10,222.4f,'A');
	e2.assign(11,111.5f,'B');
	e1.display();
	e2.display();
}
