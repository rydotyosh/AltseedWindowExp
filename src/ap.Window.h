#pragma once

#include "ap.Base.h"

namespace ap
{

class Window
{
public:
	Window() {}
	virtual ~Window() {}

	virtual ErrorCode Initialize(const WindowInitializationParameter& parameter) = 0;

	virtual bool DoEvent() = 0;

	virtual void Close() {}

	virtual void* GetHandle() const { return nullptr; }

	static Window* Create();
};

}