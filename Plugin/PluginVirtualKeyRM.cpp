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

#include "PluginVirtualKeyRM.h"

// Note: GetString, ExecuteBang and an unnamed function for use as a section variable
// have been commented out. Uncomment any functions as needed.
// For more information, see the SDK docs: https://docs.rainmeter.net/developers/plugin/cpp/

INPUT InitKeyInput(WORD key)
{
    KEYBDINPUT kbi;
    kbi.wVk = key;
    kbi.wScan = 0;
    kbi.dwFlags = 0;
    kbi.time = 0;
    kbi.dwExtraInfo = static_cast<ULONG_PTR>(GetMessageExtraInfo());

    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki = kbi;

    return input;
}

void SendModKeyInput(Measure* measure, INPUT input)
{
    if (measure->altKey) {
        input.ki.wVk = VK_MENU;
        SendInput(1, &input, sizeof(INPUT));
    }
    if (measure->ctrlKey) {
        input.ki.wVk = VK_CONTROL;
        SendInput(1, &input, sizeof(INPUT));
    }
    if (measure->shiftKey) {
        input.ki.wVk = VK_SHIFT;
        SendInput(1, &input, sizeof(INPUT));
    }
    if (measure->startKey) {
        input.ki.wVk = VK_LWIN;
        SendInput(1, &input, sizeof(INPUT));
    }
}

void SendKey(WORD key)
{
    auto input = InitKeyInput(key);
    SendInput(1, &input, sizeof(INPUT));

    input.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &input, sizeof(INPUT));
}

void SendModKey(WORD key, Measure* measure)
{
    auto input = InitKeyInput(key);
    SendModKeyInput(measure, input);

    input.ki.wVk = key;
    SendInput(1, &input, sizeof(INPUT));

    input.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &input, sizeof(INPUT));

    SendModKeyInput(measure, input);
}

PLUGIN_EXPORT void Initialize(void** data, void* rm)
{
    auto measure = new Measure;
    *data = measure;

    measure->rm = rm;

    measure->altKey = RmReadInt(rm, L"AltKey", 0) > 0;
    measure->ctrlKey = RmReadInt(rm, L"CtrlKey", 0) > 0;
    measure->shiftKey = RmReadInt(rm, L"ShiftKey", 0) > 0;
    measure->startKey = RmReadInt(rm, L"StartKey", 0) > 0;

    if (measure->altKey || measure->ctrlKey || measure->startKey || measure->shiftKey) {
        measure->modKeys = true;
    }
}

PLUGIN_EXPORT void Reload(void* data, void* rm, double* /*maxValue*/)
{
    auto measure = static_cast<Measure*>(data);
    measure->rm = rm;
}

PLUGIN_EXPORT double Update(void* data)
{
    auto measure = static_cast<Measure*>(data);
    return static_cast<double>(measure->bangUsed);
}

//PLUGIN_EXPORT LPCWSTR GetString(void* data)
//{
//    auto measure = static_cast<Measure*>(data);
//    return L"";
//}

PLUGIN_EXPORT void ExecuteBang(void* data, LPCWSTR args)
{
    auto measure = static_cast<Measure*>(data);

    std::wstring sKey = args;
    std::transform(sKey.begin(), sKey.end(), sKey.begin(), ::toupper);
    auto vKey = keyTable.find(sKey);
    if (vKey == keyTable.end()) {
        RmLogF(measure->rm, LOG_ERROR, L"Unknow virtual key: %s.", args);
        measure->bangUsed = -1;
    }
    else if (measure->modKeys) {
        SendModKey(vKey->second, measure);
        measure->bangUsed = 1;
    }
    else {
        SendKey(vKey->second);
        measure->bangUsed = 1;
    }
}

//PLUGIN_EXPORT LPCWSTR (void* data, const int argc, const WCHAR* argv[])
//{
//    auto measure = static_cast<Measure*>(data);
//    return nullptr;
//}

PLUGIN_EXPORT void Finalize(void* data)
{
    auto measure = static_cast<Measure*>(data);
    delete measure;
}
