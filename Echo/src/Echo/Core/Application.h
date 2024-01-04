#pragma once

#include "Echo/Core/Base.h"
#include "Echo/Core/Window.h"

int main(int argc, char** argv);

namespace EchoEngine
{

	class Application
	{
	public:
		explicit Application(const std::string& name = "Echo App");
		virtual ~Application();

		Application(const Application& other) = delete;
		Application(Application&& other) = delete;


	private:
		static Application* s_Instance;
		friend int ::main(int argc, char** argv);

	};



	// Should be defined in EchoEditor
	Application* CreateApplication();
}