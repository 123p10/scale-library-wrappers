#include "cufft.h"
#include "rocfft/rocfft.h"
cufftResult cufftPlan1d(cufftHandle *plan, int nx, cufftType type, int batch) {
	rocfft_plan roc_plan = (rocfft_plan){};
	rocfft_status status = rocfft_plan_create(&roc_plan);
}

cufftResult cufftPlan2d(cufftHandle *plan, int nx, int ny, cufftType type) {

}

cufftResult cufftPlan3d(cufftHandle *plan, int nx, int ny, int nz, cufftType type) {

}
cufftResult cufftPlanMany(cufftHandle *plan, int rank, int *n, int *inembed, int istride, int idist, int *onembed, int ostride, int odist, cufftType type, int batch) {

}
cufftResult cufftDestroy(cufftHandle plan) {

}
cufftResult cufftExecR2C(cufftHandle plan, cufftReal *idata, cufftComplex *odata) {

}
cufftResult cufftExecC2R(cufftHandle plan, cufftComplex *idata, cufftReal *odata) {

}
