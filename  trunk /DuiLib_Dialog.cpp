#include "StdAfx.h"
#include "DuiLib_Dialog.h"


CDuiLib_Dialog::CDuiLib_Dialog(void)
{
}


CDuiLib_Dialog::~CDuiLib_Dialog(void)
{
}

LPCTSTR CDuiLib_Dialog::GetWindowClassName() const
{
	return (LPCTSTR)"CTestDlg"; /*�Լ���������ȡ������*/
}

void CDuiLib_Dialog::Notify(TNotifyUI& msg)
{
	if( msg.sType == _T("click") )
	{
		if( msg.pSender->GetName() == _T("closebtn") )
		{
			Close();
		}
	}
}

LRESULT CDuiLib_Dialog::HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if( uMsg == WM_CREATE )
	{
		CPaintManagerUI::SetInstance(AfxGetInstanceHandle());//����XML��ʱ����Ҫʹ�øþ��ȥ��λEXE��·�������ܼ���XML��·��
		CPaintManagerUI::SetResourcePath(CPaintManagerUI::GetInstancePath() + _T("skin"));//��λͼƬ����Դ��λ��

		m_pm.Init(m_hWnd);
		CDialogBuilder builder;
		CControlUI *pRoot = builder.Create(_T("ui.xml"), (UINT)0, NULL, &m_pm); //���ص�XML�ļ�������
		ASSERT(pRoot && "Failed to parse XML");
		m_pm.AttachDialog(pRoot);
		m_pm.AddNotifier(this);

		return 0;
	}
	else if( uMsg == WM_DESTROY )
	{
		::PostQuitMessage(0);
	}
	LRESULT lRes = 0;

	if( m_pm.MessageHandler(uMsg, wParam, lParam, lRes) ) return lRes;

	return CWindowWnd::HandleMessage(uMsg, wParam, lParam);
}
