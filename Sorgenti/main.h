/*********************************************************************
 * Name:      	main.h
 * Purpose:   	Declares simple wxWidgets application with GUI
 * 				created using wxFormBuilder.
 * Author:    	Sala Carlo
 * Created:   	01/02/2019
 * Copyright: 
 * License:   	wxWidgets license (www.wxwidgets.org)
 * 
 * Notes:		Note that all GUI creation code is declared in
 * 				guiApp.h source file which is generated by wxFormBuilder.
 *********************************************************************/

#ifndef __main__
#define __main__

// main wxWidgets header file
#include <wx/wx.h>
// gui classes generated by wxFormBuilder
#include "guiApp.h"
bool CLO = true;

////////////////////////////////////////////////////////////////////////////////
// application class declaration 
////////////////////////////////////////////////////////////////////////////////

class MainApp : public wxApp
{
	public:
		virtual bool OnInit();
};

// declare global static function wxGetApp()
DECLARE_APP(MainApp)

////////////////////////////////////////////////////////////////////////////////
// main application frame declaration 
////////////////////////////////////////////////////////////////////////////////

class MainFrame : public MainFrameBase
{
	public:
		MainFrame( wxWindow *parent );
		virtual ~MainFrame();
		
	protected:
		// protected event handlers
		
		virtual void OnCloseFrame( wxCloseEvent& event );
		virtual void OnExitClick( wxCommandEvent& event );
		virtual void OnFrameOpen( wxCommandEvent& event );
		virtual void OnFrameOpen3( wxCommandEvent& event );
		virtual void OnFrameOpen4( wxCommandEvent& event );
};
class MainFrame1 : public MyFrame1
{
	public:
		MainFrame1( wxWindow *parent );
		virtual ~MainFrame1();
	
	protected:	
	virtual void OnCloseFrame( wxCloseEvent& event );
	void OnClickClose( wxCommandEvent& event );
	
};
class MainFrame3 : public MyFrame3
{
	public:
		MainFrame3( wxWindow *parent );
		virtual ~MainFrame3();
	
	protected:	
	virtual void OnCloseFrame( wxCloseEvent& event );
	void OnClickClose( wxCommandEvent& event );
};
class MainFrame4 : public MyFrame4
{
	public:
		MainFrame4( wxWindow *parent );
		virtual ~MainFrame4();
	
	protected:	
	virtual void OnCloseFrame( wxCloseEvent& event );
};
MainFrame * principale;
MainFrame1 * clienti;
MainFrame3 * fornitori;
MainFrame4 * piaconti;

//void prova() {fornitori->m_bpButton12->Enable( false );}
void clo() {CLO = true;}
#endif //__main__
