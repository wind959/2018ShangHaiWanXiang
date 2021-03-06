#pragma once


// VoiceDialog 对话框

class VoiceDialog : public CDialog
{
	DECLARE_DYNAMIC(VoiceDialog)

public:
	VoiceDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~VoiceDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_edit;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	CListBox m_list;
	virtual BOOL Create(LPCTSTR lpszTemplateName, CWnd* pParentWnd = NULL);
	virtual BOOL OnInitDialog();
};
