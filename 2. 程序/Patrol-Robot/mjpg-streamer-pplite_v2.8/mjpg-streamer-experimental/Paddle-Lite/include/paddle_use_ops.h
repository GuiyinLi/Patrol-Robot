#pragma once
#include "paddle_lite_factory_helper.h"

USE_LITE_OP(pool2d);
USE_LITE_OP(lod_array_length);
USE_LITE_OP(softmax);
USE_LITE_OP(matmul);
USE_LITE_OP(reduce_mean);
USE_LITE_OP(scale);
USE_LITE_OP(fill_constant);
USE_LITE_OP(density_prior_box);
USE_LITE_OP(grid_sampler);
USE_LITE_OP(sigmoid);
USE_LITE_OP(tanh);
USE_LITE_OP(relu);
USE_LITE_OP(leaky_relu);
USE_LITE_OP(relu6);
USE_LITE_OP(prelu);
USE_LITE_OP(thresholded_relu);
USE_LITE_OP(elu);
USE_LITE_OP(yolo_box);
USE_LITE_OP(prior_box);
USE_LITE_OP(search_fc);
USE_LITE_OP(affine_grid);
USE_LITE_OP(bilinear_interp_v2);
USE_LITE_OP(nearest_interp_v2);
USE_LITE_OP(nearest_interp);
USE_LITE_OP(bilinear_interp);
USE_LITE_OP(mul);
USE_LITE_OP(instance_norm);
USE_LITE_OP(pad2d);
USE_LITE_OP(affine_channel);
USE_LITE_OP(range);
USE_LITE_OP(cast);
USE_LITE_OP(expand);
USE_LITE_OP(arg_max);
USE_LITE_OP(layout_once);
USE_LITE_OP(assign_value);
USE_LITE_OP(fetch);
USE_LITE_OP(fc);
USE_LITE_OP(layout);
USE_LITE_OP(dropout);
USE_LITE_OP(conv2d);
USE_LITE_OP(depthwise_conv2d);
USE_LITE_OP(reshape);
USE_LITE_OP(reshape2);
USE_LITE_OP(slice);
USE_LITE_OP(fill_constant_batch_size_like);
USE_LITE_OP(expand_as);
USE_LITE_OP(elementwise_sub);
USE_LITE_OP(elementwise_add);
USE_LITE_OP(elementwise_mul);
USE_LITE_OP(elementwise_max);
USE_LITE_OP(elementwise_min);
USE_LITE_OP(elementwise_div);
USE_LITE_OP(elementwise_mod);
USE_LITE_OP(elementwise_pow);
USE_LITE_OP(elementwise_floordiv);
USE_LITE_OP(unsqueeze);
USE_LITE_OP(unsqueeze2);
USE_LITE_OP(split);
USE_LITE_OP(squeeze);
USE_LITE_OP(squeeze2);
USE_LITE_OP(stack);
USE_LITE_OP(subgraph);
USE_LITE_OP(io_copy);
USE_LITE_OP(feed);
USE_LITE_OP(transpose);
USE_LITE_OP(transpose2);
USE_LITE_OP(multiclass_nms);
USE_LITE_OP(multiclass_nms2);
USE_LITE_OP(multiclass_nms3);
USE_LITE_OP(batch_norm);
USE_LITE_OP(sync_batch_norm);
USE_LITE_OP(flatten);
USE_LITE_OP(flatten2);
USE_LITE_OP(flatten_contiguous_range);
USE_LITE_OP(io_copy_once);
USE_LITE_OP(box_coder);
USE_LITE_OP(concat);
USE_LITE_OP(calib);
USE_LITE_OP(conv2d_transpose);
USE_LITE_OP(depthwise_conv2d_transpose);
USE_LITE_OP(fusion_elementwise_sub_activation);
USE_LITE_OP(fusion_elementwise_add_activation);
USE_LITE_OP(fusion_elementwise_mul_activation);
USE_LITE_OP(fusion_elementwise_max_activation);
USE_LITE_OP(fusion_elementwise_min_activation);
USE_LITE_OP(fusion_elementwise_div_activation);
USE_LITE_OP(shuffle_channel);
USE_LITE_OP(sequence_topk_avg_pooling);