
// DUI_MFCDlg.h : ͷ�ļ�
//

#pragma once
#include "DuiLib_Dialog.h"


// CDUI_MFCDlg �Ի���
class CDUI_MFCDlg : public CDialogEx
{
// ����
public:
	CDUI_MFCDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_DUI_MFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()


private:
	CDuiLib_Dialog m_dlgDuilib;
};
