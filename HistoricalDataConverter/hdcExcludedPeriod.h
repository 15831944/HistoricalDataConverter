#pragma once

#include "hdcTypeDef.h"

//	�Ώۊ��ԊO�N���X
class hdcExcludedPeriod
{
public:
	hdcExcludedPeriod(int beginMonth, int beginDay, int endMonth, int endDay);
	~hdcExcludedPeriod() = default;

	//	�Ώۊ��ԊO����
	bool isIn(
		const hdcTime& time	//(i)�����
	) const;

private:
	//	�Ώۊ��ԊJ�n��
	int m_beginMonth;
	
	//	�Ώۊ��ԊJ�n��
	int m_beginDay;

	//	�Ώۊ��ԏI����
	int m_endMonth;

	//	�Ώۊ��ԏI����
	int m_endDay;
};

