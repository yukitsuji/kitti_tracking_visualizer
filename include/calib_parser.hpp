#ifndef CALIB_PARSER_HPP
#define CALIB_PARSER_HPP

#include <string>
#include <vector>

#include <eigen3/Eigen/Dense>

namespace mono_3d_det {
    Eigen::MatrixXd ParseCalibFile(std::string);
}

#endif
