package io.github.kitswas.VGP_Data_Exchange;

// Should be the same as the GamepadButtons enum in the Windows API.
// https://learn.microsoft.com/en-us/uwp/api/windows.gaming.input.gamepadbuttons
// Adapted from windows.gaming.input.h
public enum GameButtons {
    None((short) 0x0),
    Menu((short) 0x1),
    View((short) 0x2),
    A((short) 0x4),
    B((short) 0x8),
    X((short) 0x10),
    Y((short) 0x20),
    DPadUp((short) 0x40),
    DPadDown((short) 0x80),
    DPadLeft((short) 0x100),
    DPadRight((short) 0x200),
    LeftShoulder((short) 0x400),
    RightShoulder((short) 0x800),
    LeftThumbstick((short) 0x1000),
    RightThumbstick((short) 0x2000);

    private final short value;

    GameButtons(short value) {
        this.value = value;
    }

    public short getValue() {
        return value;
    }
}
