// textDialog.cpp: 实现文件
//

#include "stdafx.h"
#include "OpenAIChain-Data-Collect.h"
#include "textDialog.h"
#include "afxdialogex.h"


// textDialog 对话框

IMPLEMENT_DYNAMIC(textDialog, CDialog)

textDialog::textDialog(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG2, pParent)
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif


}

textDialog::~textDialog()
{
}

void textDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_list);
	DDX_Control(pDX, IDC_EDIT1, m_edit);
}


BEGIN_MESSAGE_MAP(textDialog, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &textDialog::OnBnClickedButton1)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER1, &textDialog::OnNMCustomdrawSlider1)
END_MESSAGE_MAP()


// textDialog 消息处理程序


void textDialog::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox(L"数据提交到区块链OpenAIchain", L"数据提交到区块链OpenAIchain", 0);
}


void textDialog::OnNMCustomdrawSlider1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: 在此添加控件通知处理程序代码
	*pResult = 0;
}


BOOL textDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  在此添加额外的初始化
	m_list.AddString(L"今天股票很好，好的我想吐血");
	m_list.AddString(L"今天股票形势大好");
	m_list.AddString(L"今天股票形势很不好");
	m_list.AddString(L"今天股票形势很糟糕");
	m_list.AddString(L"今天股票形势很恶心");
	m_list.AddString(L"今天股票形势很垃圾");
	m_list.AddString(L"今天股票形势很好");
	m_edit.SetWindowTextW(L"今天股票很好，好的我想吐血");

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
