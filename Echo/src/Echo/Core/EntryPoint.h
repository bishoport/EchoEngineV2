#pragma once
#include "Echo/Core/Base.h"

extern EchoEngine::Application* EchoEngine::CreateApplication();

int main([[maybe_unused]] int argc, [[maybe_unused]] char** argv)
{
	//EchoEngine::Log::Init();
	auto* app = EchoEngine::CreateApplication();
	//app->Run();
	delete app;
}