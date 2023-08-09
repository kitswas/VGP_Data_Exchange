// Should be the same as the GamepadButtons enum in the Windows API.
// https://learn.microsoft.com/en-us/uwp/api/windows.gaming.input.gamepadbuttons
// Taken from windows.gaming.input.h
#pragma once

enum GamepadButtons
{
	GamepadButtons_None = 0x0,
	GamepadButtons_Menu = 0x1,
	GamepadButtons_View = 0x2,
	GamepadButtons_A = 0x4,
	GamepadButtons_B = 0x8,
	GamepadButtons_X = 0x10,
	GamepadButtons_Y = 0x20,
	GamepadButtons_DPadUp = 0x40,
	GamepadButtons_DPadDown = 0x80,
	GamepadButtons_DPadLeft = 0x100,
	GamepadButtons_DPadRight = 0x200,
	GamepadButtons_LeftShoulder = 0x400,
	GamepadButtons_RightShoulder = 0x800,
	GamepadButtons_LeftThumbstick = 0x1000,
	GamepadButtons_RightThumbstick = 0x2000
};
