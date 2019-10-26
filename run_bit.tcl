create_project project_1 /data/hls/project_1 -part xc7z020clg400-1
set_property board_part tul.com.tw:pynq-z2:part0:1.0 [current_project]
create_bd_design "design_1"
update_compile_order -fileset sources_1
startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.5 processing_system7_0
apply_bd_automation -rule xilinx.com:ip:processing_system7 -config {make_external "FIXED_IO, DDR" apply_board_preset "1" Master "Disable" Slave "Disable" } [get_bd_cells processing_system7_0]
set_property ip_repo_paths /data/hls/CNN [current_project]
update_ip_catalog
create_bd_cell -type ip -vlnv xilinx.com:hls:cnn:1.0 cnn_0
set_property -dict [list CONFIG.PCW_USE_S_AXI_HP0 {1}] [get_bd_cells processing_system7_0]
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { Clk_master {/processing_system7_0/FCLK_CLK0 (100 MHz)} Clk_slave {Auto} Clk_xbar {/processing_system7_0/FCLK_CLK0 (100 MHz)} Master {/cnn_0/m_axi_gmem} Slave {/processing_system7_0/S_AXI_HP1} intc_ip {/axi_smc} master_apm {0}}  [get_bd_intf_pins processing_system7_0/S_AXI_HP1]
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { Clk_master {Auto} Clk_slave {Auto} Clk_xbar {Auto} Master {/cnn_0/m_axi_gmem} Slave {/processing_system7_0/S_AXI_HP0} intc_ip {Auto} master_apm {0}}  [get_bd_intf_pins processing_system7_0/S_AXI_HP0]
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { Clk_master {Auto} Clk_slave {Auto} Clk_xbar {Auto} Master {/processing_system7_0/M_AXI_GP0} Slave {/cnn_0/s_axi_AXILiteS} intc_ip {New AXI Interconnect} master_apm {0}}  [get_bd_intf_pins cnn_0/s_axi_AXILiteS]
regenerate_bd_layout
save_bd_design
reset_run synth_1
launch_runs impl_1 -to_step write_bitstream -jobs 24
