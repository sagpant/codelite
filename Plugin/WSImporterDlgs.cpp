//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: WSImporterDlgs.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "WSImporterDlgs.h"


// Declare the bitmap loading function
extern void wxC55BDInitBitmapResources();

static bool bBitmapLoaded = false;


EnvVarImporterDlgBase::EnvVarImporterDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC55BDInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer4 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer4);
    
    wxBoxSizer* boxSizer18 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer4->Add(boxSizer18, 1, wxALL|wxEXPAND, 5);
    
    m_staticText26 = new wxStaticText(this, wxID_ANY, _("Project Name:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer18->Add(m_staticText26, 0, wxALL, 5);
    
    m_projectName = new wxStaticText(this, wxID_ANY, _("Static Text Label"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_projectName->SetForegroundColour(wxColour(wxT("rgb(255,0,0)")));
    
    boxSizer18->Add(m_projectName, 0, wxALL, 5);
    
    boxSizer18->Add(0, 0, 1, wxALL, 5);
    
    m_staticText20 = new wxStaticText(this, wxID_ANY, _("Configuration Name:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer18->Add(m_staticText20, 0, wxALL, 5);
    
    m_confName = new wxStaticText(this, wxID_ANY, _("Static Text Label"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_confName->SetForegroundColour(wxColour(wxT("rgb(255,0,0)")));
    
    boxSizer18->Add(m_confName, 0, wxALL, 5);
    
    boxSizer18->Add(0, 0, 1, wxALL, 5);
    
    wxBoxSizer* boxSizer22 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer4->Add(boxSizer22, 1, wxALL|wxEXPAND, 5);
    
    m_staticText6 = new wxStaticText(this, wxID_ANY, _("Please define the value of the following variables:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer22->Add(m_staticText6, 0, wxALL, 5);
    
    m_envVars = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_MULTILINE);
    
    boxSizer4->Add(m_envVars, 0, wxALL|wxEXPAND, 5);
    m_envVars->SetMinSize(wxSize(600,200));
    
    wxBoxSizer* boxSizer16 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer4->Add(boxSizer16, 1, wxALL|wxEXPAND, 0);
    
    m_btnImport = new wxButton(this, wxID_ANY, _("Import"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer16->Add(m_btnImport, 0, wxALL, 5);
    
    m_btnContinue = new wxButton(this, wxID_ANY, _("Continue"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer16->Add(m_btnContinue, 0, wxALL, 5);
    
    m_btnNotImport = new wxButton(this, wxID_ANY, _("Skip"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer16->Add(m_btnNotImport, 0, wxALL, 5);
    
    SetSizeHints(600,360);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_btnImport->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarImporterDlgBase::OnImport), NULL, this);
    m_btnContinue->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarImporterDlgBase::OnContinue), NULL, this);
    m_btnNotImport->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarImporterDlgBase::OnSkip), NULL, this);
    
}

EnvVarImporterDlgBase::~EnvVarImporterDlgBase()
{
    m_btnImport->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarImporterDlgBase::OnImport), NULL, this);
    m_btnContinue->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarImporterDlgBase::OnContinue), NULL, this);
    m_btnNotImport->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnvVarImporterDlgBase::OnSkip), NULL, this);
    
}
