// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <io.h>
#include <direct.h>
#include <memory.h>
extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
	//�°����ͼ��ת���ṹ��Ҫ�����ͷ�ļ�
#include "libswscale/swscale.h"
	//SDL
#include "sdl/SDL.h"
#include "sdl/SDL_thread.h"
#include "sdl/SDL_getenv.h"

};
//��ȡ�������

// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
