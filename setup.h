// generated by Fast Light User Interface Designer (fluid) version 1.00

#ifndef setup_h
#define setup_h
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include "setup2.h"
#include <FL/Fl_Button.H>
#include "Fl_Wizard.h"
extern Fl_Wizard *Wizard;
#include <FL/Fl_Group.H>
extern Fl_Group *WelcomePane;
#include <FL/Fl_Box.H>
extern Fl_Group *SoftwarePane;
#include "Fl_Check_Browser.h"
extern Fl_Check_Browser *SoftwareList;
extern Fl_Group *InstallPane;
#include <FL/Fl_Slider.H>
extern Fl_Slider *InstallPercent;
#include <FL/Fl_Browser.H>
extern Fl_Browser *InstallLog;
Fl_Window* make_window();
#endif