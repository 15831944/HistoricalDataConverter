#pragma once
#include "hdccommand.h"
class hdcCmdFillLackData :
	public hdcCommand
{
public:
	hdcCmdFillLackData(void);
	virtual ~hdcCmdFillLackData(void);

	void SetPeriod( int value );
	int Period() const;

	//	�擪�s�ǂݔ�΂��t���O
	bool SkipFirstRow() const;
	void SetSkipFirstRow(bool value);

protected:

	//	�R�}���h�����s����
	virtual Hdc::Result Execute();

	//	�R�}���h�����s����
	virtual Hdc::Result Execute(const CString& strPath, const CString& strFileName, const CString& strTitle );

private:
	//	���Ԙg
	int m_nPeriod;

	//	�擪�s�ǂݔ�΂��t���O
	bool m_bSkipFirstRow;
};

inline void hdcCmdFillLackData::SetPeriod( int value )
{
	m_nPeriod = value;
}

inline int hdcCmdFillLackData::Period() const
{
	return m_nPeriod;
}

//	�擪�s�ǂݔ�΂��t���O
inline bool hdcCmdFillLackData::SkipFirstRow() const
{
	return m_bSkipFirstRow;
}

inline void hdcCmdFillLackData::SetSkipFirstRow(bool value)
{
	m_bSkipFirstRow = value;
}

