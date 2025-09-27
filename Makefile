# Build
build:
	mkdir -p build
	gcc src/*.c -Iincludes -o build/todo

# Run from build folder
run:
	./build/todo

# Clean build folder
clean:
	rm -rf build

# Build and run together
dev: build run

# Help command
help:
	@echo "Available commands:"
	@echo "  make run   : for running c program files"
	@echo "  make build : for building c program files"
	@echo "  make clean : for deleting build folder"
	@echo "  make dev   : for building and running together"
	@echo "  make help  : for showing all commands"

.PHONY: build run clean dev help
