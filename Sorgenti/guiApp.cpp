///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2013)
// http://www.wxformbuilder.org/
// Author:    	Sala Carlo
// Created:   	01/02/2019
// License:   	wxWidgets license (www.wxwidgets.org)
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "guiApp.h"
// Using the construction of a static object to ensure that the help provider is set
class wxFBContextSensitiveHelpSetter
{
public:
wxFBContextSensitiveHelpSetter()
{
wxHelpProvider::Set( new wxHelpControllerHelpProvider );
}
};

static wxFBContextSensitiveHelpSetter s_wxFBSetTheHelpProvider;
///////////////////////////////////////////////////////////////////////////
MainFrameBase::MainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSize(wxSize(dpiz(950), dpiz(713)));
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 66, 136, 96 ) );
		
	m_menuBar = new wxMenuBar( 0 );
	m_menu3 = new wxMenu();
	wxMenuItem* m_menuItem5;
	m_menuItem5 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _T("Azienda") ) + wxT('\t') + wxT("Alt+a"), _T("Azienda"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItem5->SetBitmaps( wxBitmap( wxT("Img/application.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#elif defined( __WXGTK__ )
	m_menuItem5->SetBitmap( wxBitmap( wxT("Img/application.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#endif
	m_menu3->Append( m_menuItem5 );
	
	m_menu3->AppendSeparator();
	
	wxMenuItem* m_menuItem2;
	m_menuItem2 = new wxMenuItem( m_menu3, wxID_OPEN, wxString( _T("Clienti") ) + wxT('\t') + wxT("Alt+c"), _T("Clienti"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem2 );
	
	wxMenuItem* m_menuItem3;
	m_menuItem3 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _T("Fornitori") ) + wxT('\t') + wxT("Alt+f"), _T("Fornitori"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem3 );
	
	wxMenuItem* m_menuItem27;
	m_menuItem27 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _T("Vettori") ) + wxT('\t') + wxT("Alt+2"), _T("Vettori"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem27 );
	
	wxMenuItem* m_menuItem28;
	m_menuItem28 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _T("Pagamenti") ) + wxT('\t') + wxT("Alt+3"), _T("Pagamenti"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem28 );
	
	wxMenuItem* m_menuItem29;
	m_menuItem29 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _T("Banche") ) + wxT('\t') + wxT("Alt+4"), _T("Banche"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem29 );
	
	m_menu3->AppendSeparator();
	
	wxMenuItem* m_menuItem4;
	m_menuItem4 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _T("Piano dei conti") ) + wxT('\t') + wxT("Alt+p"), _T("Piano dei conti"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem4 );
	
	wxMenuItem* m_menuItem6;
	m_menuItem6 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _T("Codici iva") ) + wxT('\t') + wxT("Alt+i"), _T("Codici iva"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem6 );
	
	wxMenuItem* m_menuItem17;
	m_menuItem17 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _T("Causali contabili") ) + wxT('\t') + wxT("Alt+n"), _T("Causali contabili"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem17 );
	
	wxMenuItem* m_menuItem18;
	m_menuItem18 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _T("Progressivi pagine") ) + wxT('\t') + wxT("Alt+e"), _T("Progressivi pagine"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem18 );
	
	m_menu3->AppendSeparator();
	
	wxMenuItem* m_menuItem25;
	m_menuItem25 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _T("Anagrafica articoli") ) + wxT('\t') + wxT("Alt+j"), _T("Anagrafica articoli"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem25 );
	m_menuItem25->Enable( false );
	
	wxMenuItem* m_menuItem30;
	m_menuItem30 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _T("Causali di magazzino") ) + wxT('\t') + wxT("Alt+5"), _T("Causali di magazzino"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem30 );
	m_menuItem30->Enable( false );
	m_menu3->AppendSeparator();
	
	wxMenuItem* menuFileExit;
	menuFileExit = new wxMenuItem( m_menu3, wxID_EXIT, wxString( _T("Chiudi applicazione") ) + wxT('\t') + wxT("Alt+x"), _T("Chiudi applicazione"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	menuFileExit->SetBitmaps( wxBitmap( wxT("Img/application_delete.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#elif defined( __WXGTK__ )
	menuFileExit->SetBitmap( wxBitmap( wxT("Img/application_delete.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#endif
	m_menu3->Append( menuFileExit );
	
	m_menuBar->Append( m_menu3, _T("&Archivi") ); 
	
	m_menu2 = new wxMenu();
	wxMenuItem* m_menuItem7;
	m_menuItem7 = new wxMenuItem( m_menu2, wxID_ANY, wxString( _T("Prima nota") ) + wxT('\t') + wxT("Alt+m"), _T("Prima nota"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItem7->SetBitmaps( wxBitmap( wxT("Img/application_edit.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#elif defined( __WXGTK__ )
	m_menuItem7->SetBitmap( wxBitmap( wxT("Img/application_edit.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#endif
	m_menu2->Append( m_menuItem7 );
	
	wxMenuItem* m_menuItem22;
	m_menuItem22 = new wxMenuItem( m_menu2, wxID_ANY, wxString( _T("Partitari") ) + wxT('\t') + wxT("Alt+z"), _T("Partitari"), wxITEM_NORMAL );
	m_menu2->Append( m_menuItem22 );
	
	wxMenuItem* m_menuItem202;
	m_menuItem202 = new wxMenuItem( m_menu2, wxID_ANY, wxString( _T("Bilancio") ) + wxT('\t') + wxT("Alt+h"), _T("Bilancio"), wxITEM_NORMAL );
	m_menu2->Append( m_menuItem202 );
	
	m_menu1 = new wxMenu();
	wxMenuItem* m_menuItem212;
	m_menuItem212 = new wxMenuItem( m_menu1, wxID_ANY, wxString( _T("Chiusura conto economico") ) + wxT('\t') + wxT("Alt+l"), _T("Chiusura conto economico"), wxITEM_NORMAL );
	m_menu1->Append( m_menuItem212 );
	
	wxMenuItem* m_menuItem221;
	m_menuItem221 = new wxMenuItem( m_menu1, wxID_ANY, wxString( _T("Chiusura sit. patrimoniale") ) + wxT('\t') + wxT("Alt+o"), _T("Chiusura sit. patrimoniale"), wxITEM_NORMAL );
	m_menu1->Append( m_menuItem221 );
	
	wxMenuItem* m_menuItem23;
	m_menuItem23 = new wxMenuItem( m_menu1, wxID_ANY, wxString( _T("Apertura bilancio") ) + wxT('\t') + wxT("Alt+w"), _T("Apertura bilancio"), wxITEM_NORMAL );
	m_menu1->Append( m_menuItem23 );
	
	m_menu2->Append( -1, _T("Operazioni annuali"), m_menu1 );
	
	m_menuBar->Append( m_menu2, _T("&Contabilità") ); 
	
	m_menu6 = new wxMenu();
	wxMenuItem* m_menuItem191;
	m_menuItem191 = new wxMenuItem( m_menu6, wxID_ANY, wxString( _T("Fatture di vendita") ) + wxT('\t') + wxT("Alt+v"), _T("Fatture di vendita"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItem191->SetBitmaps( wxBitmap( wxT("Img/application_edit.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#elif defined( __WXGTK__ )
	m_menuItem191->SetBitmap( wxBitmap( wxT("Img/application_edit.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#endif
	m_menu6->Append( m_menuItem191 );
	m_menuItem191->Enable( false );
	
	m_menuBar->Append( m_menu6, _T("&Vendite") ); 
	
	m_menu5 = new wxMenu();
	wxMenuItem* m_menuItem15;
	m_menuItem15 = new wxMenuItem( m_menu5, wxID_ANY, wxString( _T("Libri iva") ) + wxT('\t') + wxT("Alt+q"), _T("Stampe libri iva"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItem15->SetBitmaps( wxBitmap( wxT("Img/printer.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#elif defined( __WXGTK__ )
	m_menuItem15->SetBitmap( wxBitmap( wxT("Img/printer.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#endif
	m_menu5->Append( m_menuItem15 );
	
	wxMenuItem* m_menuItem211;
	m_menuItem211 = new wxMenuItem( m_menu5, wxID_ANY, wxString( _T("Liquidazione iva") ) + wxT('\t') + wxT("Alt+u"), _T("Liquidazione iva"), wxITEM_NORMAL );
	m_menu5->Append( m_menuItem211 );
	
	wxMenuItem* m_menuItem16;
	m_menuItem16 = new wxMenuItem( m_menu5, wxID_ANY, wxString( _T("Libro giornale") ) + wxT('\t') + wxT("Alt+g"), _T("Stampa libro giornale"), wxITEM_NORMAL );
	m_menu5->Append( m_menuItem16 );
	
	m_menu5->AppendSeparator();
	
	wxMenuItem* m_menuItem261;
	m_menuItem261 = new wxMenuItem( m_menu5, wxID_ANY, wxString( _T("Libro magazzino") ) + wxT('\t') + wxT("Alt+1"), _T("Libro magazzino"), wxITEM_NORMAL );
	m_menu5->Append( m_menuItem261 );
	m_menuItem261->Enable( false );
	
	m_menuBar->Append( m_menu5, _T("&Stampe contabili") ); 
	
	m_menu4 = new wxMenu();
	wxMenuItem* m_menuItem24;
	m_menuItem24 = new wxMenuItem( m_menu4, wxID_ANY, wxString( _T("Scelta azienda") ) + wxT('\t') + wxT("Alt+y"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItem24->SetBitmaps( wxBitmap( wxT("Img/cog.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#elif defined( __WXGTK__ )
	m_menuItem24->SetBitmap( wxBitmap( wxT("Img/cog.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#endif
	m_menu4->Append( m_menuItem24 );
	
	wxMenuItem* m_menuItem26;
	m_menuItem26 = new wxMenuItem( m_menu4, wxID_ANY, wxString( _T("Copie di sicurezza") ) + wxT('\t') + wxT("Alt+s"), _T("Copie di sicurezza"), wxITEM_NORMAL );
	m_menu4->Append( m_menuItem26 );
	
	wxMenuItem* m_menuItem19;
	m_menuItem19 = new wxMenuItem( m_menu4, wxID_ANY, wxString( _T("Ricostruzione saldi") ) + wxT('\t') + wxT("Alt+d"), _T("Ricostruzione saldi"), wxITEM_NORMAL );
	m_menu4->Append( m_menuItem19 );
	
	wxMenuItem* m_menuItem20;
	m_menuItem20 = new wxMenuItem( m_menu4, wxID_ANY, wxString( _T("Compattazione archivi") ) + wxT('\t') + wxT("Alt+b"), _T("Compattazione archivi"), wxITEM_NORMAL );
	m_menu4->Append( m_menuItem20 );
	
	wxMenuItem* m_menuItem21;
	m_menuItem21 = new wxMenuItem( m_menu4, wxID_ANY, wxString( _T("Riparazione archivi") ) + wxT('\t') + wxT("Alt+r"), _T("Riparazione archivi"), wxITEM_NORMAL );
	m_menu4->Append( m_menuItem21 );
	
	m_menuBar->Append( m_menu4, _T("&Utilità") ); 
	
	m_menu10 = new wxMenu();
	wxMenuItem* m_menuItem201;
	m_menuItem201 = new wxMenuItem( m_menu10, wxID_ANY, wxString( _T("Modulo fatture") ) + wxT('\t') + wxT("Alt+t"), _T("Modulo fatture"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItem201->SetBitmaps( wxBitmap( wxT("Img/cog_edit.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#elif defined( __WXGTK__ )
	m_menuItem201->SetBitmap( wxBitmap( wxT("Img/cog_edit.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(16), dpiz(16)) );
	#endif
	m_menu10->Append( m_menuItem201 );
	m_menuItem201->Enable( false );
	
	m_menuBar->Append( m_menu10, _T("&Impostazioni") ); 
	
	this->SetMenuBar( m_menuBar );
	
	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );
	
	
	mainSizer->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, _T("Gestionale CA.SA."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont(wxFontInfo(12).FaceName("Tahoma"));
	//m_staticText7->SetFont( wxFont( 12, 74, 90, 90, false, wxT("Tahoma") ) );
	bSizer3->Add( m_staticText7, 0, wxALIGN_BOTTOM|wxALL, 5 );
	
	wxBitmap bmp = wxBitmap( wxT("Img/office-chart-pie.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(36), dpiz(36));
	m_bitmap1 = new wxStaticBitmap( this, wxID_ANY, bmp, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_bitmap1, 0, wxALL|wxALIGN_BOTTOM, 5 );
	
	
	mainSizer->Add( bSizer3, 0, wxEXPAND, 5 );
	
	
	m_hyperlink1 = new wxGenericHyperlinkCtrl( this, wxID_ANY, _T("© Carlo Sala Software - v.1.0.0"), wxT("https://www.carlosala.net"), wxDefaultPosition, wxDefaultSize,wxHL_DEFAULT_STYLE);
	
	m_hyperlink1->SetHoverColour( wxColour( 255, 255, 255 ) );
	m_hyperlink1->SetNormalColour( wxColour( 0, 0, 0 ) );
	m_hyperlink1->SetVisitedColour( wxColour( 0, 0, 0 ) );
	m_hyperlink1->SetFont(wxFontInfo(9).FaceName("Tahoma").Bold().Underlined());
	//m_hyperlink1->SetFont( wxFont( 9, 74, 90, 92, true, wxT("Tahoma") ) );
	mainSizer->Add( m_hyperlink1, 0, wxALL|wxALIGN_RIGHT, 5 );
	mainSizer->Add( 0, dpiz(10), 0, 0, 0 );
	this->SetSizer( mainSizer );
	
	m_statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	this->Layout();
	this->Centre( wxBOTH );
	
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Connect( m_menuItem2->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnFrameOpen ) );
	this->Connect( m_menuItem3->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnFrameOpen3 ) );
	this->Connect( m_menuItem4->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnFrameOpen4 ) );
	this->Connect( menuFileExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
}

MainFrameBase::~MainFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Disconnect( wxID_OPEN, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnFrameOpen ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnFrameOpen3 ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnFrameOpen4 ) );
	this->Disconnect( wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
	
}

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	wxArrayString includeList;
	includeList.Add(wxT("0"));
	includeList.Add(wxT("1"));
	includeList.Add(wxT("2"));
	includeList.Add(wxT("3"));
	includeList.Add(wxT("4"));
	includeList.Add(wxT("5"));
	includeList.Add(wxT("6"));
	includeList.Add(wxT("7"));
	includeList.Add(wxT("8"));
	includeList.Add(wxT("9"));
	wxArrayString includeList1;
	includeList1 = includeList;
	includeList1.Add(wxT("+"));
	wxArrayString includeList2;
	includeList2.Add(wxT("A"));
	includeList2.Add(wxT("B"));
	includeList2.Add(wxT("C"));
	includeList2.Add(wxT("D"));
	includeList2.Add(wxT("E"));
	includeList2.Add(wxT("F"));
	includeList2.Add(wxT("G"));
	includeList2.Add(wxT("H"));
	includeList2.Add(wxT("I"));
	includeList2.Add(wxT("j"));
	includeList2.Add(wxT("K"));
	includeList2.Add(wxT("L"));
	includeList2.Add(wxT("M"));
	includeList2.Add(wxT("N"));
	includeList2.Add(wxT("O"));
	includeList2.Add(wxT("P"));
	includeList2.Add(wxT("Q"));
	includeList2.Add(wxT("R"));
	includeList2.Add(wxT("S"));
	includeList2.Add(wxT("T"));
	includeList2.Add(wxT("U"));
	includeList2.Add(wxT("V"));
	includeList2.Add(wxT("W"));
	includeList2.Add(wxT("Z"));
	wxTextValidator textValidator(wxFILTER_INCLUDE_CHAR_LIST);
	textValidator.SetIncludes(includeList);
	wxTextValidator textValidator1(wxFILTER_INCLUDE_CHAR_LIST);
	textValidator1.SetIncludes(includeList1);
	wxTextValidator textValidator2(wxFILTER_INCLUDE_CHAR_LIST);
	textValidator2.SetIncludes(includeList2);
	wxArrayString includeList3;
	includeList3= includeList2;
	includeList3.Add(wxT("0"));
	includeList3.Add(wxT("1"));
	includeList3.Add(wxT("2"));
	includeList3.Add(wxT("3"));
	includeList3.Add(wxT("4"));
	includeList3.Add(wxT("5"));
	includeList3.Add(wxT("6"));
	includeList3.Add(wxT("7"));
	includeList3.Add(wxT("8"));
	includeList3.Add(wxT("9"));
	wxTextValidator textValidator3(wxFILTER_INCLUDE_CHAR_LIST);
	textValidator3.SetIncludes(includeList3);
	this->SetSize(wxSize(dpiz(840), dpiz(590)));
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 180, 180, 180 ) );
	
	wxImageList *imageList = new wxImageList(dpiz(16), dpiz(16), true, 2);
	wxBitmap bitmap1(wxT("Img/application.png"), wxBITMAP_TYPE_ANY);
	wxBitmap bitmap2(wxT("Img/printer.png"), wxBITMAP_TYPE_ANY);
	bitmap1 = bitmap1.ConvertToImage().Scale(dpiz(16), dpiz(16));
	bitmap2 = bitmap2.ConvertToImage().Scale(dpiz(16), dpiz(16));
	int index1 = imageList->Add(bitmap1);
	int index2 = imageList->Add(bitmap2);
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	m_toolBar1 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxSUNKEN_BORDER ); 
	m_toolBar1->SetToolBitmapSize( wxSize( dpiz(34),dpiz(34) ) );
	m_toolBar1->AddSeparator();
	   	
	m_bpButton1 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/application.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton1 );
	m_toolBar1->AddSeparator();
	m_bpButton2 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/application_add.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton2 );
	m_toolBar1->AddSeparator();
	m_bpButton3 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/application_edit.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton3 );
	m_toolBar1->AddSeparator();
	m_bpButton9 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/Trash.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton9 );
	m_toolBar1->AddSeparator();
	m_bpButton4 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/disk.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton4 );
	m_toolBar1->AddSeparator();
	m_bpButton10 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/printer.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton10 );
	m_toolBar1->AddSeparator(); 
	m_toolBar1->AddSeparator();
	m_bpButton11 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/help.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton11 );
	m_toolBar1->AddSeparator(); 
	m_toolBar1->AddSeparator();
	m_bpButton13 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/application_delete.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton13 );
	
	m_toolBar1->Realize(); 
	bSizer2->Add(m_toolBar1, 0, wxEXPAND, 5);
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0 );
	m_notebook1->AssignImageList(imageList);
	
	m_panel1 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer4->Add( 0, dpiz(10), 0, 0, 0 );
		
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( m_panel1, wxID_ANY, _T("Codice:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText11->Wrap( -1 );
	bSizer8->Add( m_staticText11, 0, wxALL, 4 );
	m_textCtrl152 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(50),-1 ), 0|wxWANTS_CHARS,textValidator );
	m_textCtrl152->SetMaxLength( 4 );
	m_textCtrl152->SetFont(wxFontInfo(9).FaceName("Tahoma"));
	//m_textCtrl152->SetFont( wxFont( 9, 74, 90, 90, false, wxT("Tahoma") ) );
	m_textCtrl152->SetBackgroundColour( wxColour( 66, 136, 96 ) );	
	m_textCtrl152->SetForegroundColour( wxColour( 255, 255, 255 ) );
	bSizer8->Add( m_textCtrl152, 0, wxALL, 5 );
	
	m_textCtrl6 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl6->SetMaxLength( 45 );
	m_textCtrl6->SetFont(wxFontInfo(9).FaceName("Tahoma").Bold());
	//m_textCtrl6->SetFont( wxFont( 9, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl6->SetForegroundColour( wxColour( 255, 255, 255 ) );
	m_textCtrl6->SetBackgroundColour( wxColour( 66, 136, 96 ) );
	bSizer8->Add( m_textCtrl6, 1, wxALL, 5 );
	
	
	bSizer4->Add( bSizer8, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer9->Add( dpiz(138),0,0,0,0 ); //78+50+10
	
	m_textCtrl8 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl8->SetMaxLength( 45 );
	m_textCtrl8->SetFont(wxFontInfo(9).FaceName("Tahoma"));
	//m_textCtrl8->SetFont( wxFont( 9, 74, 90, 92, false, wxT("Tahoma") ) );
	
	bSizer9->Add( m_textCtrl8, 1, wxALL, 5 );
	
	
	bSizer4->Add( bSizer9, 0, wxEXPAND, 5 );
	bSizer4->Add( 0, dpiz(10), 0, 0, 0 );
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxVERTICAL );
	m_staticline3 = new wxStaticLine( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer131->Add( m_staticline3, 0, wxEXPAND | wxALL, 5 );
	m_staticText221 = new wxStaticText( m_panel1, wxID_ANY, _T("Dati anagrafici"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText221->SetFont(wxFontInfo(9).FaceName("Tahoma").Bold());
	m_staticText221->SetForegroundColour( wxColour( 67, 118, 254 ) );
	m_staticText221->Wrap( -1 );
	bSizer131->Add( m_staticText221, 0, wxALL, 5 );
	
	bSizer4->Add( bSizer131, 0, wxEXPAND, 5 );
	//bSizer4->Add( 0, dpiz(20), 0, wxEXPAND, 0 );
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	
	
	m_staticText15 = new wxStaticText( m_panel1, wxID_ANY, _T("Indirizzo:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText15->Wrap( -1 );
	bSizer11->Add( m_staticText15, 0, wxALL, 5 );
	
	
	m_textCtrl11 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl11->SetMaxLength( 40 );
	bSizer11->Add( m_textCtrl11, 1, wxALL, 5 );
	
	
	bSizer4->Add( bSizer11, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText19 = new wxStaticText( m_panel1, wxID_ANY, _T("Cap:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText19->Wrap( -1 );
	bSizer12->Add( m_staticText19, 0, wxALL, 5 );
	
		
	m_textCtrl14 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(50),-1 ), 0|wxWANTS_CHARS,textValidator );
	m_textCtrl14->SetMaxLength( 5 );
	bSizer12->Add( m_textCtrl14, 0, wxALL, 5 );
	
	m_staticText18 = new wxStaticText( m_panel1, wxID_ANY, _T("Città :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizer12->Add( m_staticText18, 0, wxALL, 5 );
	
	m_textCtrl13 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl13->SetMaxLength( 20 );
	m_textCtrl13->SetForegroundColour( wxColour( 255, 255, 255 ) );
	m_textCtrl13->SetBackgroundColour( wxColour( 66, 136, 96 ) );
	bSizer12->Add( m_textCtrl13, 1, wxALL, 5 );
	
	m_staticText20 = new wxStaticText( m_panel1, wxID_ANY, _T("Pr.:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	bSizer12->Add( m_staticText20, 0, wxALL, 5 );
	
	m_textCtrl15 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(35),-1 ), 0|wxWANTS_CHARS,textValidator2 );
	m_textCtrl15->SetMaxLength( 2 );
	bSizer12->Add( m_textCtrl15, 0, wxALL, 5 );
	
	
	bSizer4->Add( bSizer12, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText17 = new wxStaticText( m_panel1, wxID_ANY, _T("Nazione:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText17->Wrap( -1 );
	bSizer10->Add( m_staticText17, 0, wxALL, 5 );
	
		
	m_textCtrl12 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl12->SetMaxLength( 12 );
	bSizer10->Add( m_textCtrl12, 1, wxALL, 5 );
	
	bSizer4->Add( bSizer10, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText21 = new wxStaticText( m_panel1, wxID_ANY, _T("Codice fiscale:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText21->Wrap( -1 );
	bSizer13->Add( m_staticText21, 0, wxALL, 5 );
	
		
	m_textCtrl16 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS,textValidator3 );
	m_textCtrl16->SetMaxLength( 16 );
	bSizer13->Add( m_textCtrl16, 1, wxALL, 5 );
	m_bpButton16 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("Img/Ok-icon.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(15), dpiz(15)), wxDefaultPosition, wxSize(dpiz(25),-1 ), wxBU_AUTODRAW );
	bSizer13->Add( m_bpButton16, 0, wxALL, 5 );
	m_checkBox1 = new wxCheckBox( m_panel1, wxID_ANY, _T("Persona fisica"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_checkBox1, 0, wxALL, 5 );
	
	bSizer13->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText22 = new wxStaticText( m_panel1, wxID_ANY, _T("Partita iva:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer13->Add( m_staticText22, 0, wxALL, 5 );
	
	m_textCtrl111 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(35),-1 ), 0|wxWANTS_CHARS,textValidator2);
	m_textCtrl111->SetMaxLength( 2 );
	bSizer13->Add( m_textCtrl111, 0, wxALL, 5 );
	
	m_textCtrl17 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS,textValidator );
	m_textCtrl17->SetMaxLength( 11 );
	m_textCtrl17->SetForegroundColour( wxColour( 255, 255, 255 ) );
	m_textCtrl17->SetBackgroundColour( wxColour( 66, 136, 96 ) );
	bSizer13->Add( m_textCtrl17, 1, wxALL, 5 );
	m_bpButton15 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("Img/Ok-icon.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(15), dpiz(15)), wxDefaultPosition, wxSize(dpiz(25),-1 ), wxBU_AUTODRAW );
	bSizer13->Add( m_bpButton15, 0, wxALL, 5 );
	
	bSizer4->Add( bSizer13, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer111;
	bSizer111 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText202 = new wxStaticText( m_panel1, wxID_ANY, _T("Telefono:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText202->Wrap( -1 );
	bSizer111->Add( m_staticText202, 0, wxALL, 5 );
		
	m_textCtrl121 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(180),-1 ), 0|wxWANTS_CHARS,textValidator1 );
	m_textCtrl121->SetMaxLength( 15 );
	bSizer111->Add( m_textCtrl121, 0, wxALL, 5 );
	
	
	bSizer111->Add( 0, 5, 1, wxEXPAND, 5 );
	
	m_staticText212 = new wxStaticText( m_panel1, wxID_ANY, _T("Fax:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText212->Wrap( -1 );
	bSizer111->Add( m_staticText212, 0, wxALL, 5 );
	
	m_textCtrl131 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(180),-1 ), 0|wxWANTS_CHARS,textValidator1 );
	m_textCtrl131->SetMaxLength( 15 );
	bSizer111->Add( m_textCtrl131, 0, wxALL, 5 );
	
	
	bSizer111->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText222 = new wxStaticText( m_panel1, wxID_ANY, _T("Cellulare:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText222->Wrap( -1 );
	bSizer111->Add( m_staticText222, 0, wxALL, 5 );
	
	m_textCtrl141 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(180),-1 ), 0|wxWANTS_CHARS,textValidator1 );
	m_textCtrl141->SetMaxLength( 15 );
	bSizer111->Add( m_textCtrl141, 0, wxALL, 5 );
	
	
	bSizer4->Add( bSizer111, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText23 = new wxStaticText( m_panel1, wxID_ANY, _T("E@Mail:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText23->Wrap( -1 );
	bSizer14->Add( m_staticText23, 0, wxALL, 5 );
	
	
	m_textCtrl151 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl151->SetMaxLength( 40 );
	bSizer14->Add( m_textCtrl151, 1, wxALL, 5 );
	m_bpButton17 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("Img/Ok-icon.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(15), dpiz(15)), wxDefaultPosition, wxSize(dpiz(25),-1 ), wxBU_AUTODRAW );
	bSizer14->Add( m_bpButton17, 0, wxALL, 5 );
	
	m_staticText24 = new wxStaticText( m_panel1, wxID_ANY, _T("Sito web:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	bSizer14->Add( m_staticText24, 0, wxALL, 5 );
	
	m_textCtrl153 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl153->SetMaxLength( 40 );
	bSizer14->Add( m_textCtrl153, 1, wxALL, 5 );
	m_bpButton18 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("Img/Ok.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(22), dpiz(22)), wxDefaultPosition, wxSize(dpiz(25),-1 ), wxBU_AUTODRAW );
	bSizer14->Add( m_bpButton18, 0, wxALL, 5 );

	bSizer4->Add( bSizer14, 0, wxEXPAND, 5 );
	//bSizer4->Add( 0, dpiz(20), 0, 0, 0 );
	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, wxEmptyString ), wxHORIZONTAL );
	
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxVERTICAL );
	
	m_radioBtn1 = new wxRadioButton( m_panel1, wxID_ANY, _T("Ordine alfabetico"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radioBtn1->SetValue( true ); 
	bSizer121->Add( m_radioBtn1, 0, wxALL, 5 );
	
	m_radioBtn2 = new wxRadioButton( m_panel1, wxID_ANY, _T("Ordine di inserimento"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer121->Add( m_radioBtn2, 0, wxALL, 5 );
	
	
	sbSizer1->Add( bSizer121, 0, 0, 5 );
	m_staticline2 = new wxStaticLine( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	sbSizer1->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );
	
	sbSizer1->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText211 = new wxStaticText( m_panel1, wxID_ANY, _T("Ok cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText211->Wrap( -1 );
	m_staticText211->SetFont(wxFontInfo(11).FaceName("Tahoma").Bold());
	//m_staticText211->SetFont( wxFont( 11, 74, 90, 92, false, wxT("Tahoma") ) );
	m_staticText211->SetForegroundColour( wxColour( 67, 118, 254 ) );
	
	sbSizer1->Add( m_staticText211, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticline1 = new wxStaticLine( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	sbSizer1->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );
	
	m_bpButton12 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("Img/Ok.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	sbSizer1->Add( m_bpButton12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	bSizer4->Add( sbSizer1, 0, wxEXPAND, 5 );
	bSizer4->Add( 0, dpiz(3), 0, 0, 0 );
	//bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );
	m_panel1->SetSizer( bSizer4 );
	m_panel1->Layout();
	bSizer4->Fit( m_panel1 );
	m_notebook1->AddPage( m_panel1, _T("Anagrafica 1"),true, index1);
	//------------------------------------------------------------------------------------------------Fine panel 1
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	m_notebook1->AddPage( m_panel2, _T("Anagrafica 2"), false, index1 );
	//------------------------------------------------------------------------------------------------Fine panel 2
	m_panel3 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	m_notebook1->AddPage( m_panel3, _T("Stampe"), false, index2 );
	//------------------------------------------------------------------------------------------------Fine panel 3
	
	bSizer2->Add( m_notebook1, 0, wxEXPAND | wxALL, 5 );
	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	m_toolBar2 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxSUNKEN_BORDER ); 
	m_toolBar2->SetToolBitmapSize( wxSize( dpiz(24),dpiz(24) ) );
	m_toolBar2->AddSeparator(); 
	
	m_staticText2 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F3 Interroga"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText2->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText2 );
	m_toolBar2->AddSeparator(); 
	
	m_toolBar2->AddSeparator(); 
	
	m_staticText3 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F4 Carica"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText3->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText3 );
	m_toolBar2->AddSeparator(); 
	
	m_toolBar2->AddSeparator(); 
	
	m_staticText4 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F5 Varia"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText4->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText4->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText4 );
	m_toolBar2->AddSeparator(); 
	
	m_toolBar2->AddSeparator(); 
	
	m_staticText51 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F6 Elimina"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	m_staticText51->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText51->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText51->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText51 );
	m_toolBar2->AddSeparator(); 
	
	m_toolBar2->AddSeparator(); 
	
	m_staticText5 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F10 Salva"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	m_staticText5->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText5->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText5->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText5 );
	m_toolBar2->AddSeparator(); 
	
	m_toolBar2->AddSeparator(); 
	
	m_staticText6 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F11 Stampa"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText6->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText6->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText6 );
	m_toolBar2->AddSeparator(); 
	
	m_toolBar2->AddSeparator(); 
	
	m_staticText201 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F1 Help"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText201->Wrap( -1 );
	m_staticText201->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText201->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText201->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText201 );
	m_toolBar2->AddStretchableSpace();
	m_bpButton5 = new wxBitmapButton( m_toolBar2, wxID_ANY, wxBitmap( wxT("Img/go-first-2.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(22), dpiz(22)), wxDefaultPosition, wxSize( dpiz(55),-1 ),  wxBU_AUTODRAW );
	m_toolBar2->AddControl( m_bpButton5 );
	m_bpButton6 = new wxBitmapButton( m_toolBar2, wxID_ANY, wxBitmap( wxT("Img/go-next-4.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(22), dpiz(22)), wxDefaultPosition, wxSize( dpiz(55),-1 ), wxBU_AUTODRAW );
	m_toolBar2->AddControl( m_bpButton6 );
	m_bpButton7 = new wxBitmapButton( m_toolBar2, wxID_ANY, wxBitmap( wxT("Img/go-previous-4.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(22), dpiz(22)), wxDefaultPosition, wxSize( dpiz(55),-1 ), wxBU_AUTODRAW );
	m_toolBar2->AddControl( m_bpButton7 );
	m_bpButton8 = new wxBitmapButton( m_toolBar2, wxID_ANY, wxBitmap( wxT("Img/go-last-2.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(22), dpiz(22)), wxDefaultPosition, wxSize(dpiz(55),-1 ), wxBU_AUTODRAW );
	m_toolBar2->AddControl( m_bpButton8 );
	m_bpButton14 = new wxBitmapButton( m_toolBar2, wxID_ANY, wxBitmap( wxT("Img/search.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(22), dpiz(22)), wxDefaultPosition, wxSize(dpiz(55),-1 ), wxBU_AUTODRAW );
	m_toolBar2->AddControl( m_bpButton14 );
	m_toolBar2->Realize(); 
	
	bSizer2->Add( m_toolBar2, 0, wxEXPAND, 5 );
	this->SetSizer( bSizer2 );
	this->Layout();
	this->Fit();
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame1::OnCloseFrame ) );
	m_bpButton13->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::OnClickClose ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame1::OnCloseFrame ) );
	m_bpButton13->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::OnClickClose ), NULL, this );
	
}
MyFrame3::MyFrame3( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	wxArrayString includeList;
	includeList.Add(wxT("0"));
	includeList.Add(wxT("1"));
	includeList.Add(wxT("2"));
	includeList.Add(wxT("3"));
	includeList.Add(wxT("4"));
	includeList.Add(wxT("5"));
	includeList.Add(wxT("6"));
	includeList.Add(wxT("7"));
	includeList.Add(wxT("8"));
	includeList.Add(wxT("9"));
	wxArrayString includeList1;
	includeList1 = includeList;
	includeList1.Add(wxT("+"));
	wxArrayString includeList2;
	includeList2.Add(wxT("A"));
	includeList2.Add(wxT("B"));
	includeList2.Add(wxT("C"));
	includeList2.Add(wxT("D"));
	includeList2.Add(wxT("E"));
	includeList2.Add(wxT("F"));
	includeList2.Add(wxT("G"));
	includeList2.Add(wxT("H"));
	includeList2.Add(wxT("I"));
	includeList2.Add(wxT("j"));
	includeList2.Add(wxT("K"));
	includeList2.Add(wxT("L"));
	includeList2.Add(wxT("M"));
	includeList2.Add(wxT("N"));
	includeList2.Add(wxT("O"));
	includeList2.Add(wxT("P"));
	includeList2.Add(wxT("Q"));
	includeList2.Add(wxT("R"));
	includeList2.Add(wxT("S"));
	includeList2.Add(wxT("T"));
	includeList2.Add(wxT("U"));
	includeList2.Add(wxT("V"));
	includeList2.Add(wxT("W"));
	includeList2.Add(wxT("Z"));
	wxTextValidator textValidator(wxFILTER_INCLUDE_CHAR_LIST);
	textValidator.SetIncludes(includeList);
	wxTextValidator textValidator1(wxFILTER_INCLUDE_CHAR_LIST);
	textValidator1.SetIncludes(includeList1);
	wxTextValidator textValidator2(wxFILTER_INCLUDE_CHAR_LIST);
	textValidator2.SetIncludes(includeList2);
	wxArrayString includeList3;
	includeList3= includeList2;
	includeList3.Add(wxT("0"));
	includeList3.Add(wxT("1"));
	includeList3.Add(wxT("2"));
	includeList3.Add(wxT("3"));
	includeList3.Add(wxT("4"));
	includeList3.Add(wxT("5"));
	includeList3.Add(wxT("6"));
	includeList3.Add(wxT("7"));
	includeList3.Add(wxT("8"));
	includeList3.Add(wxT("9"));
	wxTextValidator textValidator3(wxFILTER_INCLUDE_CHAR_LIST);
	textValidator3.SetIncludes(includeList3);
	this->SetSize(wxSize(dpiz(840), dpiz(590)));
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 180, 180, 180 ) );
	
	wxImageList *imageList = new wxImageList(dpiz(16), dpiz(16), true, 2);
	wxBitmap bitmap1(wxT("Img/application.png"), wxBITMAP_TYPE_ANY);
	wxBitmap bitmap2(wxT("Img/printer.png"), wxBITMAP_TYPE_ANY);
	bitmap1 = bitmap1.ConvertToImage().Scale(dpiz(16), dpiz(16));
	bitmap2 = bitmap2.ConvertToImage().Scale(dpiz(16), dpiz(16));
	int index1 = imageList->Add(bitmap1);
	int index2 = imageList->Add(bitmap2);
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	m_toolBar1 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxSUNKEN_BORDER ); 
	m_toolBar1->SetToolBitmapSize( wxSize( dpiz(34),dpiz(34) ) );
	m_toolBar1->AddSeparator();
    	
	m_bpButton1 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/application.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton1 );
	m_toolBar1->AddSeparator();
	m_bpButton2 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/application_add.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton2 );
	m_toolBar1->AddSeparator();
	m_bpButton3 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/application_edit.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton3 );
	m_toolBar1->AddSeparator();
	m_bpButton9 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/Trash.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton9 );
	m_toolBar1->AddSeparator();
	m_bpButton4 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/disk.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton4 );
	m_toolBar1->AddSeparator();
	m_bpButton10 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/printer.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton10 );
	m_toolBar1->AddSeparator(); 
	m_toolBar1->AddSeparator();
	m_bpButton11 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/help.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton11 );
	m_toolBar1->AddSeparator(); 
	m_toolBar1->AddSeparator();
	m_bpButton13 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/application_delete.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_toolBar1->AddControl( m_bpButton13 );
	
	m_toolBar1->Realize(); 
	bSizer2->Add(m_toolBar1, 0, wxEXPAND, 5);
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0 );
	m_notebook1->AssignImageList(imageList);
	
	m_panel1 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer4->Add( 0, dpiz(10), 0, 0, 0 );
		
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( m_panel1, wxID_ANY, _T("Codice:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText11->Wrap( -1 );
	bSizer8->Add( m_staticText11, 0, wxALL, 4 );
	m_textCtrl152 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(50),-1 ), 0|wxWANTS_CHARS,textValidator );
	m_textCtrl152->SetMaxLength( 4 );
	m_textCtrl152->SetFont(wxFontInfo(9).FaceName("Tahoma"));
	//m_textCtrl152->SetFont( wxFont( 9, 74, 90, 90, false, wxT("Tahoma") ) );
	m_textCtrl152->SetBackgroundColour( wxColour( 66, 136, 96 ) );	
	m_textCtrl152->SetForegroundColour( wxColour( 255, 255, 255 ) );
	bSizer8->Add( m_textCtrl152, 0, wxALL, 5 );
	
	m_textCtrl6 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl6->SetMaxLength( 45 );
	m_textCtrl6->SetFont(wxFontInfo(9).FaceName("Tahoma").Bold());
	//m_textCtrl6->SetFont( wxFont( 9, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl6->SetForegroundColour( wxColour( 255, 255, 255 ) );
	m_textCtrl6->SetBackgroundColour( wxColour( 66, 136, 96 ) );
	bSizer8->Add( m_textCtrl6, 1, wxALL, 5 );
	
	
	bSizer4->Add( bSizer8, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer9->Add( dpiz(138),0,0,0,0 ); //78+50+10
	
	m_textCtrl8 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl8->SetMaxLength( 45 );
	m_textCtrl8->SetFont(wxFontInfo(9).FaceName("Tahoma"));
	//m_textCtrl8->SetFont( wxFont( 9, 74, 90, 92, false, wxT("Tahoma") ) );
	
	bSizer9->Add( m_textCtrl8, 1, wxALL, 5 );
	
	
	bSizer4->Add( bSizer9, 0, wxEXPAND, 5 );
	bSizer4->Add( 0, dpiz(10), 0, 0, 0 );
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxVERTICAL );
	m_staticline3 = new wxStaticLine( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer131->Add( m_staticline3, 0, wxEXPAND | wxALL, 5 );
	m_staticText221 = new wxStaticText( m_panel1, wxID_ANY, _T("Dati anagrafici"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText221->SetFont(wxFontInfo(9).FaceName("Tahoma").Bold());
	m_staticText221->SetForegroundColour( wxColour( 67, 118, 254 ) );
	m_staticText221->Wrap( -1 );
	bSizer131->Add( m_staticText221, 0, wxALL, 5 );
	
	bSizer4->Add( bSizer131, 0, wxEXPAND, 5 );
	bSizer4->Add( 0, dpiz(20), 0, wxEXPAND, 0 );
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	
	
	m_staticText15 = new wxStaticText( m_panel1, wxID_ANY, _T("Indirizzo:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText15->Wrap( -1 );
	bSizer11->Add( m_staticText15, 0, wxALL, 5 );
	
	
	m_textCtrl11 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl11->SetMaxLength( 40 );
	bSizer11->Add( m_textCtrl11, 1, wxALL, 5 );
	
	
	bSizer4->Add( bSizer11, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText19 = new wxStaticText( m_panel1, wxID_ANY, _T("Cap:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText19->Wrap( -1 );
	bSizer12->Add( m_staticText19, 0, wxALL, 5 );
	
		
	m_textCtrl14 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(50),-1 ), 0|wxWANTS_CHARS,textValidator );
	m_textCtrl14->SetMaxLength( 5 );
	bSizer12->Add( m_textCtrl14, 0, wxALL, 5 );
	
	m_staticText18 = new wxStaticText( m_panel1, wxID_ANY, _T("Città :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizer12->Add( m_staticText18, 0, wxALL, 5 );
	
	m_textCtrl13 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl13->SetMaxLength( 20 );
	m_textCtrl13->SetForegroundColour( wxColour( 255, 255, 255 ) );
	m_textCtrl13->SetBackgroundColour( wxColour( 66, 136, 96 ) );
	bSizer12->Add( m_textCtrl13, 1, wxALL, 5 );
	
	m_staticText20 = new wxStaticText( m_panel1, wxID_ANY, _T("Pr.:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	bSizer12->Add( m_staticText20, 0, wxALL, 5 );
	
	m_textCtrl15 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(35),-1 ), 0|wxWANTS_CHARS,textValidator2 );
	m_textCtrl15->SetMaxLength( 2 );
	bSizer12->Add( m_textCtrl15, 0, wxALL, 5 );
	
	
	bSizer4->Add( bSizer12, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText17 = new wxStaticText( m_panel1, wxID_ANY, _T("Nazione:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText17->Wrap( -1 );
	bSizer10->Add( m_staticText17, 0, wxALL, 5 );
	
		
	m_textCtrl12 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl12->SetMaxLength( 12 );
	bSizer10->Add( m_textCtrl12, 1, wxALL, 5 );
	
	bSizer4->Add( bSizer10, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText21 = new wxStaticText( m_panel1, wxID_ANY, _T("Codice fiscale:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText21->Wrap( -1 );
	bSizer13->Add( m_staticText21, 0, wxALL, 5 );
	
		
	m_textCtrl16 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS,textValidator3);
	m_textCtrl16->SetMaxLength( 16 );
	bSizer13->Add( m_textCtrl16, 1, wxALL, 5 );
	m_bpButton16 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("Img/Ok-icon.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(15), dpiz(15)), wxDefaultPosition, wxSize(dpiz(25),-1 ), wxBU_AUTODRAW );
	bSizer13->Add( m_bpButton16, 0, wxALL, 5 );
	m_checkBox1 = new wxCheckBox( m_panel1, wxID_ANY, _T("Persona fisica"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_checkBox1, 0, wxALL, 5 );
	
	bSizer13->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText22 = new wxStaticText( m_panel1, wxID_ANY, _T("Partita iva:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer13->Add( m_staticText22, 0, wxALL, 5 );
	
	m_textCtrl111 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(35),-1 ), 0|wxWANTS_CHARS,textValidator2);
	m_textCtrl111->SetMaxLength( 2 );
	bSizer13->Add( m_textCtrl111, 0, wxALL, 5 );
	
	m_textCtrl17 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS,textValidator );
	m_textCtrl17->SetMaxLength( 11 );
	m_textCtrl17->SetForegroundColour( wxColour( 255, 255, 255 ) );
	m_textCtrl17->SetBackgroundColour( wxColour( 66, 136, 96 ) );
	bSizer13->Add( m_textCtrl17, 1, wxALL, 5 );
	m_bpButton15 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("Img/Ok-icon.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(15), dpiz(15)), wxDefaultPosition, wxSize(dpiz(25),-1 ), wxBU_AUTODRAW );
	bSizer13->Add( m_bpButton15, 0, wxALL, 5 );
	
	bSizer4->Add( bSizer13, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer111;
	bSizer111 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText202 = new wxStaticText( m_panel1, wxID_ANY, _T("Telefono:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText202->Wrap( -1 );
	bSizer111->Add( m_staticText202, 0, wxALL, 5 );
		
	m_textCtrl121 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(180),-1 ), 0|wxWANTS_CHARS,textValidator1 );
	m_textCtrl121->SetMaxLength( 15 );
	bSizer111->Add( m_textCtrl121, 0, wxALL, 5 );
	
	
	bSizer111->Add( 0, 5, 1, wxEXPAND, 5 );
	
	m_staticText212 = new wxStaticText( m_panel1, wxID_ANY, _T("Fax:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText212->Wrap( -1 );
	bSizer111->Add( m_staticText212, 0, wxALL, 5 );
	
	m_textCtrl131 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(180),-1 ), 0|wxWANTS_CHARS,textValidator1 );
	m_textCtrl131->SetMaxLength( 15 );
	bSizer111->Add( m_textCtrl131, 0, wxALL, 5 );
	
	
	bSizer111->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText222 = new wxStaticText( m_panel1, wxID_ANY, _T("Cellulare:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText222->Wrap( -1 );
	bSizer111->Add( m_staticText222, 0, wxALL, 5 );
	
	m_textCtrl141 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( dpiz(180),-1 ), 0|wxWANTS_CHARS,textValidator1 );
	m_textCtrl141->SetMaxLength( 15 );
	bSizer111->Add( m_textCtrl141, 0, wxALL, 5 );
	
	
	bSizer4->Add( bSizer111, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText23 = new wxStaticText( m_panel1, wxID_ANY, _T("E@Mail:"), wxDefaultPosition, wxSize( dpiz(78),-1 ), 0 );
	m_staticText23->Wrap( -1 );
	bSizer14->Add( m_staticText23, 0, wxALL, 5 );
	
	
	m_textCtrl151 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl151->SetMaxLength( 40 );
	bSizer14->Add( m_textCtrl151, 1, wxALL, 5 );
	m_bpButton17 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("Img/Ok-icon.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(15), dpiz(15)), wxDefaultPosition, wxSize(dpiz(25),-1 ), wxBU_AUTODRAW );
	bSizer14->Add( m_bpButton17, 0, wxALL, 5 );	
	
	m_staticText24 = new wxStaticText( m_panel1, wxID_ANY, _T("Sito web:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	bSizer14->Add( m_staticText24, 0, wxALL, 5 );
	
	m_textCtrl153 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl153->SetMaxLength( 40 );
	bSizer14->Add( m_textCtrl153, 1, wxALL, 5 );
	m_bpButton18 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("Img/Ok.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(22), dpiz(22)), wxDefaultPosition, wxSize(dpiz(25),-1 ), wxBU_AUTODRAW );
	bSizer14->Add( m_bpButton18, 0, wxALL, 5 );
	
	bSizer4->Add( bSizer14, 0, wxEXPAND, 5 );
	//bSizer4->Add( 0, dpiz(20), 0, 0, 0 );
	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, wxEmptyString ), wxHORIZONTAL );
	
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxVERTICAL );
	
	m_radioBtn1 = new wxRadioButton( m_panel1, wxID_ANY, _T("Ordine alfabetico"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radioBtn1->SetValue( true ); 
	bSizer121->Add( m_radioBtn1, 0, wxALL, 5 );
	
	m_radioBtn2 = new wxRadioButton( m_panel1, wxID_ANY, _T("Ordine di inserimento"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer121->Add( m_radioBtn2, 0, wxALL, 5 );
	
	
	sbSizer1->Add( bSizer121, 0, 0, 5 );
	m_staticline2 = new wxStaticLine( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	sbSizer1->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );
	
	sbSizer1->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText211 = new wxStaticText( m_panel1, wxID_ANY, _T("OK fornitore"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText211->Wrap( -1 );
	m_staticText211->SetFont(wxFontInfo(11).FaceName("Tahoma").Bold());
	//m_staticText211->SetFont( wxFont( 11, 74, 90, 92, false, wxT("Tahoma") ) );
	m_staticText211->SetForegroundColour( wxColour( 67, 118, 254 ) );
	
	sbSizer1->Add( m_staticText211, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticline1 = new wxStaticLine( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	sbSizer1->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );
	
	m_bpButton12 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("Img/Ok.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	sbSizer1->Add( m_bpButton12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	bSizer4->Add( sbSizer1, 0, wxEXPAND, 5 );
	bSizer4->Add( 0, dpiz(3), 0, 0, 0 );
	//bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );
	m_panel1->SetSizer( bSizer4 );
	m_panel1->Layout();
	bSizer4->Fit( m_panel1 );
	m_notebook1->AddPage( m_panel1, _T("Anagrafica 1"),true, index1);
	//------------------------------------------------------------------------------------------------Fine panel 1
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	m_notebook1->AddPage( m_panel2, _T("Anagrafica 2"), false, index1 );
	//------------------------------------------------------------------------------------------------Fine panel 2
	m_panel3 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	m_notebook1->AddPage( m_panel3, _T("Stampe"), false, index2 );
	//------------------------------------------------------------------------------------------------Fine panel 3
	
	bSizer2->Add( m_notebook1, 0, wxEXPAND | wxALL, 5 );
	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	m_toolBar2 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxSUNKEN_BORDER ); 
	m_toolBar2->SetToolBitmapSize( wxSize( dpiz(24),dpiz(24) ) );
	m_toolBar2->AddSeparator(); 
	
	m_staticText2 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F3 Interroga"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText2->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText2 );
	m_toolBar2->AddSeparator(); 
	
	m_toolBar2->AddSeparator(); 
	
	m_staticText3 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F4 Carica"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText3->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText3 );
	m_toolBar2->AddSeparator(); 
	
	m_toolBar2->AddSeparator(); 
	
	m_staticText4 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F5 Varia"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText4->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText4->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText4 );
	m_toolBar2->AddSeparator(); 
	
	m_toolBar2->AddSeparator(); 
	
	m_staticText51 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F6 Elimina"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	m_staticText51->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText51->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText51->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText51 );
	m_toolBar2->AddSeparator(); 
	
	m_toolBar2->AddSeparator(); 
	
	m_staticText5 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F10 Salva"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	m_staticText5->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText5->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText5->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText5 );
	m_toolBar2->AddSeparator(); 
	
	m_toolBar2->AddSeparator(); 
	
	m_staticText6 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F11 Stampa"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText6->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText6->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText6 );
	m_toolBar2->AddSeparator(); 
	
	m_toolBar2->AddSeparator(); 
	
	m_staticText201 = new wxStaticText( m_toolBar2, wxID_ANY, _T("F1 Help"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText201->Wrap( -1 );
	m_staticText201->SetFont(wxFontInfo(7).FaceName("Tahoma"));
	//m_staticText201->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Tahoma") ) );
	m_staticText201->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	m_toolBar2->AddControl( m_staticText201 );
	m_toolBar2->AddStretchableSpace();
	m_bpButton5 = new wxBitmapButton( m_toolBar2, wxID_ANY, wxBitmap( wxT("Img/go-first-2.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(22), dpiz(22)), wxDefaultPosition, wxSize( dpiz(55),-1 ),  wxBU_AUTODRAW );
	m_toolBar2->AddControl( m_bpButton5 );
	m_bpButton6 = new wxBitmapButton( m_toolBar2, wxID_ANY, wxBitmap( wxT("Img/go-next-4.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(22), dpiz(22)), wxDefaultPosition, wxSize( dpiz(55),-1 ), wxBU_AUTODRAW );
	m_toolBar2->AddControl( m_bpButton6 );
	m_bpButton7 = new wxBitmapButton( m_toolBar2, wxID_ANY, wxBitmap( wxT("Img/go-previous-4.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(22), dpiz(22)), wxDefaultPosition, wxSize( dpiz(55),-1 ), wxBU_AUTODRAW );
	m_toolBar2->AddControl( m_bpButton7 );
	m_bpButton8 = new wxBitmapButton( m_toolBar2, wxID_ANY, wxBitmap( wxT("Img/go-last-2.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(22), dpiz(22)), wxDefaultPosition, wxSize(dpiz(55),-1 ), wxBU_AUTODRAW );
	m_toolBar2->AddControl( m_bpButton8 );
	m_bpButton14 = new wxBitmapButton( m_toolBar2, wxID_ANY, wxBitmap( wxT("Img/search.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(22), dpiz(22)), wxDefaultPosition, wxSize(dpiz(55),-1 ), wxBU_AUTODRAW );
	m_toolBar2->AddControl( m_bpButton14 );
	
	m_toolBar2->Realize(); 
	
	bSizer2->Add( m_toolBar2, 0, wxEXPAND, 5 );
	this->SetSizer( bSizer2 );
	this->Layout();
	this->Fit();
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame3::OnCloseFrame ) );
	m_bpButton13->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame3::OnClickClose ), NULL, this );
}

MyFrame3::~MyFrame3()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame3::OnCloseFrame ) );
	m_bpButton13->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame3::OnClickClose ), NULL, this );
	
}
MyFrame4::MyFrame4( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 180, 180, 180 ) );
	
	this->Centre( wxBOTH );
	this->Fit();
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame4::OnCloseFrame ) );
}

MyFrame4::~MyFrame4()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame4::OnCloseFrame ) );
	
}
