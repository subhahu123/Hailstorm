/*
 * Copyright 2011 - 2014 Scott MacDonald
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include <string>

/**
 * Wrapper implementation of the class Windows console.
 *  NOTE: You can only create one instance of this class, otherwise bad things will happen. (Windows limitation).
 */
class DesktopConsole final
{
public:
    DesktopConsole(
        const std::wstring& windowTitle,
        bool redirectStandardInputAndOutput);
    DesktopConsole(const DesktopConsole&);

    ~DesktopConsole();

    DesktopConsole& operator =(const DesktopConsole&);


private:
    void Initialize(
        const std::wstring& windowTitle,
        bool redirectStandardInputAndOutput);

    void FreeConsole();
};