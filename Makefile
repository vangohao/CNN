all: design_1.bit
design_1.bit: ../project_1/project_1.runs/impl_1/design_1_wrapper.tcl
	cd ../project_1/project_1.runs/impl_1/ && vivado -mode tcl -source design_1_wrapper.tcl
	cp ../project_1/project_1.runs/impl_1/design_1_wrapper.tcl design_1.bit
	cp ../project_1/project_1.srcs/sources_1/bd/design_1/hw_handoff/design_1.hwh design_1.hwh
../project_1/project_1.runs/impl_1/design_1_wrapper.tcl: CNN/solution1/syn/report/cnn_csynth.rpt
	cd test && vivado -mode tcl -source run_bit.tcl
	sleep 20
CNN/solution1/syn/report/cnn_csynth.rpt: conv.cpp conv.h run_hls.tcl
	vivado_hls -f run_hls.tcl
clean: 
	rm -rf ../project_1
	rm -rf CNN