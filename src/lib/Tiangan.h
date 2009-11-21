#pragma once

#include "GanZhi.h"

#include "dizhi.h"
#include <string>

using namespace std;

class TianGan : public GanZhi
{
public:
	static const int TGjia  = 0;
	static const int TGyi   = 1;
	static const int TGbing = 2;
	static const int TGding = 3;
	static const int TGwu   = 4;
	static const int TGji   = 5;
	static const int TGgeng = 6;
	static const int TGxin  = 7;
	static const int TGren  = 8;
	static const int TGgui  = 9;

	static int JiGong[];

	int getDzid(void);
	int getJiGong();

protected:
	int tgid;
};
