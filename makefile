all: build

build:
	mkdir -p build
	cd build && cmake .. && make

.PHONY: build