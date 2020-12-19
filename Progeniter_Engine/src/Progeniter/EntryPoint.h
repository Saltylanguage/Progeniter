#pragma once

#ifdef PGR_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	printf("Welcome To Progeniter!");
	Engine::Application* app = Engine::CreateApplication();
	app->Run();
	delete app;
}

#endif // PGR_PLATFORM_WINDOWS