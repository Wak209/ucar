/*
 * send_goal.cpp
 *
 *  Created on: Aug 10, 2016
 *      Author: unicorn
 */
#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <opencv2/opencv.hpp>
#include "std_msgs/Int32.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
using namespace cv;
/*move_base_msgs::MoveBaseAction
 move_base在world中的目标
*/ 
typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction>  MoveBaseClient;
string writePath = "/home/inano/ucar_ws/src/reach_goal/src/picture1/";
int num=0;
int flag = 0;

void take_photo(string name )
{
	ROS_INFO("Taking photo...");
	VideoCapture capture("/dev/video0");
	

    capture.set(CV_CAP_PROP_FOURCC, cv::VideoWriter::fourcc('M', 'J', 'P', 'G'));
	capture.set(CV_CAP_PROP_FRAME_WIDTH, 3000);//宽度 
	capture.set(CV_CAP_PROP_FRAME_HEIGHT, 2000);//高度
	/*printf("width = %.2f\n",capture.get(CV_CAP_PROP_FRAME_WIDTH));
	printf("height = %.2f\n",capture.get(CV_CAP_PROP_FRAME_HEIGHT));
	printf("codec = %.2f\n",capture.get(CV_CAP_PROP_FOURCC));*/
	Mat frame;
    capture >> frame;
	cv::flip(frame, frame, 1);
	/*
	capture.set(CV_CAP_PROP_FPS, 30);//帧数
	capture.set(CV_CAP_PROP_BRIGHTNESS, 1);//亮度 1
	capture.set(CV_CAP_PROP_CONTRAST,40);//对比度 40
	capture.set(CV_CAP_PROP_SATURATION, 50);//饱和度 50
	capture.set(CV_CAP_PROP_HUE, 50);//色调 50
	capture.set(CV_CAP_PROP_EXPOSURE, 50);//曝光 50
	*/

	if(!capture.isOpened())
    {
        cout << "The camera open failed!" << endl;
    }
	string Name = writePath + name+".jpg";
	num++;
	imwrite(Name, frame);
	ROS_INFO("Photo Saved");
}

