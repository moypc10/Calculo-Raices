all: build

build:
	mkdir -p build
	cd build && cmake .. && make

clear:
	rm -rf build
	rm findroot

.PHONY: build