#include "pch.h"
#include "BMLEDController.h"

/* Plugin Settings Window code here
std::string BMLEDController::GetPluginName() {
	return "BMLEDController";
}

void BMLEDController::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> BMLEDController
void BMLEDController::RenderSettings() {
	ImGui::TextUnformatted("BMLEDController plugin settings");
}
*/

/*
// Do ImGui rendering here
void BMLEDController::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string BMLEDController::GetMenuName()
{
	return "bmledcontroller";
}

// Title to give the menu
std::string BMLEDController::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void BMLEDController::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool BMLEDController::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool BMLEDController::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void BMLEDController::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void BMLEDController::OnClose()
{
	isWindowOpen_ = false;
}
*/
