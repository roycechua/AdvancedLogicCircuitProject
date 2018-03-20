
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name advalog_project -dir "C:/Users/Jet/Documents/GitHub/AdvancedLogicCircuitProject/advalog_project/planAhead_run_1" -part xc6slx16csg324-2
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Entity_TrafficLight.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {TrafficLight.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top Entity_TrafficLight $srcset
add_files [list {Entity_TrafficLight.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-2
