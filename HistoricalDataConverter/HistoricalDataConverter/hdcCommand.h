#pragma once
class hdcCommand
{
public:
	hdcCommand(void);
	virtual ~hdcCommand(void);

	static Hdc::Result Execute( hdcCommand& command );

	//////////////////////////////////////////////////
	//
	//	Get/Set

	void SetDataFolder(LPCTSTR value);
	const CString& DataFolder() const;

	void SetOutputFolder(LPCTSTR value);
	const CString& OutputFolder() const;

protected:

	virtual Hdc::Result Execute() = 0;

	virtual Hdc::Result Execute(const CString& strPath, const CString& strFileName, const CString& strTitle ) = 0;

	virtual Hdc::Result FindFile();

	//	�t�H���_��Ԃ�
	CString GetFolder(const CString& str) const;

	//	�o�̓t�@�C���p�X��Ԃ�
	CString GetOutputFilePath( const CString& strFileName, LPCTSTR lpszSuffix ) const;

private:

	//	�f�[�^�t�H���_
	CString m_strDataFolder;

	//	�o�̓t�H���_
	CString m_strOutputFolder;

};

inline void hdcCommand::SetDataFolder(LPCTSTR value)
{
	m_strDataFolder = value;
}

inline const CString& hdcCommand::DataFolder() const
{
	return m_strDataFolder;
}

inline void hdcCommand::SetOutputFolder(LPCTSTR value)
{
	m_strOutputFolder = value;
}

inline const CString& hdcCommand::OutputFolder() const
{
	return m_strOutputFolder;
}
