#include "echopch.h"
#include "Echo/Core/Application.h"


namespace EchoEngine
{
	Application* Application::s_Instance = nullptr;

	Application::Application(const std::string& name)
	{
		std::cout << "Created " << name << " Application" << std::endl;
		s_Instance = this;
	}

	Application::~Application()
	{
		
	}

}
