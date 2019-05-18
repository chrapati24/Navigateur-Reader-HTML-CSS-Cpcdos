#include <iostream>
#include<stdio.h>

#ifndef  D_Platform_Web_Emsc
#include<conio.h>
#endif

#include "Browser.h"


int main(){
	// litehtml::context	m_browser_context;


	std::cout << "Hello CpcWebBrowser!" << std::endl;
	
	Browser _oBrowser;
	
	

	#ifndef  D_Platform_Web_Emsc
		getch(); //pause
	#endif
	return 0;
}