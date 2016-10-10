#pragma once
#include "Layer.h"


namespace cpptorch
{
    namespace nn
    {
        template<class TTensor>
        class SpatialConvolutionMM : public Layer<TTensor>
        {
        public:
            virtual const std::string name() const override { return "nn.SpatialConvolutionMM"; }
            virtual Tensor<TTensor> forward(const Tensor<TTensor> &input) const override;

        protected:
            Tensor<TTensor> weight_, bias_;
            int kW_, kH_, dW_, dH_, padW_, padH_;
        };
    }
}