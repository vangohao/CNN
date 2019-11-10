all: hls design bit
bit: 
	cd CNN/project_1/project_1.runs/impl_1/ && vivado -mode tcl -source design_1_wrapper.tcl
	cp CNN/project_1/project_1.runs/impl_1/design_1_wrapper.tcl design_1.bit
	cp CNN/project_1/project_1.srcs/sources_1/bd/design_1/hw_handoff/design_1.hwh design_1.hwh
design: 
	cd test && vivado -mode tcl -source run_bit.tcl
	sleep 20
hls: conv.cpp conv.h run_hls.tcl
	vivado_hls -f run_hls.tcl
csim:
	vivado_hls csim.tcl
clean: 
	rm -rf CNN/project_1
	rm -rf CNN