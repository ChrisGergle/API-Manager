#pragma once
#include <wx/wx.h>
#include "cMain.h"
class cApp : public wxApp
{
	cApp();
	~cApp();

private:
	cMain* m_frame1 = nullptr;

public:
	bool OnInit();
};