void chatterCallback(const std_msgs::Int32::ConstPtr& msg)
{
  ROS_INFO("I heard: [%d]", msg->data);
  flag=1;
}
int main(int argc, char** argv) {
	ros::init(argc, argv, "send_goals_node");

	/*
	// create the action client
	// true causes the client to spin its own thread
	//don't need ros::spin()
	创建action客户端，参数1：action名，参数2：true，不需要手动调用ros::spin()，会在它的线程中自动调用。
	*/
	
        MoveBaseClient ac("move_base", true);
	// Wait 60 seconds for the action server to become available
	ROS_INFO("Waiting for the move_base action server");
	ac.waitForServer(ros::Duration(60));
	ROS_INFO("Connected to move base server");
	// Send a goal to move_base
	//目标的属性设置
	move_base_msgs::MoveBaseGoal goal;

	ros::NodeHandle nh;






        float A_x,A_y,A_orientation_z,A_orientation_w;
        float B_x,B_y,B_orientation_z,B_orientation_w;
        float C_x,C_y,C_orientation_z,C_orientation_w;
        float D_x,D_y,D_orientation_z,D_orientation_w;
        float E_x,E_y,E_orientation_z,E_orientation_w;
        float F_x,F_y,F_orientation_z,F_orientation_w;
        float G_x,G_y,G_orientation_z,G_orientation_w;
        float H_x,H_y,H_orientation_z,H_orientation_w;
        float I_x,I_y,I_orientation_z,I_orientation_w;
        float J_x,J_y,J_orientation_z,J_orientation_w;
        float K_x,K_y,K_orientation_z,K_orientation_w;
        float L_x,L_y,L_orientation_z,L_orientation_w;
        nh.param<float>("A_x", A_x, 0.930747556686);
	nh.param<float>("A_y", A_y, -0.56055188179);
	nh.param<float>("A_orientation_z", A_orientation_z, -0.67986694919);
	nh.param<float>("A_orientation_w", A_orientation_w, 0.733335485632);

        nh.param<float>("B_x", B_x, 0.930747556686);
	nh.param<float>("B_y", B_y, -2.39049577713);
	nh.param<float>("B_orientation_z", B_orientation_z, -0.67986694919);
	nh.param<float>("B_orientation_w", B_orientation_w, 0.733335485632);
        
        nh.param<float>("C_x", C_x, 1.84972763062);
	nh.param<float>("C_y", C_y, -5.35860681534);
	nh.param<float>("C_orientation_z", C_orientation_z, -0.396612192649);
	nh.param<float>("C_orientation_w", C_orientation_w, 0.917986257328);

        nh.param<float>("D_x", D_x, 1.84972763062);
	nh.param<float>("D_y", D_y, -5.35860681534);
	nh.param<float>("D_orientation_z", D_orientation_z, 0.999413224747);
	nh.param<float>("D_orientation_w", D_orientation_w, 0.0342520977563);

        nh.param<float>("E_x", E_x, 0.930747556686);
	nh.param<float>("E_y", E_y, -2.68160748482);
	nh.param<float>("E_orientation_z", E_orientation_z, 0.716635863891);
	nh.param<float>("E_orientation_w", E_orientation_w, 0.698559996697);

        nh.param<float>("F_x", F_x, 0.930747556686);
	nh.param<float>("F_y", F_y, -0.48055188179);
	nh.param<float>("F_orientation_z", F_orientation_z, 0.716635863891);
	nh.param<float>("F_orientation_w", F_orientation_w, 0.698559996697);

        nh.param<float>("G_x", G_x, 2.58446002007);
	nh.param<float>("G_y", G_y, -3.65356659889);
	nh.param<float>("G_orientation_z", G_orientation_z, -0.609631758567);
	nh.param<float>("G_orientation_w", G_orientation_w, 0.792684753825);

        nh.param<float>("H_x", H_x, 5.28442716599);
	nh.param<float>("H_y", H_y, -1.86297929287);
	nh.param<float>("H_orientation_z", H_orientation_z, 0.887027850825);
	nh.param<float>("H_orientation_w", H_orientation_w, 0.461715921169);

        nh.param<float>("I_x", I_x, 5.28442716599);
	nh.param<float>("I_y", I_y, -3.45467686653);
	nh.param<float>("I_orientation_z", I_orientation_z, -0.833935306982);
	nh.param<float>("I_orientation_w", I_orientation_w, 0.551862214479);

        nh.param<float>("J_x", J_x, 2.69360589981);
	nh.param<float>("J_y", J_y, -2.17367887497);
	nh.param<float>("J_orientation_z", J_orientation_z, 0.595541658232);
	nh.param<float>("J_orientation_w", J_orientation_w, 0.803324425939);

        nh.param<float>("K_x", K_x, 0.566334664822);
	nh.param<float>("K_y", K_y, -0.0673633217812);
	nh.param<float>("K_orientation_z", K_orientation_z, 0.99988933715);
	nh.param<float>("K_orientation_w", K_orientation_w, -0.014876607634);

        nh.param<float>("L_x", L_x, -0.00081599832);
	nh.param<float>("L_y", L_y, -0.070616265535);
	nh.param<float>("L_orientation_z", L_orientation_z, 0.999338190378);
	nh.param<float>("L_orientation_w", L_orientation_w, 0.0363755584441);
	ros::Subscriber sub = nh.subscribe("/mic/awake/angle",10,chatterCallback);
	while (ros::ok() && !flag)
	{
		ros::spinOnce();
	}
	//<--------------------------------reach A---------------------------------------------------------->
	
	/*
  x: 1.95782911777
    y: -2.60378193855
    z: 0.0
  orientation: 
    x: 0.0
    y: 0.0
    z: -0.697457817265
    w: 0.71662583901


	*/
	goal.target_pose.header.frame_id = "map";
	goal.target_pose.header.stamp = ros::Time::now();
	goal.target_pose.pose.position.x = G_x;
	goal.target_pose.pose.position.y = G_y;
	goal.target_pose.pose.orientation.z = G_orientation_z;
	goal.target_pose.pose.orientation.w = G_orientation_w;
	ROS_INFO("Sending goal F");
	ac.sendGoal(goal);
	// Wait for the action to return
	ac.waitForResult();
	if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
	ROS_INFO("FINISH F TASK !");
	else
	ROS_INFO("The base failed for some reason");

	//<--------------------------------take photo---------------------------------------------------------->
    take_photo("D");


	goal.target_pose.header.frame_id = "map";
	goal.target_pose.header.stamp = ros::Time::now();
	goal.target_pose.pose.position.x = H_x;
	goal.target_pose.pose.position.y = H_y;
	goal.target_pose.pose.orientation.z = H_orientation_z;
	goal.target_pose.pose.orientation.w = H_orientation_w;
	ROS_INFO("Sending goal G");
	ac.sendGoal(goal);
	// Wait for the action to return
	ac.waitForResult();
	if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
	ROS_INFO("REACH G !");
	else
	ROS_INFO("The base failed for some reason");

	//<--------------------------------take photo---------------------------------------------------------->
    take_photo("C");


	goal.target_pose.header.frame_id = "map";
	goal.target_pose.header.stamp = ros::Time::now();
	goal.target_pose.pose.position.x = I_x;
	goal.target_pose.pose.position.y = I_y;
	goal.target_pose.pose.orientation.z = I_orientation_z;
	goal.target_pose.pose.orientation.w = I_orientation_w;
	ROS_INFO("Sending goal H");
	ac.sendGoal(goal);
	// Wait for the action to return
	ac.waitForResult();
	if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
	ROS_INFO("REACH H !");
	else
	ROS_INFO("The base failed for some reason");

	//<--------------------------------take photo---------------------------------------------------------->
    take_photo("B");

	goal.target_pose.header.frame_id = "map";
	goal.target_pose.header.stamp = ros::Time::now();
	goal.target_pose.pose.position.x = J_x;
	goal.target_pose.pose.position.y = J_y;
	goal.target_pose.pose.orientation.z = J_orientation_z;
	goal.target_pose.pose.orientation.w = J_orientation_w;
	ROS_INFO("Sending goal H");
	ac.sendGoal(goal);
	// Wait for the action to return
	ac.waitForResult();
	if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
	ROS_INFO("REACH H !");
	else
	ROS_INFO("The base failed for some reason");

	//<--------------------------------take photo---------------------------------------------------------->
    take_photo("E");
	goal.target_pose.header.frame_id = "map";
	goal.target_pose.header.stamp = ros::Time::now();
	//goal.target_pose.pose.position.x = 0.880747556686;
        goal.target_pose.pose.position.x = B_x;
	goal.target_pose.pose.position.y = B_y;
	goal.target_pose.pose.orientation.z = B_orientation_z;
	goal.target_pose.pose.orientation.w = B_orientation_w;
	ROS_INFO("Sending goal A");
	ac.sendGoal(goal);
	// Wait for the action to return
	ac.waitForResult();
	if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
	ROS_INFO("You have reached the goal A!");
	else
	ROS_INFO("The base failed for some reason");
	take_photo("0");
    //<--------------------------------reach B---------------------------------------------------------->

	goal.target_pose.header.frame_id = "map";
	goal.target_pose.header.stamp = ros::Time::now();


	goal.target_pose.pose.position.x = C_x;
	goal.target_pose.pose.position.y = C_y;
	goal.target_pose.pose.orientation.z = C_orientation_z;
	goal.target_pose.pose.orientation.w = C_orientation_w;
	ROS_INFO("Sending goal B");
	ac.sendGoal(goal);
	// Wait for the action to return
	ac.waitForResult();
	if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
	ROS_INFO("You have reached the goal B!");
	else
	ROS_INFO("The base failed for some reason");


    //<--------------------------------take photo---------------------------------------------------------->
    take_photo("1");

    //<--------------------------------reach C---------------------------------------------------------->



	goal.target_pose.header.frame_id = "map";
	goal.target_pose.header.stamp = ros::Time::now();
	goal.target_pose.pose.position.x = D_x;
	goal.target_pose.pose.position.y = D_y;
	goal.target_pose.pose.orientation.z = D_orientation_z;
	goal.target_pose.pose.orientation.w = D_orientation_w;
	ROS_INFO("Sending goal C");
	ac.sendGoal(goal);
	// Wait for the action to return
	ac.waitForResult();
	if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
	ROS_INFO("You have reached the goal C!");
	else
	ROS_INFO("The base failed for some reason");


	//<--------------------------------take photo---------------------------------------------------------->
    take_photo("2");
	//<--------------------------------reach D---------------------------------------------------------->

	goal.target_pose.header.frame_id = "map";
	goal.target_pose.header.stamp = ros::Time::now();
	goal.target_pose.pose.position.x = E_x;
	goal.target_pose.pose.position.y = E_y;
	goal.target_pose.pose.orientation.z = E_orientation_z;
	goal.target_pose.pose.orientation.w = E_orientation_w;
	ROS_INFO("Sending goal D");
	ac.sendGoal(goal);
	// Wait for the action to return
	ac.waitForResult();
	if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
	ROS_INFO("You have reached the goal D!");
	else
	ROS_INFO("The base failed for some reason");
    //<--------------------------------take photo---------------------------------------------------------->
    take_photo("3");
  	//<--------------------------------reach E---------------------------------------------------------->

	//<================================FINISH F TASK=======================================================>


	

	goal.target_pose.header.frame_id = "map";
	goal.target_pose.header.stamp = ros::Time::now();
	goal.target_pose.pose.position.x = K_x;
	goal.target_pose.pose.position.y = K_y;
	goal.target_pose.pose.orientation.z = K_orientation_z;
	goal.target_pose.pose.orientation.w = K_orientation_w;
	ROS_INFO("Sending goal HOME");
	ac.sendGoal(goal);
	// Wait for the action to return
	ac.waitForResult();
	if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
	ROS_INFO("REACH HOME !");
	else
	ROS_INFO("The base failed for some reason");
    	system("python /home/inano/ucar_ws/src/reach_goal/src/stop.py");
	system("python /home/inano/ucar_ws/src/reach_goal/src/predict1.py");
	return 0;
}

