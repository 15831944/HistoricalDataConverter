#pragma once

#include "hdcExcludedPeriod.h"

class hdcExcludedPeriodManager
{
public:
	static hdcExcludedPeriodManager& instance();

	//	�Ώۊ��ԊO����
	bool isIn(
		const hdcTime& time	//(i)�����
	) const;

private:
	hdcExcludedPeriodManager();
	~hdcExcludedPeriodManager() = default;

	//	������
	void init();

	//	�ΏۊO���Ԃ�ǉ�����
	void add(int beginMonth, int beginDay, int endMonth, int endDay);

private:
	//	�Ώۊ��ԊO�R���e�i
	using ExcludedPeriodContainer = std::list<hdcExcludedPeriod>;	

private:

	//	�Ώۊ��ԊO�R���e�i
	ExcludedPeriodContainer m_excludedPeriodContainer;
};

