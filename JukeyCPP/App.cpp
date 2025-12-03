#include "App.h"
#include "MainFrame.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	MainFrame* frame = new MainFrame("Calculator");

	frame->SetClientSize(400, 600);
	frame->Show();

	return true;
}
