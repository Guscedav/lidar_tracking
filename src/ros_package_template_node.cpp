#include <ros/ros.h>
#include "lidar_tracking/lidar_tracking.hpp"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "lidar_tracking");
  ros::NodeHandle nodeHandle("~");

  lidar_tracking::LidarTracking lidarTracking(nodeHandle);

  ros::spin();
  return 0;
}
