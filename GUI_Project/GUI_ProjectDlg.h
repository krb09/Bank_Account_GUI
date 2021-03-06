
// GUI_ProjectDlg.h : header file
//

#pragma once
#define _CRT_SECURE_NO_WARNINGS

// CGUIProjectDlg dialog
class CGUIProjectDlg : public CDialogEx
{
// Construction
public:
	CGUIProjectDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GUI_PROJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEditInstructions();
private:
	CString m_instructions;
public:
	afx_msg void OnBnClickedRadioSa();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedButton1();
private:
	CString m_amount;
public:
	afx_msg void OnEnChangeEditResult();
private:
	CString m_result;
public:
	afx_msg void OnEnChangeEditAmount();
private:
	CString amount_update;
public:
	CString return_amount();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	CString m_sym;
	afx_msg void OnBnClickedButtonSp();
private:
	CString m_num;
	CString m_sp;
public:
	afx_msg void OnBnClickedButtonBs();
	afx_msg void OnBnClickedButtonSs();
	afx_msg void OnBnClickedButtonstocktranprint();
};
