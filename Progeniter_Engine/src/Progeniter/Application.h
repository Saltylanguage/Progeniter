#pragma once 

#include "Core.h"

namespace Engine
{
	class PGR_API Application
	{
	public:
		 Application();
		 virtual ~Application();

		 void Run();
	};

	// To be Defined in CLIENT
	Application* CreateApplication();
}