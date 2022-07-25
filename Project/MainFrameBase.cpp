//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: MainFrame.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "MainFrameBase.h"


// Declare the bitmap loading function
extern void wxC9ED9InitBitmapResources();

static bool bBitmapLoaded = false;


MainFrameBase::MainFrameBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxFrame(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }
    // Set icon(s) to the application/dialog
    wxIconBundle app_icons;
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("logo16"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("logo32"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("logo64"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("logo128"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("logo256"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    SetIcons( app_icons );

    
    wxBoxSizer* boxSizer_lvl_1_1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer_lvl_1_1);
    
    wxBoxSizer* boxSizer_lvl_2_1 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer_lvl_1_1->Add(boxSizer_lvl_2_1, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_ribbonBar = new wxRibbonBar(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxRIBBON_BAR_DEFAULT_STYLE);
    m_ribbonBar->SetArtProvider(new wxRibbonDefaultArtProvider);
    
    boxSizer_lvl_2_1->Add(m_ribbonBar, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    m_ribbonPageFile = new wxRibbonPage(m_ribbonBar, wxID_ANY, _("File"), wxNullBitmap, 0);
    m_ribbonPageFile->SetToolTip(_("File"));
    m_ribbonBar->SetActivePage( m_ribbonPageFile );
    
    m_ribbonPanelProjects = new wxRibbonPanel(m_ribbonPageFile, wxID_ANY, _("Projects"), wxNullBitmap, wxDefaultPosition, wxDLG_UNIT(m_ribbonPageFile, wxSize(-1,-1)), wxRIBBON_PANEL_NO_AUTO_MINIMISE|wxRIBBON_PANEL_DEFAULT_STYLE);
    m_ribbonPanelProjects->SetToolTip(_("Projects"));
    
    m_ribbonButtonBarProjects = new wxRibbonButtonBar(m_ribbonPanelProjects, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_ribbonPanelProjects, wxSize(-1,-1)), 0);
    m_ribbonButtonBarProjects->SetToolTip(_("Projects"));
    
    m_ribbonButtonBarProjects->AddButton(ID_RIBBON_NEW, _("New"), wxXmlResource::Get()->LoadBitmap(wxT("new32")), _("Create new project"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarProjects->AddButton(ID_RIBBON_OPEN, _("Open"), wxXmlResource::Get()->LoadBitmap(wxT("open32")), _("Open saved project"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarProjects->AddButton(ID_RIBBON_IMPORT, _("Import"), wxXmlResource::Get()->LoadBitmap(wxT("imp32")), _("Open saved project"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarProjects->AddButton(ID_RIBBON_GENSETTINGS, _("General Settings"), wxXmlResource::Get()->LoadBitmap(wxT("settings32")), _("Opens a dialog to set the main settings of the program"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarProjects->AddButton(ID_RIBBON_EXIT, _("Exit"), wxXmlResource::Get()->LoadBitmap(wxT("exit32")), _("Closes the application"), wxRIBBON_BUTTON_NORMAL);
    m_ribbonButtonBarProjects->Realize();
    
    m_ribbonPanelCProject = new wxRibbonPanel(m_ribbonPageFile, wxID_ANY, _("Current project"), wxNullBitmap, wxDefaultPosition, wxDLG_UNIT(m_ribbonPageFile, wxSize(-1,-1)), wxRIBBON_PANEL_NO_AUTO_MINIMISE|wxRIBBON_PANEL_DEFAULT_STYLE);
    m_ribbonPanelCProject->SetToolTip(_("Current project"));
    
    m_ribbonButtonBarCProject = new wxRibbonButtonBar(m_ribbonPanelCProject, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_ribbonPanelCProject, wxSize(-1,-1)), 0);
    
    m_ribbonButtonBarCProject->AddButton(ID_RIBBON_SAVE, _("Save"), wxXmlResource::Get()->LoadBitmap(wxT("save32")), _("Save the current project"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarCProject->AddButton(ID_RIBBON_SAVEAS, _("Save As..."), wxXmlResource::Get()->LoadBitmap(wxT("saveAs32")), _("Save as the current project"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarCProject->AddButton(ID_RIBBON_CLOSE, _("Close"), wxXmlResource::Get()->LoadBitmap(wxT("close32")), _("Close the current project"), wxRIBBON_BUTTON_NORMAL);
    m_ribbonButtonBarCProject->Realize();
    
    m_ribbonPanelHelp = new wxRibbonPanel(m_ribbonPageFile, wxID_ANY, _("Help"), wxNullBitmap, wxDefaultPosition, wxDLG_UNIT(m_ribbonPageFile, wxSize(-1,-1)), wxRIBBON_PANEL_NO_AUTO_MINIMISE|wxRIBBON_PANEL_DEFAULT_STYLE);
    m_ribbonPanelHelp->SetToolTip(_("Help"));
    
    m_ribbonButtonBarHelp = new wxRibbonButtonBar(m_ribbonPanelHelp, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_ribbonPanelHelp, wxSize(-1,-1)), 0);
    m_ribbonButtonBarHelp->SetToolTip(_("Help"));
    
    m_ribbonButtonBarHelp->AddButton(ID_RIBBON_GUIDE, _("PSP-UFU Guide"), wxXmlResource::Get()->LoadBitmap(wxT("guide32")), _("Open PSP-UFU Guide"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarHelp->AddButton(ID_RIBBON_ABOUT, _("About..."), wxXmlResource::Get()->LoadBitmap(wxT("about32")), _("About PSP-UFU"), wxRIBBON_BUTTON_NORMAL);
    m_ribbonButtonBarHelp->Realize();
    
    m_ribbonPageTools = new wxRibbonPage(m_ribbonBar, wxID_ANY, _("Tools"), wxNullBitmap, 0);
    m_ribbonPageTools->SetToolTip(_("Tools"));
    
    m_ribbonPanelClipboard = new wxRibbonPanel(m_ribbonPageTools, wxID_ANY, _("Clipboard"), wxNullBitmap, wxDefaultPosition, wxDLG_UNIT(m_ribbonPageTools, wxSize(-1,-1)), wxRIBBON_PANEL_NO_AUTO_MINIMISE|wxRIBBON_PANEL_DEFAULT_STYLE);
    m_ribbonPanelClipboard->SetToolTip(_("Clipboard"));
    
    m_ribbonButtonBarClipboard = new wxRibbonButtonBar(m_ribbonPanelClipboard, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_ribbonPanelClipboard, wxSize(-1,-1)), 0);
    m_ribbonButtonBarClipboard->SetToolTip(_("Clipboard"));
    
    m_ribbonButtonBarClipboard->AddButton(ID_RIBBON_COPY, _("Copy"), wxXmlResource::Get()->LoadBitmap(wxT("copy32")), _("Copies the selected elements"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarClipboard->AddButton(ID_RIBBON_PASTE, _("Paste"), wxXmlResource::Get()->LoadBitmap(wxT("paste32")), _("Pastes the elements from clipboard"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarClipboard->AddButton(ID_RIBBON_UNDO, _("Undo"), wxXmlResource::Get()->LoadBitmap(wxT("undo32")), _("Undoes the last action"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarClipboard->AddButton(ID_RIBBON_REDO, _("Redo"), wxXmlResource::Get()->LoadBitmap(wxT("redo32")), _("Redoes the last undo action"), wxRIBBON_BUTTON_NORMAL);
    m_ribbonButtonBarClipboard->Realize();
    
    m_ribbonPanelCircuit = new wxRibbonPanel(m_ribbonPageTools, wxID_ANY, _("Circuit"), wxNullBitmap, wxDefaultPosition, wxDLG_UNIT(m_ribbonPageTools, wxSize(-1,-1)), wxRIBBON_PANEL_NO_AUTO_MINIMISE|wxRIBBON_PANEL_DEFAULT_STYLE);
    m_ribbonPanelCircuit->SetToolTip(_("Circuit"));
    
    m_ribbonButtonBarCircuit = new wxRibbonButtonBar(m_ribbonPanelCircuit, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_ribbonPanelCircuit, wxSize(-1,-1)), 0);
    m_ribbonButtonBarCircuit->SetToolTip(_("Circuit"));
    
    m_ribbonButtonBarCircuit->AddButton(ID_RIBBON_ADDELEMENT, _("Add Element"), wxXmlResource::Get()->LoadBitmap(wxT("add32")), _("Add a new element in the project"), wxRIBBON_BUTTON_DROPDOWN);
    
    m_ribbonButtonBarCircuit->AddButton(ID_RIBBON_DRAG, _("Drag"), wxXmlResource::Get()->LoadBitmap(wxT("drag32")), _("Drag all the elements"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarCircuit->AddButton(ID_RIBBON_MOVE, _("Move"), wxXmlResource::Get()->LoadBitmap(wxT("move32")), _("Move the selected elements"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarCircuit->AddButton(ID_RIBBON_DELETE, _("Delete"), wxXmlResource::Get()->LoadBitmap(wxT("delete32")), _("Removes all selected elements"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarCircuit->AddButton(ID_RIBBON_FIT, _("Fit"), wxXmlResource::Get()->LoadBitmap(wxT("fit32")), _("Applies the drag and zoom tools to show all elements in workspace"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarCircuit->AddButton(ID_RIBBON_ROTATEC, _("Rotate Clockwise"), wxXmlResource::Get()->LoadBitmap(wxT("rotateClock32")), _("Rotate clockwise"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarCircuit->AddButton(ID_RIBBON_ROTATECC, _("Rotate Counter-clockwise"), wxXmlResource::Get()->LoadBitmap(wxT("rotateCounterClock32")), _("Rotate the selected elements counter-clockwise"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarCircuit->AddButton(ID_RIBBON_PROJSETTINGS, _("Project Settings"), wxXmlResource::Get()->LoadBitmap(wxT("settings32")), _("Opens a dialog to set the main settings of the current project"), wxRIBBON_BUTTON_NORMAL);
    m_ribbonButtonBarCircuit->Realize();
    
    m_ribbonPanelReports = new wxRibbonPanel(m_ribbonPageTools, wxID_ANY, _("Data Visualization"), wxNullBitmap, wxDefaultPosition, wxDLG_UNIT(m_ribbonPageTools, wxSize(-1,-1)), wxRIBBON_PANEL_NO_AUTO_MINIMISE|wxRIBBON_PANEL_DEFAULT_STYLE);
    m_ribbonPanelReports->SetToolTip(_("Reports"));
    
    m_ribbonButtonBarReports = new wxRibbonButtonBar(m_ribbonPanelReports, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_ribbonPanelReports, wxSize(-1,-1)), 0);
    
    m_ribbonButtonBarReports->AddButton(ID_RIBBON_DATAREPORT, _("Data Report"), wxXmlResource::Get()->LoadBitmap(wxT("dataReport32")), _("Opens a data report"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarReports->AddButton(ID_RIBBON_CHARTS, _("Charts"), wxXmlResource::Get()->LoadBitmap(wxT("chart32")), _("Open the charts"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarReports->AddButton(ID_RIBBON_HEATMAP, _("Voltage Heatmap"), wxXmlResource::Get()->LoadBitmap(wxT("heatmap32")), _("Enable/disable the voltage heatmap visualization"), wxRIBBON_BUTTON_TOGGLE);
    
    m_ribbonButtonBarReports->AddButton(ID_RIBBON_SNAPSHOT, _("Snapshot"), wxXmlResource::Get()->LoadBitmap(wxT("snap32")), _("Capture a snapshot of the circuit"), wxRIBBON_BUTTON_NORMAL);
    m_ribbonButtonBarReports->Realize();
    
    m_ribbonPageSimulation = new wxRibbonPage(m_ribbonBar, wxID_ANY, _("Simulation"), wxNullBitmap, 0);
    m_ribbonPageSimulation->SetToolTip(_("Simulation"));
    
    m_ribbonPanelContinuous = new wxRibbonPanel(m_ribbonPageSimulation, wxID_ANY, _("Continuous"), wxNullBitmap, wxDefaultPosition, wxDLG_UNIT(m_ribbonPageSimulation, wxSize(-1,-1)), wxRIBBON_PANEL_DEFAULT_STYLE);
    m_ribbonPanelContinuous->SetToolTip(_("Continuous"));
    
    m_ribbonButtonBarContinuous = new wxRibbonButtonBar(m_ribbonPanelContinuous, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_ribbonPanelContinuous, wxSize(-1,-1)), 0);
    
    m_ribbonButtonBarContinuous->AddButton(ID_RIBBON_ENABLESOL, _("Enable Solution"), wxXmlResource::Get()->LoadBitmap(wxT("playStopped32")), _("Enables the power flow and fault (if exists) calculations after any circuit change"), wxRIBBON_BUTTON_TOGGLE);
    
    m_ribbonButtonBarContinuous->AddButton(ID_RIBBON_DISABLESOL, _("Disable Solution"), wxXmlResource::Get()->LoadBitmap(wxT("pauseStopped32")), _("Disables the power flow and fault calculations after any circuit changes"), wxRIBBON_BUTTON_TOGGLE);
    
    m_ribbonButtonBarContinuous->AddButton(ID_RIBBON_RESETVOLT, _("Reset Voltages"), wxXmlResource::Get()->LoadBitmap(wxT("reset32")), _("Reset all voltages to initial state"), wxRIBBON_BUTTON_NORMAL);
    m_ribbonButtonBarContinuous->Realize();
    
    m_ribbonPanelSimulations = new wxRibbonPanel(m_ribbonPageSimulation, wxID_ANY, _("Simulations"), wxNullBitmap, wxDefaultPosition, wxDLG_UNIT(m_ribbonPageSimulation, wxSize(-1,-1)), wxRIBBON_PANEL_NO_AUTO_MINIMISE|wxRIBBON_PANEL_DEFAULT_STYLE);
    m_ribbonPanelSimulations->SetToolTip(_("Simulations"));
    
    m_ribbonButtonBarSimulations = new wxRibbonButtonBar(m_ribbonPanelSimulations, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_ribbonPanelSimulations, wxSize(-1,-1)), 0);
    m_ribbonButtonBarSimulations->SetToolTip(_("Simulations"));
    
    m_ribbonButtonBarSimulations->AddButton(ID_RIBBON_POWERFLOW, _("Power Flow"), wxXmlResource::Get()->LoadBitmap(wxT("powerFLow32")), _("Calculate the circuit power flow"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarSimulations->AddButton(ID_RIBBON_RUNSTAB, _("Run Stability"), wxXmlResource::Get()->LoadBitmap(wxT("playStopped32")), _("Run the stability calculations"), wxRIBBON_BUTTON_HYBRID);
    
    m_ribbonButtonBarSimulations->AddButton(ID_RIBBON_FAULT, _("Fault"), wxXmlResource::Get()->LoadBitmap(wxT("fault32")), _("Calculate the circuit fault (if exists)"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarSimulations->AddButton(ID_RIBBON_SCPOWER, _("Short-Circuit Power"), wxXmlResource::Get()->LoadBitmap(wxT("faultPower32")), _("Calculate the short-circuit power in all buses"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarSimulations->AddButton(ID_RIBBON_HARMDIST, _("Harmonic Distortions"), wxXmlResource::Get()->LoadBitmap(wxT("harmDist32")), _("Calculate the voltage distortions on all buses due to harmonic current sources"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarSimulations->AddButton(ID_RIBBON_FREQRESP, _("Frequency response"), wxXmlResource::Get()->LoadBitmap(wxT("freqResp32")), _("Calculate the impedance seen in a bus for varies frequencies"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBarSimulations->AddButton(ID_RIBBON_SIMULSETTINGS, _("Simulation Settings"), wxXmlResource::Get()->LoadBitmap(wxT("settings32")), _("Opens a dialog to set the settings of the simulations"), wxRIBBON_BUTTON_NORMAL);
    m_ribbonButtonBarSimulations->Realize();
    m_ribbonBar->Realize();
    wxBoxSizer* boxSizer_lvl_2_2 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer_lvl_1_1->Add(boxSizer_lvl_2_2, 1, wxEXPAND, WXC_FROM_DIP(5));
    
    m_auiNotebook = new wxAuiNotebook(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxAUI_NB_DEFAULT_STYLE|wxBK_DEFAULT);
    m_auiNotebook->SetName(wxT("m_auiNotebook"));
    
    boxSizer_lvl_2_2->Add(m_auiNotebook, 1, wxEXPAND, WXC_FROM_DIP(5));
    
    m_statusBar = new wxStatusBar(this, wxID_ANY, wxSTB_DEFAULT_STYLE);
    m_statusBar->SetFieldsCount(4);
    this->SetStatusBar(m_statusBar);
    
    
    #if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_auiNotebook)){
        wxPersistenceManager::Get().RegisterAndRestore(m_auiNotebook);
    } else {
        wxPersistenceManager::Get().Restore(m_auiNotebook);
    }
    #endif
    
    SetName(wxT("MainFrameBase"));
    SetSize(wxDLG_UNIT(this, wxSize(800,600)));
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(MainFrameBase::OnClose), NULL, this);
    m_ribbonButtonBarProjects->Connect(ID_RIBBON_NEW, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnNewClick), NULL, this);
    m_ribbonButtonBarProjects->Connect(ID_RIBBON_OPEN, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnOpenClick), NULL, this);
    m_ribbonButtonBarProjects->Connect(ID_RIBBON_IMPORT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnImportClick), NULL, this);
    m_ribbonButtonBarProjects->Connect(ID_RIBBON_GENSETTINGS, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnGeneralSettingsClick), NULL, this);
    m_ribbonButtonBarProjects->Connect(ID_RIBBON_EXIT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnExitClick), NULL, this);
    m_ribbonButtonBarCProject->Connect(ID_RIBBON_SAVE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnSaveClick), NULL, this);
    m_ribbonButtonBarCProject->Connect(ID_RIBBON_SAVEAS, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnSaveAsClick), NULL, this);
    m_ribbonButtonBarCProject->Connect(ID_RIBBON_CLOSE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnCloseClick), NULL, this);
    m_ribbonButtonBarHelp->Connect(ID_RIBBON_GUIDE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnPSPGuideClick), NULL, this);
    m_ribbonButtonBarHelp->Connect(ID_RIBBON_ABOUT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnAboutClick), NULL, this);
    m_ribbonButtonBarClipboard->Connect(ID_RIBBON_COPY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnCopyClick), NULL, this);
    m_ribbonButtonBarClipboard->Connect(ID_RIBBON_PASTE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnPasteClick), NULL, this);
    m_ribbonButtonBarClipboard->Connect(ID_RIBBON_UNDO, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnUndoClick), NULL, this);
    m_ribbonButtonBarClipboard->Connect(ID_RIBBON_REDO, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnRedoClick), NULL, this);
    m_ribbonButtonBarCircuit->Connect(ID_RIBBON_ADDELEMENT, wxEVT_COMMAND_RIBBONBUTTON_DROPDOWN_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnAddElementDropdown), NULL, this);
    m_ribbonButtonBarCircuit->Connect(ID_RIBBON_DRAG, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnDragClick), NULL, this);
    m_ribbonButtonBarCircuit->Connect(ID_RIBBON_MOVE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnMoveClick), NULL, this);
    m_ribbonButtonBarCircuit->Connect(ID_RIBBON_DELETE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnDeleteClick), NULL, this);
    m_ribbonButtonBarCircuit->Connect(ID_RIBBON_FIT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnFitClick), NULL, this);
    m_ribbonButtonBarCircuit->Connect(ID_RIBBON_ROTATEC, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnRotClockClick), NULL, this);
    m_ribbonButtonBarCircuit->Connect(ID_RIBBON_ROTATECC, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnRotCounterClockClick), NULL, this);
    m_ribbonButtonBarCircuit->Connect(ID_RIBBON_PROJSETTINGS, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnProjectSettingsClick), NULL, this);
    m_ribbonButtonBarReports->Connect(ID_RIBBON_DATAREPORT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnDataReportClick), NULL, this);
    m_ribbonButtonBarReports->Connect(ID_RIBBON_CHARTS, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnChartsClick), NULL, this);
    m_ribbonButtonBarReports->Connect(ID_RIBBON_HEATMAP, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnHeatmapClick), NULL, this);
    m_ribbonButtonBarReports->Connect(ID_RIBBON_SNAPSHOT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnSnapshotClick), NULL, this);
    m_ribbonButtonBarContinuous->Connect(ID_RIBBON_ENABLESOL, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnEnableSolutionClick), NULL, this);
    m_ribbonButtonBarContinuous->Connect(ID_RIBBON_DISABLESOL, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnDisableSolutionClick), NULL, this);
    m_ribbonButtonBarContinuous->Connect(ID_RIBBON_RESETVOLT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnResetVoltagesClick), NULL, this);
    m_ribbonButtonBarSimulations->Connect(ID_RIBBON_POWERFLOW, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnPowerFlowClick), NULL, this);
    m_ribbonButtonBarSimulations->Connect(ID_RIBBON_RUNSTAB, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnRunStabilityClick), NULL, this);
    m_ribbonButtonBarSimulations->Connect(ID_RIBBON_RUNSTAB, wxEVT_COMMAND_RIBBONBUTTON_DROPDOWN_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnStabilityDropdown), NULL, this);
    m_ribbonButtonBarSimulations->Connect(ID_RIBBON_FAULT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnFaultClick), NULL, this);
    m_ribbonButtonBarSimulations->Connect(ID_RIBBON_SCPOWER, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnSCPowerClick), NULL, this);
    m_ribbonButtonBarSimulations->Connect(ID_RIBBON_HARMDIST, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnHarmDistortionsClick), NULL, this);
    m_ribbonButtonBarSimulations->Connect(ID_RIBBON_FREQRESP, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnFreqResponseClick), NULL, this);
    m_ribbonButtonBarSimulations->Connect(ID_RIBBON_SIMULSETTINGS, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnSimulationSettingsClick), NULL, this);
    m_auiNotebook->Connect(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSE, wxAuiNotebookEventHandler(MainFrameBase::NotebookPageClosing), NULL, this);
    m_auiNotebook->Connect(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSED, wxAuiNotebookEventHandler(MainFrameBase::NotebookPageClosed), NULL, this);
    m_auiNotebook->Connect(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGED, wxAuiNotebookEventHandler(MainFrameBase::OnNotebookPageChanged), NULL, this);
    
}

MainFrameBase::~MainFrameBase()
{
    this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(MainFrameBase::OnClose), NULL, this);
    m_ribbonButtonBarProjects->Disconnect(ID_RIBBON_NEW, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnNewClick), NULL, this);
    m_ribbonButtonBarProjects->Disconnect(ID_RIBBON_OPEN, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnOpenClick), NULL, this);
    m_ribbonButtonBarProjects->Disconnect(ID_RIBBON_IMPORT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnImportClick), NULL, this);
    m_ribbonButtonBarProjects->Disconnect(ID_RIBBON_GENSETTINGS, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnGeneralSettingsClick), NULL, this);
    m_ribbonButtonBarProjects->Disconnect(ID_RIBBON_EXIT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnExitClick), NULL, this);
    m_ribbonButtonBarCProject->Disconnect(ID_RIBBON_SAVE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnSaveClick), NULL, this);
    m_ribbonButtonBarCProject->Disconnect(ID_RIBBON_SAVEAS, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnSaveAsClick), NULL, this);
    m_ribbonButtonBarCProject->Disconnect(ID_RIBBON_CLOSE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnCloseClick), NULL, this);
    m_ribbonButtonBarHelp->Disconnect(ID_RIBBON_GUIDE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnPSPGuideClick), NULL, this);
    m_ribbonButtonBarHelp->Disconnect(ID_RIBBON_ABOUT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnAboutClick), NULL, this);
    m_ribbonButtonBarClipboard->Disconnect(ID_RIBBON_COPY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnCopyClick), NULL, this);
    m_ribbonButtonBarClipboard->Disconnect(ID_RIBBON_PASTE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnPasteClick), NULL, this);
    m_ribbonButtonBarClipboard->Disconnect(ID_RIBBON_UNDO, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnUndoClick), NULL, this);
    m_ribbonButtonBarClipboard->Disconnect(ID_RIBBON_REDO, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnRedoClick), NULL, this);
    m_ribbonButtonBarCircuit->Disconnect(ID_RIBBON_ADDELEMENT, wxEVT_COMMAND_RIBBONBUTTON_DROPDOWN_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnAddElementDropdown), NULL, this);
    m_ribbonButtonBarCircuit->Disconnect(ID_RIBBON_DRAG, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnDragClick), NULL, this);
    m_ribbonButtonBarCircuit->Disconnect(ID_RIBBON_MOVE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnMoveClick), NULL, this);
    m_ribbonButtonBarCircuit->Disconnect(ID_RIBBON_DELETE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnDeleteClick), NULL, this);
    m_ribbonButtonBarCircuit->Disconnect(ID_RIBBON_FIT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnFitClick), NULL, this);
    m_ribbonButtonBarCircuit->Disconnect(ID_RIBBON_ROTATEC, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnRotClockClick), NULL, this);
    m_ribbonButtonBarCircuit->Disconnect(ID_RIBBON_ROTATECC, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnRotCounterClockClick), NULL, this);
    m_ribbonButtonBarCircuit->Disconnect(ID_RIBBON_PROJSETTINGS, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnProjectSettingsClick), NULL, this);
    m_ribbonButtonBarReports->Disconnect(ID_RIBBON_DATAREPORT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnDataReportClick), NULL, this);
    m_ribbonButtonBarReports->Disconnect(ID_RIBBON_CHARTS, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnChartsClick), NULL, this);
    m_ribbonButtonBarReports->Disconnect(ID_RIBBON_HEATMAP, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnHeatmapClick), NULL, this);
    m_ribbonButtonBarReports->Disconnect(ID_RIBBON_SNAPSHOT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnSnapshotClick), NULL, this);
    m_ribbonButtonBarContinuous->Disconnect(ID_RIBBON_ENABLESOL, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnEnableSolutionClick), NULL, this);
    m_ribbonButtonBarContinuous->Disconnect(ID_RIBBON_DISABLESOL, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnDisableSolutionClick), NULL, this);
    m_ribbonButtonBarContinuous->Disconnect(ID_RIBBON_RESETVOLT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnResetVoltagesClick), NULL, this);
    m_ribbonButtonBarSimulations->Disconnect(ID_RIBBON_POWERFLOW, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnPowerFlowClick), NULL, this);
    m_ribbonButtonBarSimulations->Disconnect(ID_RIBBON_RUNSTAB, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnRunStabilityClick), NULL, this);
    m_ribbonButtonBarSimulations->Disconnect(ID_RIBBON_RUNSTAB, wxEVT_COMMAND_RIBBONBUTTON_DROPDOWN_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnStabilityDropdown), NULL, this);
    m_ribbonButtonBarSimulations->Disconnect(ID_RIBBON_FAULT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnFaultClick), NULL, this);
    m_ribbonButtonBarSimulations->Disconnect(ID_RIBBON_SCPOWER, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnSCPowerClick), NULL, this);
    m_ribbonButtonBarSimulations->Disconnect(ID_RIBBON_HARMDIST, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnHarmDistortionsClick), NULL, this);
    m_ribbonButtonBarSimulations->Disconnect(ID_RIBBON_FREQRESP, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnFreqResponseClick), NULL, this);
    m_ribbonButtonBarSimulations->Disconnect(ID_RIBBON_SIMULSETTINGS, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(MainFrameBase::OnSimulationSettingsClick), NULL, this);
    m_auiNotebook->Disconnect(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSE, wxAuiNotebookEventHandler(MainFrameBase::NotebookPageClosing), NULL, this);
    m_auiNotebook->Disconnect(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSED, wxAuiNotebookEventHandler(MainFrameBase::NotebookPageClosed), NULL, this);
    m_auiNotebook->Disconnect(wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGED, wxAuiNotebookEventHandler(MainFrameBase::OnNotebookPageChanged), NULL, this);
    
}