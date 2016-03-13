﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




#pragma once
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const MethodInfo*);

	static inline R Invoke (const MethodInfo* method, void* obj, T1 p1)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetGenericInterfaceInvokeData (method, obj);
		return ((Func)data.methodInfo->method)(data.target, p1, data.methodInfo);
	}
};