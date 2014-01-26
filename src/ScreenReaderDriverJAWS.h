/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverJAWS.h
 *  Description:    Driver for the JAWS screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#ifndef _SCREENREADER_DRIVER_JAWS_H_
#define _SCREENREADER_DRIVER_JAWS_H_

#include "fsapi.h"
#include "ScreenReaderDriver.h"

class ScreenReaderDriverJAWS : public ScreenReaderDriver {
public:
  ScreenReaderDriverJAWS();
  ~ScreenReaderDriverJAWS();
  bool Speak(const wchar_t *str, bool interrupt = false);
  bool Braille(const wchar_t *str);
  bool Silence();
  bool IsActive();
  bool Output(const wchar_t *str, bool interrupt = false);
private:
  void Initialize();
  void Finalize();
  bool IsRunning();
  IJawsApi *controller;
};

#endif // _SCREENREADER_DRIVER_JAWS_H_