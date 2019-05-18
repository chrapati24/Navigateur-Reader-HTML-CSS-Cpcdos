#ifndef H_Browser
#define H_Browser

#include <iostream>
#include "litehtml/os_types.h"
#include "litehtml/types.h"
#include "litehtml/context.h"

class Browser
{
	litehtml::context	m_browser_context;
public:
	Browser();
	virtual ~Browser(void);

	void create();
	void open(const char*  path);

	void back();
	void forward();
	void reload();
	void calc_time(int calc_repeat = 1);
	void on_page_loaded(const char* url);

protected:
	virtual void OnCreate();
	virtual void OnSize(int width, int height);
	virtual void OnDestroy();

private:
	
};
#endif