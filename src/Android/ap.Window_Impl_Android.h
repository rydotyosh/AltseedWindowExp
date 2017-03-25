
#pragma once 
#include "from_sample.h"
#include "../ap.Window.h"

namespace ap
{
	int engine_init_display(struct engine* engine);
	void engine_term_display(struct engine* engine);
	int32_t engine_handle_input(struct android_app* app, AInputEvent* event);
	void engine_handle_cmd(struct android_app* app, int32_t cmd);
	void draw(struct ap::engine* engine);

	class Window_Impl_Android
		: public Window
	{
	private:
		
	public:
		Window_Impl_Android();
		virtual ~Window_Impl_Android();


		ErrorCode Initialize(const WindowInitializationParameter& parameter) override;
		void Update();

		bool DoEvent() override;

		struct android_app* state;
		struct engine engine;
	};

}