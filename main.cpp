/**
 * @file main.cpp
 * @author Tobias Triffterer
 * @version 0.1
 *
 * @brief Application entry point
 *
 * Setup the environment and start running.
 **/

#include <iostream>

#include <QApplication>
#include <QByteArray>

#include <kaboutdata.h>
#include <kapplication.h>
#include <kcmdlineargs.h>

#include <kmessagebox.h>

#undef nullptr

int main(int argc, char** argv)
{
    KAboutData about(QByteArray("sshfsAutomountNAS"),                            // appName - program name used internally
		     QByteArray("sshfsAutomountNAS"),                            // catalogName - translation catalog name
                     ki18n("sshfsAutomountNAS"),                                 // programName - displayable progame name
                     QByteArray("0.1"),                                          // version - program version string
                     ki18n("Mount NAS share via sshfs when connected to home network"),   // shortDescription - what program does
                     KAboutData::License_GPL_V3,                                 // licenceType
                     ki18n("© 2016 Tobias Triffterer"),                          // copyrightStatement
                     ki18n("Just a hobby project - no warranty whatsoever"),     // text - any information
                     QByteArray("http://github.com/ttrubep1/sshfsAutomountNAS"), // homePageAddress
                     QByteArray("tobias@ep1.ruhr-uni-bochum.de")                 // bugsEmailAddress
                    );
    KCmdLineArgs::init(argc, argv, &about);
    KApplication app(true);
    KMessageBox::information(nullptr, i18n("Hello World!"), i18n("Test"), QString());
    return app.exec();
}
