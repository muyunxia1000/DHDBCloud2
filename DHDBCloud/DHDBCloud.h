// DHDBCloud.h : DHDBCloud DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDHDBCloudApp
// �йش���ʵ�ֵ���Ϣ������� DHDBCloud.cpp
//

class CDHDBCloudApp : public CWinApp
{
public:
	CDHDBCloudApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
