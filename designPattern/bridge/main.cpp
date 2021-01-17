#include "Abstract.h"
#include "CImplement.h"

int main()
{
    IImplement *iImpl = new CImplement();
    IAbstract *IAbst = new CAbstract(iImpl);
    IAbst->func();
    
	return 0;	
}

