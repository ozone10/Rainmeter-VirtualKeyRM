/*
  Copyright (C) 2019 oZone
  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

// https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
const std::unordered_map<std::wstring, WORD> keyTable({
    { L"VK_LBUTTON", VK_LBUTTON },
    { L"VK_RBUTTON", VK_RBUTTON },
    { L"VK_CANCEL", VK_CANCEL },
    { L"VK_MBUTTON", VK_MBUTTON },
    { L"VK_XBUTTON1", VK_XBUTTON1 },
    { L"VK_XBUTTON2", VK_XBUTTON2 },

    { L"VK_BACK", VK_BACK },
    { L"VK_TAB", VK_TAB },

    { L"VK_CLEAR", VK_CLEAR },
    { L"VK_RETURN", VK_RETURN },

    { L"VK_SHIFT", VK_SHIFT },          //shift
    { L"VK_CONTROL", VK_CONTROL },      //ctrl
    { L"VK_MENU", VK_MENU },            //alt
    { L"VK_PAUSE", VK_PAUSE },
    { L"VK_CAPITAL", VK_CAPITAL },      //capslock

    { L"VK_KANA", VK_KANA },
    { L"VK_HANGUEL", VK_HANGEUL },
    { L"VK_HANGUL", VK_HANGUL },

    { L"VK_JUNJA", VK_JUNJA },
    { L"VK_FINAL", VK_FINAL },
    { L"VK_HANJA", VK_HANJA },
    { L"VK_KANJI", VK_KANJI },

    { L"VK_ESCAPE", VK_ESCAPE },

    { L"VK_CONVERT", VK_CONVERT },
    { L"VK_NONCONVERT", VK_NONCONVERT },
    { L"VK_ACCEPT", VK_ACCEPT },
    { L"VK_MODECHANGE", VK_MODECHANGE },

    { L"VK_SPACE", VK_SPACE },
    { L"VK_PRIOR", VK_PRIOR },
    { L"VK_NEXT", VK_NEXT },
    { L"VK_END", VK_END },
    { L"VK_HOME", VK_HOME },
    { L"VK_LEFT", VK_LEFT },
    { L"VK_UP", VK_UP },
    { L"VK_RIGHT", VK_RIGHT },
    { L"VK_DOWN", VK_DOWN },
    { L"VK_SELECT", VK_SELECT },
    { L"VK_PRINT", VK_PRINT },
    { L"VK_SNAPSHOT", VK_SNAPSHOT },
    { L"VK_INSERT", VK_INSERT },
    { L"VK_DELETE", VK_DELETE },
    { L"VK_HELP", VK_HELP },

    { L"VK_0", 0x30 },
    { L"VK_1", 0x31 },
    { L"VK_2", 0x32 },
    { L"VK_3", 0x33 },
    { L"VK_4", 0x34 },
    { L"VK_5", 0x35 },
    { L"VK_6", 0x36 },
    { L"VK_7", 0x37 },
    { L"VK_8", 0x38 },
    { L"VK_9", 0x39 },

    { L"VK_A", 0x41 },
    { L"VK_B", 0x42 },
    { L"VK_C", 0x43 },
    { L"VK_D", 0x44 },
    { L"VK_E", 0x45 },
    { L"VK_F", 0x46 },
    { L"VK_G", 0x47 },
    { L"VK_H", 0x48 },
    { L"VK_I", 0x49 },
    { L"VK_J", 0x4A },
    { L"VK_K", 0x4B },
    { L"VK_L", 0x4C },
    { L"VK_M", 0x4D },
    { L"VK_N", 0x4E },
    { L"VK_O", 0x4F },
    { L"VK_P", 0x50 },
    { L"VK_Q", 0x51 },
    { L"VK_R", 0x52 },
    { L"VK_S", 0x53 },
    { L"VK_T", 0x54 },
    { L"VK_U", 0x55 },
    { L"VK_V", 0x56 },
    { L"VK_W", 0x57 },
    { L"VK_X", 0x58 },
    { L"VK_Y", 0x59 },
    { L"VK_Z", 0x5A },

    { L"VK_LWIN", VK_LWIN },        //start (left)
    { L"VK_RWIN", VK_RWIN },        //start (right)
    { L"VK_APPS", VK_APPS },

    { L"VK_SLEEP", VK_SLEEP },

    { L"VK_NUMPAD0", VK_NUMPAD0 },
    { L"VK_NUMPAD1", VK_NUMPAD1 },
    { L"VK_NUMPAD2", VK_NUMPAD2 },
    { L"VK_NUMPAD3", VK_NUMPAD3 },
    { L"VK_NUMPAD4", VK_NUMPAD4 },
    { L"VK_NUMPAD5", VK_NUMPAD5 },
    { L"VK_NUMPAD6", VK_NUMPAD6 },
    { L"VK_NUMPAD7", VK_NUMPAD7 },
    { L"VK_NUMPAD8", VK_NUMPAD8 },
    { L"VK_NUMPAD9", VK_NUMPAD9 },
    { L"VK_MULTIPLY", VK_MULTIPLY },
    { L"VK_ADD", VK_ADD },
    { L"VK_SEPARATOR", VK_SEPARATOR },
    { L"VK_SUBTRACT", VK_SUBTRACT },
    { L"VK_DECIMAL", VK_DECIMAL },
    { L"VK_DIVIDE", VK_DIVIDE },
    { L"VK_F1", VK_F1 },
    { L"VK_F2", VK_F2 },
    { L"VK_F3", VK_F3 },
    { L"VK_F4", VK_F4 },
    { L"VK_F5", VK_F5 },
    { L"VK_F6", VK_F6 },
    { L"VK_F7", VK_F7 },
    { L"VK_F8", VK_F8 },
    { L"VK_F9", VK_F9 },
    { L"VK_F10", VK_F10 },
    { L"VK_F11", VK_F11 },
    { L"VK_F12", VK_F12 },
    { L"VK_F13", VK_F13 },
    { L"VK_F14", VK_F14 },
    { L"VK_F15", VK_F15 },
    { L"VK_F16", VK_F16 },
    { L"VK_F17", VK_F17 },
    { L"VK_F18", VK_F18 },
    { L"VK_F19", VK_F19 },
    { L"VK_F20", VK_F20 },
    { L"VK_F21", VK_F21 },
    { L"VK_F22", VK_F22 },
    { L"VK_F23", VK_F23 },
    { L"VK_F24", VK_F24 },

    { L"VK_NAVIGATION_VIEW", VK_NAVIGATION_VIEW },
    { L"VK_NAVIGATION_MENU", VK_NAVIGATION_MENU },
    { L"VK_NAVIGATION_UP", VK_NAVIGATION_UP },
    { L"VK_NAVIGATION_DOWN", VK_NAVIGATION_DOWN },
    { L"VK_NAVIGATION_LEFT", VK_NAVIGATION_LEFT },
    { L"VK_NAVIGATION_RIGHT", VK_NAVIGATION_RIGHT },
    { L"VK_NAVIGATION_ACCEPT", VK_NAVIGATION_ACCEPT },
    { L"VK_NAVIGATION_CANCEL", VK_NAVIGATION_CANCEL },

    { L"VK_NUMLOCK", VK_NUMLOCK },
    { L"VK_SCROLL", VK_SCROLL },

    { L"VK_OEM_NEC_EQUAL", VK_OEM_NEC_EQUAL },

    { L"VK_OEM_FJ_JISHO", VK_OEM_FJ_JISHO },
    { L"VK_OEM_FJ_MASSHOU", VK_OEM_FJ_MASSHOU },
    { L"VK_OEM_FJ_TOUROKU", VK_OEM_FJ_TOUROKU },
    { L"VK_OEM_FJ_LOYA", VK_OEM_FJ_LOYA },
    { L"VK_OEM_FJ_ROYA", VK_OEM_FJ_ROYA },

    { L"VK_LSHIFT", VK_LSHIFT },
    { L"VK_RSHIFT", VK_RSHIFT },
    { L"VK_LCONTROL", VK_LCONTROL },
    { L"VK_RCONTROL", VK_RCONTROL },
    { L"VK_LMENU", VK_LMENU },
    { L"VK_RMENU", VK_RMENU },

    { L"VK_BROWSER_BACK", VK_BROWSER_BACK },
    { L"VK_BROWSER_FORWARD", VK_BROWSER_FORWARD },
    { L"VK_BROWSER_REFRESH", VK_BROWSER_REFRESH },
    { L"VK_BROWSER_STOP", VK_BROWSER_STOP },
    { L"VK_BROWSER_SEARCH", VK_BROWSER_SEARCH },
    { L"VK_BROWSER_FAVORITES", VK_BROWSER_FAVORITES },
    { L"VK_BROWSER_HOME", VK_BROWSER_HOME },

    { L"VK_VOLUME_MUTE", VK_VOLUME_MUTE },
    { L"VK_VOLUME_DOWN", VK_VOLUME_DOWN },
    { L"VK_VOLUME_UP", VK_VOLUME_UP },
    { L"VK_MEDIA_NEXT_TRACK", VK_MEDIA_NEXT_TRACK },
    { L"VK_MEDIA_PREV_TRACK", VK_MEDIA_PREV_TRACK },
    { L"VK_MEDIA_STOP", VK_MEDIA_STOP },
    { L"VK_MEDIA_PLAY_PAUSE", VK_MEDIA_PLAY_PAUSE },
    { L"VK_LAUNCH_MAIL", VK_LAUNCH_MAIL },
    { L"VK_LAUNCH_MEDIA_SELECT", VK_LAUNCH_MEDIA_SELECT },
    { L"VK_LAUNCH_APP1", VK_LAUNCH_APP1 },
    { L"VK_LAUNCH_APP2", VK_LAUNCH_APP2 },

    { L"VK_OEM_1", VK_OEM_1 },
    { L"VK_OEM_PLUS", VK_OEM_PLUS },
    { L"VK_OEM_COMMA", VK_OEM_COMMA },
    { L"VK_OEM_MINUS", VK_OEM_MINUS },
    { L"VK_OEM_PERIOD", VK_OEM_PERIOD },
    { L"VK_OEM_2", VK_OEM_2 },
    { L"VK_OEM_3", VK_OEM_3 },

    { L"VK_GAMEPAD_A", VK_GAMEPAD_A },
    { L"VK_GAMEPAD_B", VK_GAMEPAD_B },
    { L"VK_GAMEPAD_X", VK_GAMEPAD_X },
    { L"VK_GAMEPAD_Y", VK_GAMEPAD_Y },
    { L"VK_GAMEPAD_RIGHT_SHOULDER", VK_GAMEPAD_RIGHT_SHOULDER },
    { L"VK_GAMEPAD_LEFT_SHOULDER", VK_GAMEPAD_LEFT_SHOULDER },
    { L"VK_GAMEPAD_LEFT_TRIGGER", VK_GAMEPAD_LEFT_TRIGGER },
    { L"VK_GAMEPAD_RIGHT_TRIGGER", VK_GAMEPAD_RIGHT_TRIGGER },
    { L"VK_GAMEPAD_DPAD_UP", VK_GAMEPAD_DPAD_UP },
    { L"VK_GAMEPAD_DPAD_DOWN", VK_GAMEPAD_DPAD_DOWN },
    { L"VK_GAMEPAD_DPAD_LEFT", VK_GAMEPAD_DPAD_LEFT },
    { L"VK_GAMEPAD_DPAD_RIGHT", VK_GAMEPAD_DPAD_RIGHT },
    { L"VK_GAMEPAD_MENU", VK_GAMEPAD_MENU },
    { L"VK_GAMEPAD_VIEW", VK_GAMEPAD_VIEW },
    { L"VK_GAMEPAD_LEFT_THUMBSTICK_BUTTON", VK_GAMEPAD_LEFT_THUMBSTICK_BUTTON },
    { L"VK_GAMEPAD_RIGHT_THUMBSTICK_BUTTON", VK_GAMEPAD_RIGHT_THUMBSTICK_BUTTON },
    { L"VK_GAMEPAD_LEFT_THUMBSTICK_UP", VK_GAMEPAD_LEFT_THUMBSTICK_UP },
    { L"VK_GAMEPAD_LEFT_THUMBSTICK_DOWN", VK_GAMEPAD_LEFT_THUMBSTICK_DOWN },
    { L"VK_GAMEPAD_LEFT_THUMBSTICK_RIGHT", VK_GAMEPAD_LEFT_THUMBSTICK_RIGHT },
    { L"VK_GAMEPAD_LEFT_THUMBSTICK_LEFT", VK_GAMEPAD_LEFT_THUMBSTICK_LEFT },
    { L"VK_GAMEPAD_RIGHT_THUMBSTICK_UP", VK_GAMEPAD_RIGHT_THUMBSTICK_UP },
    { L"VK_GAMEPAD_RIGHT_THUMBSTICK_DOWN", VK_GAMEPAD_RIGHT_THUMBSTICK_DOWN },
    { L"VK_GAMEPAD_RIGHT_THUMBSTICK_RIGHT", VK_GAMEPAD_RIGHT_THUMBSTICK_RIGHT },
    { L"VK_GAMEPAD_RIGHT_THUMBSTICK_LEFT", VK_GAMEPAD_RIGHT_THUMBSTICK_LEFT },

    { L"VK_OEM_4", VK_OEM_4 },
    { L"VK_OEM_5", VK_OEM_5 },
    { L"VK_OEM_6", VK_OEM_6 },
    { L"VK_OEM_7", VK_OEM_7 },
    { L"VK_OEM_8", VK_OEM_8 },

    { L"VK_OEM_AX", VK_OEM_AX },
    { L"VK_OEM_102", VK_OEM_102 },
    { L"VK_ICO_HELP", VK_ICO_HELP },
    { L"VK_ICO_00", VK_ICO_00 },

    { L"VK_PROCESSKEY", VK_PROCESSKEY },

    { L"VK_ICO_CLEAR", VK_ICO_CLEAR },

    { L"VK_PACKET", VK_PACKET },

    { L"VK_OEM_RESET", VK_OEM_RESET },
    { L"VK_OEM_JUMP", VK_OEM_JUMP },
    { L"VK_OEM_PA1", VK_OEM_PA1 },
    { L"VK_OEM_PA2", VK_OEM_PA2 },
    { L"VK_OEM_PA3", VK_OEM_PA3 },
    { L"VK_OEM_WSCTRL", VK_OEM_WSCTRL },
    { L"VK_OEM_CUSEL", VK_OEM_CUSEL },
    { L"VK_OEM_ATTN", VK_OEM_ATTN },
    { L"VK_OEM_FINISH", VK_OEM_FINISH },
    { L"VK_OEM_COPY", VK_OEM_COPY },
    { L"VK_OEM_AUTO", VK_OEM_AUTO },
    { L"VK_OEM_ENLW", VK_OEM_ENLW },
    { L"VK_OEM_BACKTAB", VK_OEM_BACKTAB },

    { L"VK_ATTN", VK_ATTN },
    { L"VK_CRSEL", VK_CRSEL },
    { L"VK_EXSEL", VK_EXSEL },
    { L"VK_EREOF", VK_EREOF },
    { L"VK_PLAY", VK_PLAY },
    { L"VK_ZOOM", VK_ZOOM },
    { L"VK_NONAME", VK_NONAME },
    { L"VK_PA1", VK_PA1 },
    { L"VK_OEM_CLEAR", VK_OEM_CLEAR } });

struct Measure {
    //WORD key = 0;
    void* rm = nullptr;
    bool altKey = false;
    bool ctrlKey = false;
    bool shiftKey = false;
    bool startKey = false;
    bool modKeys = false;
    int bangUsed = 0;
};

inline INPUT InitKeyInput(WORD key);
inline void SendModKeyInput(Measure* measure, INPUT input);
inline void SendKey(WORD key);
inline void SendModKey(WORD key, Measure* measure);
