package io.github.kitswas.VGP_Data_Exchange;

// Should be the same as the GamepadButtons enum in the Windows API.
// https://learn.microsoft.com/en-us/uwp/api/windows.gaming.input.gamepadbuttons
// Adapted from windows.gaming.input.h
enum GameButtons {
  None(0x0),
  Menu(0x1),
  View(0x2),
  A(0x4),
  B(0x8),
  X(0x10),
  Y(0x20),
  DPadUp(0x40),
  DPadDown(0x80),
  DPadLeft(0x100),
  DPadRight(0x200),
  LeftShoulder(0x400),
  RightShoulder(0x800),
  LeftThumbstick(0x1000),
  RightThumbstick(0x2000);

  private final int value;

  GameButtons(int value) { this.value = value; }

  public int getValue() { return value; }
}
