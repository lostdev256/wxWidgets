 #include "wx/wallctrl/WallCtrlDefaultPlaneNavigation.h"

// Declare the event table
BEGIN_EVENT_TABLE(wxWallCtrlDefaultPlaneNavigation, wxWallCtrlNavigation)
//    EVT_SIZE(wxWallCtrl::OnSize)
//	EVT_PAINT(wxWallCtrl::OnPaint)
//   EVT_ERASE_BACKGROUND(wxWallCtrl::OnEraseBackground)
	EVT_KEY_DOWN( wxWallCtrlDefaultPlaneNavigation::OnKeyDown )
//    EVT_KEY_UP( wxWallCtrl::OnKeyUp )
//	EVT_ENTER_WINDOW( wxWallCtrl::OnEnterWindow )
END_EVENT_TABLE()



wxWallCtrlDefaultPlaneNavigation::~wxWallCtrlDefaultPlaneNavigation(void)
{
}
