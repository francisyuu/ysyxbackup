all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@verilator -Wall --cc --trace --exe --build csrc/main.cpp vsrc/example.v

include ../Makefile
