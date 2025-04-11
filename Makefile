.PHONY: install-vscode-extensions

# Target to install all required VSCode extensions
install-vscode-extensions:
	@echo "🔧 Installing VSCode extensions for C++ course..."
	@code --install-extension ms-vscode.cpptools
	@code --install-extension ms-vscode.cmake-tools
	@code --install-extension ms-vscode.cpptools-extension-pack
	@code --install-extension eamodio.gitlens
	@code --install-extension yzhang.markdown-all-in-one
	@code --install-extension beardedbear.beardedicons
	@code --install-extension ms-vscode.makefile-tools
	@code --install-extension k--kato.intellij-idea-keybindings


	@echo "✅ All extensions installed."
