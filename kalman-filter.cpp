// This will model a mars lander as covered in Paul Newman's C18 Mobile Robotics course
#include <cstdlib>
#include <Eigen/Dense>

float delta_T = 0.1;
const int c = 3e8;
int seed = 253532;
float x_0 = 1e4;
float x_dot_0 = 0;


float plant_model_F[2][2]
{
    {1, delta_T},
    {0,     1  }
};

float noise_model_G[2][1];
float observation_model_H[1][2]
{
    {2/c, 0}
};
float estimate_cov_P[2][2];
float plant_model_cov_Q[2][2];
float observation_cov_R[2][2];

float x_est[2][1]
{
    {  x_0  },
    {x_dot_0}
};

int main()
{
    std::srand(seed);
    std::rand();
}
