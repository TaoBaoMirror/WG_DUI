
// DUI_MFC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDUI_MFCApp:
// �йش����ʵ�֣������ DUI_MFC.cpp
//

class CDUI_MFCApp : public CWinApp
{
public:
	CDUI_MFCApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDUI_MFCApp theApp;