open_project -reset CNN
set_top cnn
add_files conv.cpp
add_files conv.h
add_files conv_testbench.cpp -tb
open_solution -reset "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 10 -name default

# source "./solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -tool xsim
# export_design -format ip_catalog

exit