
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name advalog_project -dir "C:/Users/Jet/Documents/GitHub/AdvancedLogicCircuitProject/advalog_project/planAhead_run_2" -part xc6slx16csg324-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Jet/Documents/GitHub/AdvancedLogicCircuitProject/advalog_project/Entity_TrafficLight.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Jet/Documents/GitHub/AdvancedLogicCircuitProject/advalog_project} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "Entity_TrafficLight.ucf" [current_fileset -constrset]
add_files [list {Entity_TrafficLight.ucf}] -fileset [get_property constrset [current_run]]
link_design
