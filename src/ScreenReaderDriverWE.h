/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverWE.h
 *  Description:    Driver for the Window-Eyes screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#ifndef _SCREENREADER_DRIVER_WE_H_
#define _SCREENREADER_DRIVER_WE_H_

#include "wineyes.h"
#include "ScreenReaderDriver.h"

class ScreenReaderDriverWE : public ScreenReaderDriver {
public:
  ScreenReaderDriverWE();
  ~ScreenReaderDriverWE();
  bool Speak(const wchar_t *str, bool interrupt = false);
  bool Braille(const wchar_t *str);
  bool Silence();
  bool IsActive();
  bool Output(const wchar_t *str, bool interrupt = false);
private:
  void Initialize();
  void Finalize();
  bool IsRunning();
  _Application *controller;
  _Speech *speech;
  _Braille *braille;
  VARIANT varOpt;
};

#endif // _SCREENREADER_DRIVER_WE_H_