# Rainmeter-VirtualKeyRM
[![Build status](https://img.shields.io/github/workflow/status/ozone10/Rainmeter-VirtualKeyRM/Build/master?logo=Github)](https://github.com/ozone10/Rainmeter-VirtualKeyRM)
[![Build status](https://img.shields.io/appveyor/ci/ozone10/Rainmeter-VirtualKeyRM/master?logo=Appveyor)](https://ci.appveyor.com/project/ozone10/rainmeter-virtualkeyrm/branch/master)
[![Codacy Badge](https://img.shields.io/codacy/grade/917493aefb0c4288918082700f8ca5ca?logo=Codacy)](https://www.codacy.com/manual/ozone10/Rainmeter-VirtualKeyRM?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=ozone10/Rainmeter-VirtualKeyRM&amp;utm_campaign=Badge_Grade)
[![Latest release](https://img.shields.io/github/v/release/ozone10/Rainmeter-VirtualKeyRM?include_prereleases)](https://github.com/ozone10/Rainmeter-VirtualKeyRM/releases/latest)
[![Total downloads](https://img.shields.io/github/downloads/ozone10/Rainmeter-VirtualKeyRM/total.svg)](https://github.com/ozone10/Rainmeter-VirtualKeyRM/releases)
[![Licence](https://img.shields.io/github/license/ozone10/Rainmeter-VirtualKeyRM?color=9cf)](https://www.gnu.org/licenses/gpl-3.0.en.html)

Rainmeter plugin that allows to use virtual keys.  
Use it as bang [!CommandMeasure VirtualKey "Constant"].  
Get constant from here https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes  
For number or letter use "VK_N" where N is symbol you want to use. Example for A is VK_A, for 5 it is VK_5, ...

-   **Example:**

```ini
[VirtualKey]
Measure=Plugin
Plugin=VirtualKeyRM
AltKey=0
CtrlKey=0
ShiftKey=1
StartKey=1

[SomeMeter]
Meter=String
Text=Snippet Shortcut (Window+Shift+S)
LeftMouseUpAction=[!CommandMeasure VirtualKey "VK_S"]
```
