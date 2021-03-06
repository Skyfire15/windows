 /***************************************************************************
  *
  * File Name: addres.h 
  *
  * Copyright (C) 1993, 1994 Hewlett-Packard Company.  
  * All rights reserved.
  *
  * 11311 Chinden Blvd.
  * Boise, Idaho  83714
  *
  * This is a part of the HP JetAdmin Printer Utility
  *
  * This source code is only intended as a supplement for support and 
  * localization of HP JetAdmin by 3rd party Operating System vendors.
  * Modification of source code cannot be made without the express written
  * consent of Hewlett-Packard.
  *
  *	
  * Description: 
  *
  * Author:  Name 
  *        
  *
  * Modification history:
  *
  *     date      initials     change description
  *
  *   mm-dd-yy    MJB     	
  *
  *
  *
  *
  *
  *
  ***************************************************************************/

#ifndef ADDRES_H
#define ADDRES_H

extern HCOMPONENT ghFontHandle;

LRESULT OnContextHelpFontDetails(WPARAM  wParam, LPARAM  lParam);
LRESULT OnF1HelpFontDetails(WPARAM  wParam, LPARAM  lParam);

DLL_EXPORT(BOOL) APIENTRY AddResourcesProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

#endif //ADDRES_H
