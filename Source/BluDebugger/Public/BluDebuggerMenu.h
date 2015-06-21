#pragma once

class BluDebuggerCommands;
class FExtensibilityManager;

class BluDebuggerMenu
{

public:
	void init();

private:
	void Add(FToolBarBuilder& Builder);
	void DebuggerButtonClicked();

	TSharedPtr<BluDebuggerCommands> Commands;
	TSharedPtr<FExtensibilityManager> ToolbarExtensionManager;
	TSharedPtr<FExtender> TExtender;
	TSharedPtr<FUICommandList> PluginCommands;

};