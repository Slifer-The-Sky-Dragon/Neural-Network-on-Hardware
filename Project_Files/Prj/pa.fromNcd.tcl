
# PlanAhead Launch Script for Post PAR Floorplanning, created by Project Navigator

create_project -name Cad_project2 -dir "C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/planAhead_run_2" -part xc6vcx75tff484-2
set srcset [get_property srcset [current_run -impl]]
set_property design_mode GateLvl $srcset
set_property edif_top_file "C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Neuron_Network.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Alireza/Desktop/CAD_projects/Cad_project2} }
set_property target_constrs_file "Neuron_Network.ucf" [current_fileset -constrset]
add_files [list {Neuron_Network.ucf}] -fileset [get_property constrset [current_run]]
link_design
read_xdl -file "C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Neuron_Network.ncd"
if {[catch {read_twx -name results_1 -file "C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Neuron_Network.twx"} eInfo]} {
   puts "WARNING: there was a problem importing \"C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Neuron_Network.twx\": $eInfo"
}
