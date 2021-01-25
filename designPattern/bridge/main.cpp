#include "Abstract.h"
#include "AbstractImp.h"
#include "Implement.h"
#include "ImplementImp.h"

int main()
{
    IImplement *iImpl = new CImplement();
    IAbstract *IAbst = new CAbstract(iImpl);
    IAbst->func();
    
	return 0;	
}

