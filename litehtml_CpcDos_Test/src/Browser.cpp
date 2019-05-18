#include "Browser.h"

Browser::Browser(){
	
	char* css = NULL;
	/*
	HRSRC hResource = ::FindResource(m_hInst, L"master.css", L"CSS");
	if(hResource)
	{
		DWORD imageSize = ::SizeofResource(m_hInst, hResource);
		if(imageSize)
		{
			LPCSTR pResourceData = (LPCSTR) ::LockResource(::LoadResource(m_hInst, hResource));
			if(pResourceData)
			{
				css = new CHAR[imageSize + 1];
				lstrcpynA(css, pResourceData, imageSize);
				css[imageSize] = 0;
			}
		}
	}
*/
	if(css)
	{
		m_browser_context.load_master_stylesheet(css);
		delete css;
	}
	
	std::cout << "Browser Created!" << std::endl;
	
}

Browser::~Browser(void){
	
}


void Browser::OnCreate(){

}

void Browser::OnSize( int width, int height ){
	
}

void Browser::OnDestroy(){

}

void Browser::create(){
	
}

void Browser::open( const char*  path ){
	//if(m_view){
	//	m_view->open(path, true);
	//}
}

void Browser::back(){	
	//if(m_view){
	//	m_view->back();
	//}
}

void Browser::forward(){
	//if(m_view){
	//	m_view->forward();
	//}
}

void Browser::reload(){
	//if(m_view){
	//	m_view->refresh();
	//}
}

void Browser::calc_time(int calc_repeat){
	//if(m_view){
	//	m_view->render(TRUE, TRUE, calc_repeat);
	//}
}

void Browser::on_page_loaded(const char*  url){
	//if (m_view){
	//	SetFocus(m_view->wnd());
	//}
#ifndef NO_TOOLBAR
	//m_toolbar->on_page_loaded(url);
#endif
}
