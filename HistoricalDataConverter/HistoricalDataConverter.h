
// HistoricalDataConverter.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CHistoricalDataConverterApp:
// このクラスの実装については、HistoricalDataConverter.cpp を参照してください。
//

class CHistoricalDataConverterApp : public CWinApp
{
public:
	CHistoricalDataConverterApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CHistoricalDataConverterApp theApp;