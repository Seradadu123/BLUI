#include "BluDebuggerPrivatePCH.h"
#include "BluDebuggerCommands.h"

void BluDebuggerCommands::RegisterCommands()
{
#define LOCTEXT_NAMESPACE "BluLocContext"
	UI_COMMAND(this->DebuggerButton, "BLUI Debugger", "Debug Running HTML Pages", EUserInterfaceActionType::Button, FInputGesture());
#undef LOCTEXT_NAMESPACE
}