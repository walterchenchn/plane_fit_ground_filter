#include "plane_ground_filter_core.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "plane_ground_filter");

    ros::NodeHandle nh("~");

    PlaneGroundFilter core(nh);
    return 0;
}