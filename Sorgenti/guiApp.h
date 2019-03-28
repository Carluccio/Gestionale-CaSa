///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2013)
// http://www.wxformbuilder.org/
// Author:    	Sala Carlo
// Created:   	01/02/2019
// License:   	wxWidgets license (www.wxwidgets.org)
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUI_H__
#define __GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/cshelp.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/statbmp.h>
#include <wx/sizer.h>
#include <wx/hyperlink.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/toolbar.h>
#include <wx/textctrl.h>
#include <wx/statline.h>
#include <wx/checkbox.h>
#include <wx/radiobut.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/valtext.h>
#include <wx/listctrl.h>
#include <wx/wxsqlite3.h>


///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrameBase
///////////////////////////////////////////////////////////////////////////////
class MainFrameBase : public wxFrame 
{
	private:
	
	protected:
		wxWindow* newDim = new wxWindow;
		wxMenuBar* m_menuBar;
		wxMenu* m_menu3;
		wxMenu* m_menu2;
		wxMenu* m_menu1;
		wxMenu* m_menu6;
		wxMenu* m_menu5;
		wxMenu* m_menu4;
		wxMenu* m_menu10;
		wxStaticText* m_staticText7;
		wxStatusBar* m_statusBar;
		wxStaticBitmap* m_bitmap1;
		wxGenericHyperlinkCtrl* m_hyperlink1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseFrame( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnFrameOpen( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFrameOpen3( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFrameOpen4( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExitClick( wxCommandEvent& event ) { event.Skip(); }
		virtual dpiz(int dxy) {return newDim->wxWindow::FromDIP(dxy);}
	
	public:
		
		MainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _T("  Gestionale - CA.SA. -"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxCLOSE_BOX|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLIP_CHILDREN|wxTAB_TRAVERSAL );
		
		~MainFrameBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame 
{
	private:
		
	protected:
		wxWindow* newDim = new wxWindow;
		wxToolBar* m_toolBar1;
		wxBitmapButton* m_bpButton1;
		wxBitmapButton* m_bpButton2;
		wxBitmapButton* m_bpButton3;
		wxBitmapButton* m_bpButton9;
		wxBitmapButton* m_bpButton4;
		wxBitmapButton* m_bpButton10;
		wxBitmapButton* m_bpButton11;
		wxBitmapButton* m_bpButton13;
		wxBitmapButton* m_bpButton14;
		wxBitmapButton* m_bpButton15;
		wxBitmapButton* m_bpButton16;
		wxBitmapButton* m_bpButton17;
		wxBitmapButton* m_bpButton18;
		wxNotebook* m_notebook1;
		wxPanel* m_panel1;
		wxTextCtrl* m_textCtrl152;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticText221;
		wxStaticLine* m_staticline3;
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText19;
		wxStaticText* m_staticText20;
		wxStaticText* m_staticText18;
		wxStaticText* m_staticText17;
		wxStaticText* m_staticText21;
		wxStaticText* m_staticText22;
		wxStaticText* m_staticText202;
		wxStaticText* m_staticText212;
		wxStaticText* m_staticText222;
		wxStaticText* m_staticText23;
		wxStaticLine* m_staticline2;
		wxStaticLine* m_staticline1;
		wxPanel* m_panel2;
		wxPanel* m_panel3;
		wxToolBar* m_toolBar2;wxStaticText* m_staticText2;
		wxStaticText* m_staticText3;
		wxStaticText* m_staticText4;
		wxStaticText* m_staticText51;
		wxStaticText* m_staticText5;
		wxStaticText* m_staticText6;
		wxStaticText* m_staticText201;wxBitmapButton* m_bpButton5;
		wxStaticText* m_staticText211;
		wxStaticText* m_staticText24;
		wxBitmapButton* m_bpButton6;
		wxBitmapButton* m_bpButton7;
		wxBitmapButton* m_bpButton8;
		wxTextCtrl* m_textCtrl6;
		wxTextCtrl* m_textCtrl8;
		wxTextCtrl* m_textCtrl11;
		wxTextCtrl* m_textCtrl14;
		wxTextCtrl* m_textCtrl13;
		wxTextCtrl* m_textCtrl15;
		wxTextCtrl* m_textCtrl12;
		wxTextCtrl* m_textCtrl16;
		wxCheckBox* m_checkBox1;
		wxTextCtrl* m_textCtrl111;
		wxTextCtrl* m_textCtrl17;
		wxTextCtrl* m_textCtrl121;
		wxTextCtrl* m_textCtrl131;
		wxTextCtrl* m_textCtrl141;
		wxTextCtrl* m_textCtrl151;
		wxTextCtrl* m_textCtrl153;
		wxRadioButton* m_radioBtn1;
		wxRadioButton* m_radioBtn2;
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseFrame( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnClickClose( wxCommandEvent& event ) { event.Skip(); }
		virtual dpiz(int dxy) {return newDim->wxWindow::FromDIP(dxy);}
	
	public:
		
		wxBitmapButton* m_bpButton12;
		
		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _T("  Archivio clienti"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxCLOSE_BOX|wxRESIZE_BORDER|wxTAB_TRAVERSAL );
		
		~MyFrame1();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame3
///////////////////////////////////////////////////////////////////////////////
class MyFrame3 : public wxFrame 
{
	private:
	
	protected:
		wxWindow* newDim = new wxWindow;
		wxToolBar* m_toolBar1;
		wxBitmapButton* m_bpButton1;
		wxBitmapButton* m_bpButton2;
		wxBitmapButton* m_bpButton3;
		wxBitmapButton* m_bpButton9;
		wxBitmapButton* m_bpButton4;
		wxBitmapButton* m_bpButton10;
		wxBitmapButton* m_bpButton11;
		wxBitmapButton* m_bpButton13;
		wxBitmapButton* m_bpButton14;
		wxBitmapButton* m_bpButton15;
		wxBitmapButton* m_bpButton16;
		wxBitmapButton* m_bpButton17;
		wxBitmapButton* m_bpButton18;
		wxNotebook* m_notebook1;
		wxPanel* m_panel1;
		wxTextCtrl* m_textCtrl152;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticText221;
		wxStaticLine* m_staticline3;
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText19;
		wxStaticText* m_staticText20;
		wxStaticText* m_staticText18;
		wxStaticText* m_staticText17;
		wxStaticText* m_staticText21;
		wxStaticText* m_staticText22;
		wxStaticText* m_staticText202;
		wxStaticText* m_staticText212;
		wxStaticText* m_staticText222;
		wxStaticText* m_staticText23;
		wxStaticLine* m_staticline2;
		wxStaticLine* m_staticline1;
		wxPanel* m_panel2;
		wxPanel* m_panel3;
		wxToolBar* m_toolBar2;wxStaticText* m_staticText2;
		wxStaticText* m_staticText3;
		wxStaticText* m_staticText4;
		wxStaticText* m_staticText51;
		wxStaticText* m_staticText5;
		wxStaticText* m_staticText6;
		wxStaticText* m_staticText201;wxBitmapButton* m_bpButton5;
		wxStaticText* m_staticText211;
		wxStaticText* m_staticText24;
		wxBitmapButton* m_bpButton6;
		wxBitmapButton* m_bpButton7;
		wxBitmapButton* m_bpButton8;
		wxTextCtrl* m_textCtrl6;
		wxTextCtrl* m_textCtrl8;
		wxTextCtrl* m_textCtrl11;
		wxTextCtrl* m_textCtrl14;
		wxTextCtrl* m_textCtrl13;
		wxTextCtrl* m_textCtrl15;
		wxTextCtrl* m_textCtrl12;
		wxTextCtrl* m_textCtrl16;
		wxCheckBox* m_checkBox1;
		wxTextCtrl* m_textCtrl111;
		wxTextCtrl* m_textCtrl17;
		wxTextCtrl* m_textCtrl121;
		wxTextCtrl* m_textCtrl131;
		wxTextCtrl* m_textCtrl141;
		wxTextCtrl* m_textCtrl151;
		wxTextCtrl* m_textCtrl153;
		wxRadioButton* m_radioBtn1;
		wxRadioButton* m_radioBtn2;
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseFrame( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnClickClose( wxCommandEvent& event ) { event.Skip(); }
		virtual dpiz(int dxy) {return newDim->wxWindow::FromDIP(dxy);}
	
	public:
		
		wxBitmapButton* m_bpButton12;

		MyFrame3( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _T("  Archivio fornitori"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxCLOSE_BOX|wxRESIZE_BORDER|wxTAB_TRAVERSAL );
		
		~MyFrame3();
	
};
///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame4
///////////////////////////////////////////////////////////////////////////////
class MyFrame4 : public wxFrame 
{
	private:
	
	protected:
		wxWindow* newDim = new wxWindow;
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseFrame( wxCloseEvent& event ) { event.Skip(); }
		virtual dpiz(int dxy) {return newDim->wxWindow::FromDIP(dxy);}
	
	public:
		
		MyFrame4( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _T("Archivio piano dei conti"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 840,590 ), long style = wxCAPTION|wxCLOSE_BOX|wxRESIZE_BORDER|wxTAB_TRAVERSAL );
		
		~MyFrame4();
	
};

#endif //__GUI_H__
