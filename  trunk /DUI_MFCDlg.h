
// DUI_MFCDlg.h : 头文件
//

#pragma once
#include "DuiLib_Dialog.h"


// CDUI_MFCDlg 对话框
class CDUI_MFCDlg : public CDialogEx
{
// 构造
public:
	CDUI_MFCDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_DUI_MFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()


private:
	CDuiLib_Dialog m_dlgDuilib;
};
