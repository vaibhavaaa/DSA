# Makefile to delete all .exe files from subfolders

.PHONY: clean

clean:
	@echo "Deleting all .exe files in the current directory and subdirectories..."
	@find . -type f -name "*.exe" -exec rm -f {} \;
	@echo "Cleanup complete!"
