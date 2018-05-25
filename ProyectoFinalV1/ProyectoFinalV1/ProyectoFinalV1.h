#pragma once  //______________________________________ ProyectoFinalV1.h  
#include "Resource.h"
class ProyectoFinalV1: public Win::Dialog
{
public:
	ProyectoFinalV1()
	{
	}
	~ProyectoFinalV1()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	void InitializeGui()
	{
		this->Text = L"ProyectoFinalV1";
	}
	void Window_Open(Win::Event& e);
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.style = DS_CENTER | DS_MODALFRAME | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU;
	}
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
