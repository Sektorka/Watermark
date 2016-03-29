#include "Watermark.h"
#include <wx/app.h>

// Define the MainApp
class MainApp : public wxApp
{
public:
    MainApp() {}
    virtual ~MainApp() {}

    virtual bool OnInit() {
        // Add the common image handlers
        wxImage::AddHandler( new wxPNGHandler );
        wxImage::AddHandler( new wxJPEGHandler );

        Watermark *mainFrame = new Watermark(NULL);
        SetTopWindow(mainFrame);
        return GetTopWindow()->Show();
    }
};

//DECLARE_APP(MainApp)

wxIMPLEMENT_APP(MainApp);

//IMPLEMENT_APP(MainApp)