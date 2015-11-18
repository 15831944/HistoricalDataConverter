#pragma once
class hdcUtility
{
public:
	//	�������g�[�N���ɕ���
	static void GetTokens( vecString& vecToken, const CString& strData, LPCTSTR lpszSep );

	//	���ԕ�����𕪉������ԃI�u�W�F�N�g��Ԃ�(DD/MM/YY,HH:mm:ss)
	static Hdc::Result GetTimeDDMMYY_HHMMSS( hdcTime& time, const CString& strDateTime );

	//	���ԕ�����𕪉������ԃI�u�W�F�N�g��Ԃ�(YYYY/MM/DD,HH:mm:ss)
	static Hdc::Result GetTimeYYYYMMDD_HHMMSS( hdcTime& time, const CString& strDate, const CString& strTime );

	//	�G���[���b�Z�[�W��Ԃ�
	static CString GetErrorMsg( Hdc::Result result );

	//	���O�o��
	static bool WriteLog( LPCTSTR lpszFilePath, LPCTSTR lpszLog, ...);

};

