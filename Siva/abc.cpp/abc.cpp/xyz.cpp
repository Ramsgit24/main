//main
#include"abc.h"
int main()
{
	struct emp e1;
	struct emp e2;
	e1.assign(10,222.2f,'A');
	e2.assign(11,444.4f,'B');
	e1.display();
	e2.display();
}
