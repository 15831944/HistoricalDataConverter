
// HistoricalDataConverter.h : PROJECT_NAME �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH �ɑ΂��Ă��̃t�@�C�����C���N���[�h����O�� 'stdafx.h' ���C���N���[�h���Ă�������"
#endif

#include "resource.h"		// ���C�� �V���{��


// CHistoricalDataConverterApp:
// ���̃N���X�̎����ɂ��ẮAHistoricalDataConverter.cpp ���Q�Ƃ��Ă��������B
//

class CHistoricalDataConverterApp : public CWinApp
{
public:
	CHistoricalDataConverterApp();

// �I�[�o�[���C�h
public:
	virtual BOOL InitInstance();

// ����

	DECLARE_MESSAGE_MAP()
};

extern CHistoricalDataConverterApp theApp;