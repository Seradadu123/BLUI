#include "BluDebuggerPrivatePCH.h"
#include "BluDebuggerMenu.h"

class FBluDebugger : public IBluDebugger
{

	/** IModuleInterface implementation */
	virtual void StartupModule() override
	{

		BluDebuggerMenu menu;
		menu.init();

		UE_LOG(LogBluDebugger, Log, TEXT("STATUS: Loaded"));

	}

	virtual void ShutdownModule() override
	{
		UE_LOG(LogBluDebugger, Log, TEXT("STATUS: Shutdown"));
	}

};




IMPLEMENT_MODULE( FBluDebugger, BluDebugger )
DEFINE_LOG_CATEGORY(LogBluDebugger);