#pragma once
#include "LevelEditor.h"

class BluDebuggerCommands : public TCommands<BluDebuggerCommands>
{

public:

	BluDebuggerCommands()
		: TCommands<BluDebuggerCommands>(TEXT("BluDebugger"), NSLOCTEXT("Contexts", "BluDebugger", "BLUI Editor Debugger"), NAME_None, FEditorStyle::GetStyleSetName())
	{

	}

	TSharedPtr<FUICommandInfo> DebuggerButton;
	virtual void RegisterCommands() override;

};