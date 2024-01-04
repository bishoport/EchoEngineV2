#include "echopch.h"

size_t g_EchoAllocationSize = 0;

namespace EchoEngine::Allocation
{
	size_t GetSize()
	{
		return g_EchoAllocationSize;
	}
}

void* operator new(size_t size)
{
	if (size == 0)
		++size;

	g_EchoAllocationSize += size;
	return std::malloc(size);
}

void operator delete(void* ptr, size_t size) noexcept
{
	g_EchoAllocationSize -= size;
	std::free(ptr);
}
