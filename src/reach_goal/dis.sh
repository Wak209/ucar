gnome-terminal --window -e 'bash -c "roscore; exec bash"' \
--tab -e 'bash -c "sleep 3; roslaunch gazebo_nav ifly_nav_demo.launch; exec bash"' \
--tab -e 'bash -c "sleep 3; roslaunch xf_mic_asr_offline mic_init.launch; exec bash"' \
--tab -e 'bash -c "sleep 3; rosparam load /home/inano/ucar_ws/src/reach_goal/point.yaml"' \
--tab -e 'bash -c "sleep 5; rosrun reach_goal task_goal; exec bash"' \

