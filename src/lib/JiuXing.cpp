#include "JiuXing.h"

#include <boost/make_shared.hpp>

using boost::make_shared;

boost::shared_ptr<std::string> JiuXing::getXingName(int jiu_xing)
{
	return boost::make_shared<std::string>(JiuXingName[jiu_xing%9]);
}

boost::shared_ptr<std::string> JiuXing::getXingAnotherName(int jiu_xing)
{
	return boost::make_shared<std::string>(JiuXingAnotherName[jiu_xing%9]);
}

int JiuXing::getStaticGua(int jiu_xing)
{
	return staticPosition[jiu_xing % 9];
}

int JiuXing::getWuXing(int jiu_xing)
{
	return JiuXingWuXing[jiu_xing % 9];
}
