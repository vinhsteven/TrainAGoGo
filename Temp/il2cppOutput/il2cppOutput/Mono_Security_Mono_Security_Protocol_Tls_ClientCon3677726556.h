﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t1178954575;

#include "Mono_Security_Mono_Security_Protocol_Tls_Context4123145639.h"

// Mono.Security.Protocol.Tls.ClientContext
struct  ClientContext_t3677726556  : public Context_t4123145639
{
	// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::sslStream
	SslClientStream_t1178954575 * ___sslStream_30;
	// System.Int16 Mono.Security.Protocol.Tls.ClientContext::clientHelloProtocol
	int16_t ___clientHelloProtocol_31;
};
