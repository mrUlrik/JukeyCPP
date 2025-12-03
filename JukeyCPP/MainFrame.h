#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);

private:
	enum ButtonIDs
	{
		BUTTON_0 = 101,
		BUTTON_1,
		BUTTON_2,
		BUTTON_3,
		BUTTON_4,
		BUTTON_5,
		BUTTON_6,
		BUTTON_7,
		BUTTON_8,
		BUTTON_9,
		BUTTON_ADD,
		BUTTON_SUBTRACT,
		BUTTON_MULTIPLY,
		BUTTON_DIVIDE,
		BUTTON_MOD,
		BUTTON_SIN,
		BUTTON_COS,
		BUTTON_TAN,
		BUTTON_EQUALS,
		BUTTON_CLEAR,
		BUTTON_BACK,
		BUTTON_DECIMAL,
		BUTTON_NEG
	};

	void OnButtonClicked(wxCommandEvent& evt);
	wxTextCtrl* displayBox;
	wxDECLARE_EVENT_TABLE();
};
