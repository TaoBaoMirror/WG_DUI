#pragma once
class CDuiLib_Dialog:public CWindowWnd, INotifyUI
{
public:
	CDuiLib_Dialog(void);
	~CDuiLib_Dialog(void);
	LPCTSTR GetWindowClassName() const;
	void    Notify(TNotifyUI& msg);
	LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
	void Init() {
		m_pCloseBtn = static_cast<CButtonUI*>(m_pm.FindControl(_T("closebtn")));
		m_pMaxBtn = static_cast<CButtonUI*>(m_pm.FindControl(_T("maxbtn")));
		m_pRestoreBtn = static_cast<CButtonUI*>(m_pm.FindControl(_T("restorebtn")));
		m_pMinBtn = static_cast<CButtonUI*>(m_pm.FindControl(_T("minbtn")));
	}

private:
	CPaintManagerUI m_pm;

private:
	CButtonUI* m_pCloseBtn;
	CButtonUI* m_pMaxBtn;
	CButtonUI* m_pRestoreBtn;
	CButtonUI* m_pMinBtn;

};


