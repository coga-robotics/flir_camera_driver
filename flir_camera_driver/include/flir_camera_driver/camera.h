#ifndef _CAMERA_H_
#define _CAMERA_H_

#include <ros/ros.h>

// Header generated by dynamic_reconfigure
#include <flir_camera_driver/FlirConfig.h>
#include "flir_camera_driver/set_property.h"

// Spinnaker SDK
#include "Spinnaker.h"
#include "SpinGenApi/SpinnakerGenApi.h"

namespace flir_camera_driver {
class Camera
{
public:
  Camera(Spinnaker::GenApi::INodeMap *node_map);
  ~Camera();
  virtual bool setFrameRate(const float frame_rate);
  virtual bool setNewConfiguration(flir_camera_driver::FlirConfig &config, const uint32_t &level);

protected:
  Spinnaker::GenApi::INodeMap *node_map_;

};
}
#endif //_CAMERA_H_
