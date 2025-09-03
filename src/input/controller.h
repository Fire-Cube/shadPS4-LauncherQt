// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include <string>
#include <SDL3/SDL.h>

namespace Input {

static std::string SelectedGamepad;

std::string GetSelectedGamepad();

void SetSelectedGamepad(std::string GUID);
std::string GetGUIDString(SDL_JoystickID* gamepadIDs, int index);

int GetIndexfromGUID(SDL_JoystickID* gamepadIDs, int gamepadCount, std::string GUID);

} // namespace Input
