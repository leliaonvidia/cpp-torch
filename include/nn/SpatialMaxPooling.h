#pragma once
#include "Layer.h"


namespace cpptorch
{
    namespace nn
    {
        template<typename T, GPUFlag F>
        class SpatialMaxPooling : public Layer<T, F>
        {
        public:
            virtual const std::string name() const override { return "nn.SpatialMaxPooling"; }
            virtual Tensor<T, F> forward(const Tensor<T, F> &input) const override;

        protected:
            int kW_, kH_, dW_, dH_, padW_, padH_;
            bool ceil_mode_;
        };
    }
}
