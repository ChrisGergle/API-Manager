#include "cApp.h"

cApp::cApp() 
{

};

cApp::~cApp()
{

};


bool cApp::OnInit()
{
	m_frame1 = new cMain();
	m_frame1->Show();
	return true;
}