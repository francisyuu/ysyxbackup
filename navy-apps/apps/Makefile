DIR=./nslider ./bird ./pal ./menu ./nterm ../tests/bmp-test ../tests/timer-test ../tests/event-test ../tests/file-test ../tests/hello ../tests/fixedpt-test
allam_native: 
	@for var in $(DIR);do cd $$var&&make ISA=am_native install;cd ..;done
alln:
	@for var in $(DIR);do cd $$var&&make ISA=native install;cd ..;done
	@cd ./nterm&&make ISA=native run

allriscv64:
	@for var in $(DIR);do cd $$var&&make ISA=riscv64 install;cd ..;done
