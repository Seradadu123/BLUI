#include "BluDebuggerPrivatePCH.h"
#include "BluDebuggerMenu.h"
#include "BluDebuggerCommands.h"

#include "LevelEditor.h"
#include "SlateBasics.h"
#include "AssetEditorToolkit.h"
#include "MultiBoxExtender.h"

void BluDebuggerMenu::init()
{

	TExtender = MakeShareable(new FExtender);
	PluginCommands = MakeShareable(new FUICommandList);

	// Register our UI commands
	BluDebuggerCommands::Register();

	// Then map actions to the button
	PluginCommands->MapAction(
		BluDebuggerCommands::Get().DebuggerButton,
		FExecuteAction::CreateRaw(this, &BluDebuggerMenu::DebuggerButtonClicked),
		FCanExecuteAction());

	// Setup the extension
	auto TExtension = TExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &BluDebuggerMenu::Add));

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(TExtender);

	ToolbarExtensionManager = LevelEditorModule.GetToolBarExtensibilityManager();
}

void BluDebuggerMenu::Add(FToolBarBuilder& builder)
{
#define LOCTEXT_NAMESPACE "BluLocContext"
	// Add the button to the toolbar
	FSlateIcon EyeCon = FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.ViewOptions", "LevelEditor.ViewOptions.Small");
	builder.AddToolBarButton(BluDebuggerCommands::Get().DebuggerButton, NAME_None, LOCTEXT("Override", "BLUI Debugger"), LOCTEXT("ToolTipOverride", "Inspect Running HTML Pages"), EyeCon, NAME_None);
#undef LOCTEXT_NAMESPACE
}

void BluDebuggerMenu::DebuggerButtonClicked()
{
	UE_LOG(LogBluDebugger, Warning, TEXT("Button Pressed"))
}

