#include "echopch.h"
#include "Echo/Core/Window.h"

namespace EchoEngine
{
    Scope<Window> Window::Create(const WindowProps& props)
    {
        return Scope<Window>();
    }
}