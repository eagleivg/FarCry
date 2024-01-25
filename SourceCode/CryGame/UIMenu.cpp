#include "StdAfx.h"
#include "UIMenu.h"
#include "UISystem.h"



//------------------------------------------------------------------------------------
CUIMenu::CUIMenu()
{
}

//------------------------------------------------------------------------------------
CUIMenu::~CUIMenu()
{
}

//------------------------------------------------------------------------------------
string CUIMenu::GetClassName()
{
	return UICLASSNAME_MENU;
}

//------------------------------------------------------------------------------------
int CUIMenu::Update(unsigned int iMessage, unsigned int wParam, unsigned int lParam)
{
	return 1;
}

//------------------------------------------------------------------------------------
int CUIMenu::Draw()
{
	return 1;
}

//------------------------------------------------------------------------------------
int CUIMenu::Release()
{
	return m_pUISystem->DestroyWidget(this);
}

//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------
int CUIMenu::AddItem(CUIMenuItem *pMenuItem)
{
	return 1;
}

//------------------------------------------------------------------------------------
int CUIMenu::DelItem(CUIMenuItem *pMenuItem)
{
	return 1;
}

//------------------------------------------------------------------------------------
int CUIMenu::DelItem(const std::string &szName)
{
	return 1;
}

//------------------------------------------------------------------------------------
CUIMenuItem *CUIMenu::FindItem(const std::string &szName)
{
	return 0;
}

//------------------------------------------------------------------------------------

