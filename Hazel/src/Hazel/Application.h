#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}