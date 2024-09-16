#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <trajectory_msgs/MultiDOFJointTrajectory.h>
#include <mav_msgs/conversions.h>
#include <mav_msgs/default_topics.h>
#include <visualization_msgs/MarkerArray.h>
#include <swarm_exp_msgs/LocalTraj.h>
#include <swarm_exp_msgs/SwarmTraj.h>
#include <std_msgs/Empty.h>
#include <mavros_msgs/PositionTarget.h>

#include <gcopter/traj_opt.h>
#include <yaw_planner/yaw_planner.h>

#include <glog/logging.h>

#include <message_filters/subscriber.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <message_filters/sync_policies/exact_time.h>
#include <message_filters/time_synchronizer.h>


int main(int argc, char** argv){
    ros::init(argc, argv, "frontier_test");
    ros::NodeHandle nh, nh_private("~");

    google::InitGoogleLogging(argv[0]);
    google::ParseCommandLineFlags(&argc, &argv, true);
    google::InstallFailureSignalHandler();

    // traj_pub_ = nh.advertise<swarm_exp_msgs::SwarmTraj>("/traj_repub", 5);
    // traj_sub_ = nh.subscribe("/trajectory_cmd", 1, &RepubCallback);

    ros::spin();
    return 0;
}