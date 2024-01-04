#include <EchoEngine.h>
#include <Echo/Core/EntryPoint.h>

namespace EchoEngine
{

	class EchoEditor : public Application
	{
	public:
		EchoEditor() :Application("Echo Editor")
		{

		}

		~EchoEditor() override
		{

		}

	};

	Application* CreateApplication()
	{
		return new EchoEditor();
	}
}



